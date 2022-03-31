/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedmapmy.cpp
 */

#include "cunorderedmapmy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cUnorderedMapMy()
 */
cUnorderedMapMy::cUnorderedMapMy()
{
    UnorderedMapMy = new cElementMap[1]; // utworzenie nowej mapy
    vSize = 0; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    UnorderedMapMy[0] = cElementMap('a', 0); // dodanie nowego elementu do mapy
}

/*
 * cUnorderedMapMy(typeLoop aSize)
 */
cUnorderedMapMy::cUnorderedMapMy(typeLoop aSize)
{
    UnorderedMapMy = new cElementMap[1]; // utworzenie nowej mapy
    vSize = 0; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cUnorderedMapMy(typeLoop aSize, typeData aDrawingRange)
 */
cUnorderedMapMy::cUnorderedMapMy(typeLoop aSize, typeData aDrawingRange)
{
    UnorderedMapMy = new cElementMap[1]; // utworzenie nowej mapy
    vSize = 0; // ustanowienie rozmiaru mapy
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cUnorderedMapMy()
 */
cUnorderedMapMy::~cUnorderedMapMy()
{
    delete []UnorderedMapMy; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cUnorderedMapMy::getElement(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli na mapie jest cokolwiek
    {
        if (mIfExist(aKey) == true) // wywolujemy sprawdzenie czy dany element istnieje
        {
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy w mapie
                if (UnorderedMapMy[i].getKey() == aKey) // porownojemy klucze
                    return UnorderedMapMy[i].getValue(); // jesli trafiamy na klucz jakiego potrzebujemy to zwracamy wartosc elementu
        }
        return NULL; // jesli dany element nie istnieje to nie mamy co zwrocic
    }
}



/*
 * bool mIfExist(typeKey aKey)
 */
bool cUnorderedMapMy::mIfExist(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        return false; // jesli tak to na pewno nie ma w nim szukanego elementu
    else // jesli mapa zawiera cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy w mapie
            if (UnorderedMapMy[i].getKey() == aKey) // porownojemy klucze
                return true; // zwracamy wartosc logiczna w przypadku znalezienia odpowiedniego elementu
        return false; // zwracamy wartosc logiczna w przypadku nieznalezienia odpowiedniego elementu
    }
}

/*
 * bool mAddElement(typeKey aKey, typeData aValue)
 */
bool cUnorderedMapMy::mAddElement(typeKey aKey, typeData aValue)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
    {
        UnorderedMapMy[0].setKey(aKey); // ustanawiamy klucz jedynego elementu
        UnorderedMapMy[0].setValue(aValue); // ustanawiamy wartosc jedynego elementu
        vSize++; // zwiekszamy rozmiar listy
    }
    else // jesli na liscie cos juz jest
    {
        if (mIfExist(aKey) == true) // jesli element o danym kluczu juz istnieje
        {
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elmenty
                if (UnorderedMapMy[i].getKey() == aKey) // porownujemy klucze
                    UnorderedMapMy[i].setValue(aValue); // jesli znalezlismy element o wskazanym kluczu to zmieniamy jego wartosc
        }
        else // jesli element o wskazanym kluczu nie istnieje
        {
            cElementMap* UnorderedMapMyAux; // utworzenie wskaznika do mapy pomocniczej
            UnorderedMapMyAux = new cElementMap[vSize]; // utworzenie mapy pomocniczej wiekszej o jeden element od oryginalnej
            for (typeLoop i = 0; i < vSize; i++) // przejscie od poczatku mapy do miejsca gdzie wstawimy nowy element
                UnorderedMapMyAux[i] = UnorderedMapMy[i]; // przepisanie elementow do mapy pomocniczej
            delete[]UnorderedMapMy; // zwalnianie zasobow przydzielanych dyunamicznie
            vSize++; // zwiekszenie rozmiaru mapy
            for (typeLoop i = 0; i < (vSize - 1); i++) // przejscie po wszystkich elementach
                UnorderedMapMy[i] = UnorderedMapMyAux[i]; // przepisanie elementow do mapy oryginalnej
            UnorderedMapMy[vSize - 1] = cElementMap(aKey, aValue);
            delete[]UnorderedMapMyAux; // zwlanianie zasobow przydzielamnych dynamicznie*/
        }
    }
    return true; // zwrocenie informacji o prawidlowym dodaniu elementu
}

/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cUnorderedMapMy::mRemoveElement(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else // jesli na mapie jest cokolwiek
    {
        if (mIfExist(aKey) == false) // sprawdzamy czy istnieje element o wskazanym kluczu
            return false; // jesli element nie istnieje to nie mamy co usuwac
        else // jesli element o danym kluczu istnieje
        {
            if (vSize == 1) // jesli wskazany element jest jedynym w mapie
            {
                UnorderedMapMy[0].setKey(NULL); // ustanawiamy klucz elementu
                UnorderedMapMy[0].setValue(NULL); // ustanawiamy wartosc elementu
                vSize--; // zmniejszenie rozmiaru mapy
            }
            else
            {
                typeLoop aIndex = 0; // zmienna przechowujaca indeks szukanego elementu
                for (typeLoop i = 0; i < vSize; i++) // przechodzimy po wszystkich elementach
                    if (UnorderedMapMy[i].getKey() == aKey) // porownujemy klucze
                        aIndex = i; // jesli znalezlismy poszukiwany klucz zapisujemy indeks elementu
                cElementMap* UnorderedMapMyAux; // zadeklarowanie wskaznika do mapy pomocniczej
                UnorderedMapMyAux = new cElementMap[vSize - 1]; // utworzenie mapy pomocniczej
                for (typeLoop i = 0; i < aIndex; i++) // przejscie od poczatku mapy do indeksu znalezionego elementu
                    UnorderedMapMyAux[i] = UnorderedMapMy[i]; // przepisanie elementow do mapy pomocniczej
                for (typeLoop i = aIndex + 1; i < vSize; i++) // przejscie od indesku znalezionewgo elementu do konca mapy
                    UnorderedMapMyAux[i - 1] = UnorderedMapMy[i]; // przepisanie elementow do mapy pomocniczej
                delete[]UnorderedMapMy; // zwalnianie zasobow przydzielanych dynamicznie
                vSize--; // zmniejszenie rozmiaru
                UnorderedMapMy = new cElementMap[vSize]; // utworzenie nowej oryginalnej mapy
                for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                    UnorderedMapMy[i] = UnorderedMapMyAux[i]; // przepisanie elementow z mapy pomocniczej do oryginalnej
                delete[]UnorderedMapMyAux; // zwlanianie zasobow przydzielanych dynamicznie
            }
            return true; // zwrocenie informacji o pomyslnym usunieciue elementu
        }
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cUnorderedMapMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy liczba elementow, ktore mamy wylosowac jest niezerowa
    {
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        typeLoop vChar; // utworzenie zmiennej do tworzenia kluczy
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        {
            vChar = 97 + i; // tworzenie klucza przed jego rzutowaniem
            mAddElement((char)vChar, rand() % vDrawingRange); // wylosowanie i przypisanie wartosci elementu
        }
    }
}



/*
 * void mPrintAllElements()
 */
void cUnorderedMapMy::mPrintElement(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa zawiera cokolwiek
        std::cout << "Mapa jest pusta!\n"; // jesli nie to wypisujemy odpowiedni komunikat
    else // jesli na mapie jest cokolwiek
    {
        if (mIfExist(aKey) == false) // sprawdzamy czy element o wskaznym kluczu istnieje
            std::cout << "Element o wskazanym kluczu nie istnieje!\n"; // jesli nie to wypisujemy odpowiedni komunikat
        else // jesli element o wskazanym kluczu istnieje
        {
            for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                if (UnorderedMapMy[i].getKey() == aKey) // porownujemy klucze
                    std::cout << "[" << (char)UnorderedMapMy[i].getKey() << "]=" << UnorderedMapMy[i].getValue() << "\n"; // wypisujemy wskazany element
        }
    }
}

/*
 * void mPrintAllElements()
 */
void cUnorderedMapMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        std::cout << "Mapa jest pusta!\n"; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli na mapie jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
            std::cout << "[" << (char)UnorderedMapMy[i].getKey() << "]=" << UnorderedMapMy[i].getValue() << "\n"; // wypisujemy kolejny element
    }
}

/********** PUBLIC: END **********/

/* cunorderedmapmy.cpp */
/********** END_OF_FILE **********/
