/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstackmy.cpp
 */

#include "cstackmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cStackMy()
 */
cStackMy::cStackMy()
{
    StackMy = new typeData[0]; // nowa tablica elementow
    vSize = 0; // brak elementow
    vIsEmpty = true; // stos pusty
    vDrawingRange = 0; // zerowy zakres wartosci elementow
}

/*
 * cStackMy(typeLoop aSize)
 */
cStackMy::cStackMy(typeLoop aSize)
{
    StackMy = new typeData[aSize]; // nowa tablica elementow
    vSize = aSize; // nadanie rozmiaru stosu
    if (aSize != 0) // sprawdzamy czy nie podalismy rozmiaru zerowego
        vIsEmpty = false; // stos jest pusty
    else // w przeciwnym przypadku
    {
        vIsEmpty = true; // stos nie jest pusty
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
            StackMy[i] = 0; // ustanawiamy wartosc elementu
    }
    vDrawingRange = 0; // zerowy zakres wartosci elementow
}

/*
 * cStackMy(typeLoop aSize, typeData aDrawingRange)
 */
cStackMy::cStackMy(typeLoop aSize, typeData aDrawingRange)
{
    StackMy = new typeData[aSize]; // nowa tablica elementow
    vSize = aSize; // nadanie rozmiaru stosu
    if (aSize != 0) // sprawdzamy czy nie podalismy rozmiaru zerowego
        vIsEmpty = false; // stos jest pusty
    else // w przeciwnym przypadku
    {
        vIsEmpty = true; // stos nie jest pusty
        srand(time_t(NULL)); // ustanowienie wartosci losowej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
            StackMy[i] = rand() % aDrawingRange; // ustanawiamy wartosc elementu
    }
    vDrawingRange = aDrawingRange; // ustanawiamy zakres wartosci elementow
}

/*
 * ~cStackMy()
 */
cStackMy::~cStackMy()
{
    delete []StackMy; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement()
 */
typeData cStackMy::getElement()
{
    if (!vIsEmpty) // sprawdzamy czy stos nie jest pusty
        return StackMy[vSize - 1]; // przypisujemy wartosc ze szczytu stosu
    else // jesli stos jest pusty
        return  NULL; // nie mamy nic do zwrocenia
}



/*
 * void mAddElement(typeData aElement)
 */
void cStackMy::mAddElement(typeData aElement)
{
    typeData *StackAux; // deklaracja pomocniczej tablicy
    vSize++; // zwiejsza sie rozmiar stosu
    StackAux = new typeData[vSize]; // okreslamy rozmiar tablicy pomocniczej
    for (typeLoop i = 0; i < (vSize - 1); i++) // przechodzimy przez wszystkie elementy w aktualnej tablicy
        StackAux[i] = StackMy[i]; // kopiujemy element
    delete []StackMy; // zwalniamy zasoby przydzielane dynamicznie
    StackMy = new typeData[vSize]; // tworzymy nowa tablice elementow
    for (typeLoop i = 0; i < (vSize - 1); i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu stosu
        StackMy[i] = StackAux[i]; // kopiujemy element
    delete []StackAux; // zwalniamy zasoby przydzielane dynamicznie
    StackMy[vSize - 1] = aElement; // dopisujemy element na szczyt stosu
    if (vIsEmpty) // sprawdzamy czy wczesniej stos byl oznaczony jako pusty
        vIsEmpty = false; // stos nie jest juz oznaczony jako pusty
}

/*
 * bool mRemoveElement()
 */
bool cStackMy::mRemoveElement()
{
    if (!vIsEmpty) // sprawdzamy czy stos nie jest pusty
    {
        typeData *StackAux; // deklaracja pomocniczej tablicy
        vSize--; // zmniejsza sie rozmiar stosu
        StackAux = new typeData[vSize]; // okreslamy rozmiar tablicy pomocniczej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu
            StackAux[i] = StackMy[i]; // kopiujemy element
        delete []StackMy; // zwalniamy zasoby przydzielane dynamicznie
        StackMy = new typeData[vSize]; // tworzymy nowa tablice elementow
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu stosu
             StackMy[i] = StackAux[i]; // kopiujemy element
        delete []StackAux; // zwalniamy zasoby przydzielane dynamicznie
        return true; // zwracamy informacje, ze usunelismy element
    }
    else // jesli stos jest pusty
        return false; // zwracamy informacje, ze nic nie usunelismy
}



/*
 * void mPrintElement()
 */
void cStackMy::mPrintElement()
{
    if (!vIsEmpty) // sprawdzamy czy stos nie jest pusty
        cout << StackMy[vSize - 1]; // jesli nie jest to wypisujemy element ze szczytu stosu
    else // jesli stos jest pusty
        cout << "    Stos jest pusty!" << endl; // wyswietlamy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cStackMy::mPrintAllElements()
{
    if (!vIsEmpty)
        cout << "    Stos jest pusty!" << endl; // wypisujemy elementy az do ostatniego
    else
    {
        cout << "    Zawartosc stosu:" << endl; // rozpoczynamy wypisywanie zawartosci stosu
        while (!vIsEmpty)
        {
            mPrintElement(); // wypisujemy element ze szczytu stosu
            mRemoveElement(); // usuwamy element dajac dostep do kolejnego
        }
    }
}

/********** PUBLIC: END **********/

/* cstackmy.cpp */
/********** END_OF_FILE **********/
