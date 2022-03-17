/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmapmy.cpp
 */

#include "cmapmy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cMapMy()
 */
cMapMy::cMapMy()
{
    MapMy = new cElementMap[1]; // utworzenie nowej mapy
    vSize = 1; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    MapMy[0] = cElementMap('a', 0); // dodanie nowego elementu do mapy
}

/*
 * cMapMy(typeLoop aSize)
 */
cMapMy::cMapMy(typeLoop aSize)
{
    MapMy = new cElementMap[aSize]; // utworzenie nowej mapy
    vSize = aSize; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cMapMy(typeLoop aSize, typeData aDrawingRange)
 */
cMapMy::cMapMy(typeLoop aSize, typeData aDrawingRange)
{
    MapMy = new cElementMap[aSize]; // utworzenie nowej mapy
    vSize = aSize; // ustanowienie rozmiaru mapy
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cMapMy()
 */
cMapMy::~cMapMy()
{
    delete[]MapMy; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cMapMy::getElement(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli na mapie jest cokolwiek
    {
        if (mIfExist(aKey) == true) // wywolujemy sprawdzenie czy dany element istnieje
        {
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy w mapie
                if (MapMy[i].getKey() == aKey) // porownojemy klucze
                    return MapMy[i].getValue(); // jesli trafiamy na klucz jakiego potrzebujemy to zwracamy wartosc elementu
        }
        return NULL; // jesli dany element nie istnieje to nie mamy co zwrocic
    }
}



/*
 * bool mIfExist(typeKey aKey)
 */
bool cMapMy::mIfExist(typeKey aKey)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        return false; // jesli tak to na pewno nie ma w nim szukanego elementu
    else // jesli mapa zawiera cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy w mapie
            if (MapMy[i].getKey() == aKey) // porownojemy klucze
                return true; // zwracamy wartosc logiczna w przypadku znalezienia odpowiedniego elementu
        return false; // zwracamy wartosc logiczna w przypadku nieznalezienia odpowiedniego elementu
    }
}

/*
 * bool mAddElement(typeKey aKey, typeData aValue)
 */
bool cMapMy::mAddElement(typeKey aKey, typeData aValue)
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
    {
        MapMy[0].setKey(aKey); // ustanawiamy klucz jedynego elementu
        MapMy[0].setValue(aValue); // ustanawiamy wartosc jedynego elementu
        vSize++; // zwiekszamy rozmiar listy
    }
    else // jesli na liscie cos juz jest
    {
        if (mIfExist(aKey) == true) // jesli element o danym kluczu juz istnieje
        {
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elmenty
                if (MapMy[i].getKey() == aKey) // porownujemy klucze
                    MapMy[i].setValue(aValue); // jesli znalezlismy element o wskazanym kluczu to zmieniamy jego wartosc
        }
        else // jesli element o wskazanym kluczu nie istnieje
        {
            typeLoop aIndex = 0; // tworzymy zmienna do poszukiwan indeksu gdzie umiejscowimy nowy elementc
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy po wszystkich elementach
                if ((int)MapMy[i].getKey() < (int)aKey) // sprawdzamy czy biezacy element ma klucz mniejszy niz klucz nowego elementu
                    aIndex++; // jesli tak to zwiekszamy indeks nowego elementu
            cElementMap* MapMyAux; // utworzenie wskaznika do mapy pomocniczej
            MapMyAux = new cElementMap[vSize + 1]; // utworzenie mapy pomocniczej wiekszej o jeden element od oryginalnej
            for (typeLoop i = 0; i < aIndex; i++) // przejscie od poczatku mapy do miejsca gdzie wstawimy nowy element
                MapMyAux[i] = MapMy[i]; // przepisanie elementow do mapy pomocniczej
            MapMyAux[aIndex] = cElementMap(aKey, aValue); // wstawienie nowego elementu
            for (typeLoop i = aIndex; i < vSize; i++) // przejscie od miejsca gdzie wstawilismy nowy element do konca mapy
                MapMyAux[i + 1] = MapMy[i]; // przepisanie elementow do mapy pomocniczej
            delete[]MapMy; // zwalnianie zasobow przydzielanych dyunamicznie
            vSize++; // zwiekszenie rozmiaru mapy
            MapMy = new cElementMap[vSize]; // utworzenie noej oryginalnej mapy
            for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                MapMy[i] = MapMyAux[i]; // przepisanie elementow do mapy oryginalnej
            delete[]MapMyAux; // zwlanianie zasobow przydzielamnych dynamicznie
        }
    }
    return true; // zwrocenie informacji o prawidlowym dodaniu elementu
}

/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cMapMy::mRemoveElement(typeKey aKey)
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
                MapMy[0].setKey(NULL); // ustanawiamy klucz elementu
                MapMy[0].setValue(NULL); // ustanawiamy wartosc elementu
                vSize--; // zmniejszenie rozmiaru mapy
            }
            else
            {
                typeLoop aIndex = 0; // zmienna przechowujaca indeks szukanego elementu
                for (typeLoop i = 0; i < vSize; i++) // przechodzimy po wszystkich elementach
                    if (MapMy[i].getKey() == aKey) // porownujemy klucze
                        aIndex = i; // jesli znalezlismy poszukiwany klucz zapisujemy indeks elementu
                cElementMap* MapMyAux; // zadeklarowanie wskaznika do mapy pomocniczej
                MapMyAux = new cElementMap[vSize - 1]; // utworzenie mapy pomocniczej
                for (typeLoop i = 0; i < aIndex; i++) // przejscie od poczatku mapy do indeksu znalezionego elementu
                    MapMyAux[i] = MapMy[i]; // przepisanie elementow do mapy pomocniczej
                for (typeLoop i = aIndex + 1; i < vSize; i++) // przejscie od indesku znalezionewgo elementu do konca mapy
                    MapMyAux[i - 1] = MapMy[i]; // przepisanie elementow do mapy pomocniczej
                delete[]MapMy; // zwalnianie zasobow przydzielanych dynamicznie
                vSize--; // zmniejszenie rozmiaru
                MapMy = new cElementMap[vSize]; // utworzenie nowej oryginalnej mapy
                for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                    MapMy[i] = MapMyAux[i]; // przepisanie elementow z mapy pomocniczej do oryginalnej
                delete[]MapMyAux; // zwlanianie zasobow przydzielanych dynamicznie
            }
            return true; // zwrocenie informacji o pomyslnym usunieciue elementu
        }
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cMapMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy liczba elementow, ktore mamy wylosowac jest niezerowa
    {
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        typeLoop vChar; // utworzenie zmiennej do tworzenia kluczy
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        {
            vChar = 97 + i; // tworzenie klucza przed jego rzutowaniem
            MapMy[i].setKey((char)vChar); // nadanie klucza elementowi
            MapMy[i].setValue(rand() % vDrawingRange); // wylosowanie i przypisanie wartosci elementu
        }
    }
}



/*
 * void mPrintAllElements()
 */
void cMapMy::mPrintElement(typeKey aKey)
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
                if (MapMy[i].getKey() == aKey) // porownujemy klucze
                    std::cout << "[" << (char)MapMy[i].getKey() << "]=" << MapMy[i].getValue() << "\n"; // wypisujemy wskazany element
        }

    }
}

/*
 * void mPrintAllElements()
 */
void cMapMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzamy czy mapa jest pusta
        std::cout << "Mapa jest pusta!\n"; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli na mapie jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
            std::cout << "[" << (char)MapMy[i].getKey() << "]=" << MapMy[i].getValue() << "\n"; // wypisujemy kolejny element
    }
}

/********** PUBLIC: END **********/

/* cmapmyg.cpp */
/********** END_OF_FILE **********/
