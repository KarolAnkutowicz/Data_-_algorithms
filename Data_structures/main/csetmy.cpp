/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csetmy.cpp
 */

#include "csetmy.hpp"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cSetMy()
 */
cSetMy::cSetMy()
{
    SetMy = new typeData[1]; // utworzenie nowego zbioru
    vSize = 0; // ustanowienie rozmiaru zbioru
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    SetMy[0] = NULL; // ustanowienie braku wartosci
}

/*
 * cSetMy(typeLoop aSize)
 */
cSetMy::cSetMy(typeLoop aSize, typeData aDrawingRange)
{
    SetMy = new typeData[aSize]; // utworzenie nowego zbioru
    vSize = 0; // ustanowienie rozmiaru zbioru
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cSetMy()
 */
cSetMy::~cSetMy()
{
    delete[]SetMy; // zwialnianie zasobow przydzielanych dynamicznie
}



/*
 * bool mIfExist(typeData aValue)
 */
bool cSetMy::mIfExist(typeData aValue)
{
    if (vSize != 0) // sprawdzenie czy na liscie jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
            if (SetMy[i] == aValue) // sprawdzamy czy kolejny element jest rowny wzorcowemu
                return true; // jesli tak to zwracamy informacje ze element istnieje
    }
    return false; // zwracamy informacje o tym, ze taki element nie istnieje
}

/*
 * void mAddElement(typeData aValue)
 */
bool cSetMy::mAddElement(typeData aValue)
{
    if (mIfExist(aValue) == true) // sprawdzenie czy element juz istnieje w zbiorze
        return false; // jesli tak to nie dodajemy go do zbioru i zwracamy informacje o tym
    else
    {
        if (vSize == 0) // jesli zbior jest pusty
        {
            SetMy[0] = aValue; // ustanawiamy wartosc jedynego elementu
            vSize++; // zwiekszamy rozmiar zbioru
        }
        else
        {
            typeLoop aIndex = 0; // utworzenie zmiennej przechowujacej indeks nowego elementu
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy po wszystkich elementach
                if (SetMy[i] < aValue) // sprawdzamy czy biezaca wartosc jest mniejsza od nowej
                    aIndex++; // jesli tak to zmieni sie umiejscowienie nowego elementu
            typeData* SetMyAux; // tworzymy wskaznik do zbioru pomocniczego
            SetMyAux = new typeData[vSize + 1]; // tworzymy zbior pomocniczy
            for (typeLoop i = 0; i < aIndex; i++) // przechodzimy od poczatku zbioru do elementu ktory mamy dopisac
                SetMyAux[i] = SetMy[i]; // kopiujemy elementy do zbioru pomocniczego
            SetMyAux[aIndex] = aValue; // kopiujemy wartosc nowego elementu
            for (typeLoop i = aIndex; i < vSize; i++) // przechodzimy od elementu, ktory dodalismy do konca zbioru
                SetMyAux[i + 1] = SetMy[i]; // kopiujrmy elementy do zbioru pomocniczego
            delete[]SetMy; // zwalniamy zasoby przydzielane dynamicznie
            vSize++; // zwiekszamy rozmiarzbioru
            SetMy = new typeData[vSize]; // tworzymy nowy oryginalny zbior
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy po wszystkich elementach
                SetMy[i] = SetMyAux[i]; // kopiujemy wartosci do oryginalnego zbioru
            delete[]SetMyAux; // zwalniamy zasoby przydzielane dynamicznie
        }
        return true; // zwracamy informacje ze dodanie elementu sie powiodlo
    }
}

/*
 * bool mRemoveElement(typeData aValue)
 */
bool cSetMy::mRemoveElement(typeData aValue)
{
    if (mIfExist(aValue) == false) // sprawdzamy czy element istnieje
        return false; // jesli nie to nie mamy co usuwac
    else // jesli element istnieje
    {
        if (vSize == 1) // sprawdzamy czy jest to jedyny element
        {
            SetMy[0] = NULL; // jesli tak to usuwamy jego wartosc
            vSize--; // zerujemy licznik elementow
        }
        else // jesli na liscie jest wiecej niz jeden element
        {
            typeLoop aIndex = 0; // tworzymy zmienna do oznaczenia indeksu szukanego elementu
            for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
                if (SetMy[i] < aValue) // jesli element biezacy jest mniejszy od szukanego
                    aIndex++; // wowczas zwiekszamy indeks szukanego elementu
            typeData* SetMyAux; // tworzymy wskaznik do zbioru pomocniczego
            SetMyAux = new typeData[vSize - 1]; // tworzymy zbior pomocniczy pomniejszony o jeden element niz oryginalny
            for (typeLoop i = 0; i < aIndex; i++) // przechodzimy od pierwszego elementu do szukanego
                SetMyAux[i] = SetMy[i]; // kopiujemy zawartosc do zbioru pomocniczego
            for (typeLoop i = (aIndex + 1); i < vSize; i++) // przechodzimy od elementu szukanego do konca zbioru
                SetMyAux[i - 1] = SetMy[i]; // kopiujemy zawartosc do zbioru pomocniczego
            delete[]SetMy; // zwalnianie zasobow przydzielanych dynamicznie
            vSize--; // zmniejszenie rozmiaru
            SetMy = new typeData[vSize]; // utworzenie nowego oryginalnego zbioru
            for (typeLoop i = 0; i < vSize; i++)// przejscie po wszystkich elementach
                SetMy[i] = SetMyAux[i]; // kopiujemy zawartosc do zbioru oryginalnego
            delete[]SetMyAux; // zwalnianie zasobow przydzielanych dynamicznie
        }
        return false; // w przypadku niepowodzenia usuniecia elementow zwracamy informacje o tym
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cSetMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy na pewno rozmiar jeest niezerowy
    {
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
            mAddElement(rand() % vDrawingRange); // dodanie wylosowanej wartosci do zbioru
    }
}



/*
 * void mPrintAllElements()
 */
void cSetMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzenie czy zbior jest pusty
        cout << "Zbior jest pusty!" << endl; // jesli tak to wypisujemy informacje o tym
    else // jesli w zbiorze jest cokolwiek
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy po kolejnych elementach
            cout << SetMy[i] << endl; // wypisujemy wskazany element
    }
}

/********** PUBLIC: END **********/

/* csetmy.cpp */
/********** END_OF_FILE **********/
