/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequemy.cpp
 */

#include "cdequemy.hpp"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDequeMy()
 */
cDequeMy::cDequeMy()
{
    DequeMy = new typeData[1]; // utworzenie nowej kolejki dwukierunkowej
    vSize = 1; // ustanowienie rozmiaru kolejki dwukierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    DequeMy[0] = 0; // nadanie wartosci jedynego elementu
}

/*
 * cDequeMy()
 */
cDequeMy::cDequeMy(typeLoop aSize)
{
    DequeMy = new typeData[aSize]; // utworzenie nowej kolejki dwukierunkowej
    vSize = aSize; // ustanowienie rozmiaru kolejki dwukierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy kolejki
}

/*
 * cDequeMy()
 */
cDequeMy::cDequeMy(typeLoop aSize, typeData aDrawingRange)
{
    DequeMy = new typeData[aSize]; // utworzenie nowej kolejki dwukierunkowej
    vSize = aSize; // ustanowienie rozmiaru kolejki dwukierunkowej
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy kolejki
}

/*
 * ~cDequeMy()
 */
cDequeMy::~cDequeMy()
{
    delete[]DequeMy; // zwlanianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getFirstElement()
 */
typeData cDequeMy::getFirstElement()
{
    if (!vSize) // sprawdzamy czy kolejka dwukierunkowa nie jest pusta
        return DequeMy[0]; // jesli nie to zwracamy pierwszy element
    else // jesli jest pusta...
        return NULL; // ...to nie mamy co zwrocic
}

/*
 * typeData getLastElement()
 */
typeData cDequeMy::getLastElement()
{
    if (!vSize) // sprawdzamy czy kolejka dwukierunkowa nie jest pusta
        return DequeMy[vSize - 1]; // jesli nie to zwracamy ostatni element
    else // jesli jest pusta...
        return NULL; // ...to nie mamy co zwrocic
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cDequeMy::mAddElementToBegin(typeData aElement)
{
    vSize++; // zwiekszamy rozmiar kolejki dwukierunkowej
    typeData* DequeMyAux; // deklarujemy wskaznik do pomocniczej kolejki dwukierunkowej
    DequeMyAux = new typeData[vSize]; // tworzymy pomocnicza kolejke dwukierunkowa
    for (typeLoop i = 1; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
        DequeMyAux[i] = DequeMy[i - 1]; // kopiowanie elementow do pomocniczej kolejki dwukierunkowej
    DequeMyAux[0] = aElement; // dopisanie nowego elementu
    delete[]DequeMy; // zwalnienie zasobow przydzielanych dynamicznie
    DequeMy = new typeData[vSize]; // utworzenie nowej kolejki dwukierunkowej
    for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
        DequeMy[i] = DequeMyAux[i]; // kopiowanie elementow z pomocniczej kolejki dwukierunkowej
    delete[]DequeMyAux; // zwalnianie zasobow przydzielanych dynamicznie
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cDequeMy::mAddElementToEnd(typeData aElement)
{
    vSize++; // zwiekszamy rozmiar kolejki dwukierunkowej
    typeData* DequeMyAux; // deklarujemy wskaznik do pomocniczej kolejki dwukierunkowej
    DequeMyAux = new typeData[vSize]; // tworzymy pomocnicza kolejke dwukierunkowa
    for (typeLoop i = 0; i < (vSize - 1); i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
        DequeMyAux[i] = DequeMy[i]; // kopiowanie elementow do pomocniczej kolejki dwukierunkowej
    DequeMyAux[vSize - 1] = aElement; // dopisanie nowego elementu
    delete[]DequeMy; // zwalnienie zasobow przydzielanych dynamicznie
    DequeMy = new typeData[vSize]; // utworzenie nowej kolejki dwukierunkowej
    for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
        DequeMy[i] = DequeMyAux[i]; // kopiowanie elementow z pomocniczej kolejki dwukierunkowej
    delete[]DequeMyAux; // zwalnianie zasobow przydzielanych dynamicznie
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cDequeMy::mRemoveElementFromBegin()
{
    if (vSize == 0) // sprawdzamy czy kolejka dwukierunkowa jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else
    {
        vSize--; // zmniejszamy rozmiar kolejki dwukierunkowej
        typeData* DequeMyAux; // deklarujemy wskaznik do pomocniczej kolejki dwukierunkowej
        DequeMyAux = new typeData[vSize]; // tworzymy pomocnicza kolejke dwukierunkowa
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
            DequeMyAux[i] = DequeMy[i + 1]; // kopiowanie elementow do pomocniczej kolejki dwukierunkowej - pominiecie pierwszego elementu
        delete[]DequeMy; // zwalnienie zasobow przydzielanych dynamicznie
        DequeMy = new typeData[vSize]; // utworzenie nowej kolejki dwukierunkowej
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
            DequeMy[i] = DequeMyAux[i]; // kopiowanie elementow z pomocniczej kolejki dwukierunkowej
        delete[]DequeMyAux; // zwalnianie zasobow przydzielanych dynamicznie
        return true; // zwrocenie infromacji o pomyslnym usunieciu elementu
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cDequeMy::mRemoveElementFromEnd()
{
    if (vSize == 0) // sprawdzamy czy kolejka dwukierunkowa jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else
    {
        vSize--; // zmniejszamy rozmiar kolejki dwukierunkowej
        typeData* DequeMyAux; // deklarujemy wskaznik do pomocniczej kolejki dwukierunkowej
        DequeMyAux = new typeData[vSize]; // tworzymy pomocnicza kolejke dwukierunkowa
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
            DequeMyAux[i] = DequeMy[i]; // kopiowanie elementow do pomocniczej kolejki dwukierunkowej - pominiecie ostatniego elementu
        delete[]DequeMy; // zwalnienie zasobow przydzielanych dynamicznie
        DequeMy = new typeData[vSize]; // utworzenie nowej kolejki dwukierunkowej
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce dwukierunkowej
            DequeMy[i] = DequeMyAux[i]; // kopiowanie elementow z pomocniczej kolejki dwukierunkowej
        delete[]DequeMyAux; // zwalnianie zasobow przydzielanych dynamicznie
        return true; // zwrocenie infromacji o pomyslnym usunieciu elementu
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cDequeMy::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        DequeMy[i] = rand() % vDrawingRange; // przypisanie wylosowanej wartosci
}



/*
 * void mPrintFirstElement()
 */
void cDequeMy::mPrintFirstElement()
{
    if (vSize == 0) // sprawdzenie czy kolejka dwukierunkowa jest pusta
        cout << "Kolejka dwukierunkowa jest pusta!" << endl; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce dwukierunkowej
        cout << DequeMy[0] << endl; // wypisujemy wartosc pierwszego elementu kolejki dwukierunkowej
}

/*
 * void mPrintLastElement()
 */
void cDequeMy::mPrintLastElement()
{
    if (vSize == 0) // sprawdzenie czy kolejka dwukierunkowa jest pusta
        cout << "Kolejka dwukierunkowa jest pusta!" << endl; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce dwukierunkowej
        cout << DequeMy[vSize - 1] << endl; // wypisujemy wartosc ostatniego elementu kolejki dwukierunkowej
}

/*
 * void mPrintAllElements()
 */
void cDequeMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzenie czy kolejka dwukierunkowa jest pusta
        cout << "Kolejka dwukierunkowa jest pusta!" << endl; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce dwukierunkowej
    {
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach kolejki dwukierunkowej
            cout << DequeMy[i] << endl; // wypisanie wskazanego elementu
    }
}

/********** PUBLIC: END **********/

/* cdequemy.cpp */
/********** END_OF_FILE **********/
