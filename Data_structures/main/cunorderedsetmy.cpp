/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedsetmy.cpp
 */

#include "cunorderedsetmy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cUnorderedSetMy()
 */
cUnorderedSetMy::cUnorderedSetMy()
{
    UnorderedSetMy = new typeData[1]; // utworzenie nowego zbioru
    vSize = 0; // ustanowienie rozmiaru zbioru
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    UnorderedSetMy[0] = NULL; // ustanowienie braku wartosci
}

/*
 * cUnorderedSetMy(typeLoop aSize, typeData aDdrawingRange)
 */
cUnorderedSetMy::cUnorderedSetMy(typeLoop aSize, typeData aDrawingRange)
{
    UnorderedSetMy = new typeData[aSize]; // utworzenie nowego zbioru
    vSize = 0; // ustanowienie rozmiaru zbioru
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cUnorderedSetMy()
 */
cUnorderedSetMy::~cUnorderedSetMy()
{
    delete[]UnorderedSetMy; // zwialnianie zasobow przydzielanych dynamicznie
}



/*
 * bool mIfExist(typeData aValue)
 */
bool cUnorderedSetMy::mIfExist(typeData aValue)
{
    if (vSize != 0) // sprawdzenie czy na liscie jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
            if (UnorderedSetMy[i] == aValue) // sprawdzamy czy kolejny element jest rowny wzorcowemu
                return true; // jesli tak to zwracamy informacje ze element istnieje
    }
    return false; // zwracamy informacje o tym, ze taki element nie istnieje
}



/*
 * void mAddElement(typeData aValue)
 */
bool cUnorderedSetMy::mAddElement(typeData aValue)
{
    if (mIfExist(aValue) == true) // sprawdzenie czy element juz istnieje w zbiorze
        return false; // jesli tak to nie dodajemy go do zbioru i zwracamy informacje o tym
    else
    {
        if (vSize == 0) // jesli zbior jest pusty
        {
            UnorderedSetMy[0] = aValue; // ustanawiamy wartosc jedynego elementu
            vSize++; // zwiekszamy rozmiar zbioru
        }
        else
        {
            typeData* UnorderedSetMyAux; // tworzymy wskaznik do zbioru pomocniczego
            UnorderedSetMyAux = new typeData[vSize + 1]; // tworzymy zbior pomocniczy
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy od poczatku zbioru do elementu ktory mamy dopisac
                UnorderedSetMyAux[i] = UnorderedSetMy[i]; // kopiujemy elementy do zbioru pomocniczego
            delete[]UnorderedSetMy; // zwalniamy zasoby przydzielane dynamicznie
            vSize++; // zwiekszamy rozmiar zbioru
            for (typeLoop i = 0; i < (vSize - 1); i++) // przechodzimy po wszystkich elementach
                UnorderedSetMy[i] = UnorderedSetMyAux[i]; // kopiujemy wartosci do oryginalnego zbioru
            UnorderedSetMy[vSize - 1] = aValue; // kopiujemy wartosci do oryginalnego zbioru
            delete[]UnorderedSetMyAux; // zwalniamy zasoby przydzielane dynamicznie
        }
        return true; // zwracamy informacje ze dodanie elementu sie powiodlo
    }
}

/*
 * bool mRemoveElement(typeData aValue)
 */
bool cUnorderedSetMy::mRemoveElement(typeData aValue)
{
    if (mIfExist(aValue) == false) // sprawdzamy czy element istnieje
        return false; // jesli nie to nie mamy co usuwac
    else // jesli element istnieje
    {
        if (vSize == 1) // sprawdzamy czy jest to jedyny element
        {
            UnorderedSetMy[0] = NULL; // jesli tak to usuwamy jego wartosc
            vSize--; // zerujemy licznik elementow
        }
        else // jesli na liscie jest wiecej niz jeden element
        {
            typeLoop aIndex = 0; // tworzymy zmienna do oznaczenia indeksu szukanego elementu
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
                if (UnorderedSetMy[i] < aValue) // jesli element biezacy jest mniejszy od szukanego
                    aIndex++; // wowczas zwiekszamy indeks szukanego elementu
            typeData* UnorderedSetMyAux; // tworzymy wskaznik do zbioru pomocniczego
            UnorderedSetMyAux = new typeData[vSize - 1]; // tworzymy zbior pomocniczy pomniejszony o jeden element niz oryginalny
            for (typeLoop i = 0; i < aIndex; i++) // przechodzimy od pierwszego elementu do szukanego
                UnorderedSetMyAux[i] = UnorderedSetMy[i]; // kopiujemy zawartosc do zbioru pomocniczego
            for (typeLoop i = (aIndex + 1); i < vSize; i++) // przechodzimy od elementu szukanego do konca zbioru
                UnorderedSetMyAux[i - 1] = UnorderedSetMy[i]; // kopiujemy zawartosc do zbioru pomocniczego
            delete[]UnorderedSetMy; // zwalnianie zasobow przydzielanych dynamicznie
            vSize--; // zmniejszenie rozmiaru
            UnorderedSetMy = new typeData[vSize]; // utworzenie nowego oryginalnego zbioru
            for (typeLoop i = 0; i < vSize; i++)// przejscie po wszystkich elementach
                UnorderedSetMy[i] = UnorderedSetMyAux[i]; // kopiujemy zawartosc do zbioru oryginalnego
            delete[]UnorderedSetMyAux; // zwalnianie zasobow przydzielanych dynamicznie
        }
        return false; // w przypadku niepowodzenia usuniecia elementow zwracamy informacje o tym
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cUnorderedSetMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy na pewno rozmiar jeest niezerowy
    {
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
            mAddElement(rand() % vDrawingRange); // dodanie wylosowanej wartosci do zbioru
    }
}



/*
 * void cUnorderedSetMy::mPrintAllElements()
 */
void cUnorderedSetMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzenie czy zbior jest pusty
        std::cout << "Zbior jest pusty!\n"; // jesli tak to wypisujemy informacje o tym
    else // jesli w zbiorze jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy po kolejnych elementach
            std::cout << UnorderedSetMy[i] << " "; // wypisujemy wskazany element
        std::cout << "\n"; // przejscie do nowej linii
    }
}

/********** PUBLIC: END **********/

/* cunorderedsetmy.cpp */
/********** END_OF_FILE **********/
