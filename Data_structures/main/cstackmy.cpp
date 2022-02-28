/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstackmy.cpp
 */

#include "cstackmy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cStackMy()
 */
cStackMy::cStackMy()
{
    StackMy = new typeData[0]; // nowa tablica elementow
    vSize = 1; // brak elementow
    vDrawingRange = 0; // zerowy zakres wartosci elementow
    mCheckStackIsEmpty(); // wywolanie metody sprawdzajacej czy stos jest pusty
}

/*
 * cStackMy(typeLoop aSize)
 */
cStackMy::cStackMy(typeLoop aSize)
{
    StackMy = new typeData[aSize]; // nowa tablica elementow
    vSize = aSize; // nadanie rozmiaru stosu
    vDrawingRange = 0; // ustanawiamy zerowy zakres wartosci elementow
    mCheckStackIsEmpty(); // wywolanie metody sprawdzajacej czy stos jest pusty
    if (getStackIsEmpty() == false) // sprawdzamhy czy odkladamy na stos niezerowa liczbe elementow
    {
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
            StackMy[i] = 0; // ustanawiamy wartosc elementu
    }
}

/*
 * cStackMy(typeLoop aSize, typeData aDrawingRange)
 */
cStackMy::cStackMy(typeLoop aSize, typeData aDrawingRange)
{
    StackMy = new typeData[aSize]; // nowa tablica elementow
    vSize = aSize; // nadanie rozmiaru stosu
    vDrawingRange = aDrawingRange; // ustanawiamy zakres wartosci elementow
    mCheckStackIsEmpty(); // wywolanie metody sprawdzajacej czy stos jest pusty
    if (getStackIsEmpty() == false) // sprawdzamy czy odkladamy na stos niezerowa liczbe elementow
        mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cStackMy()
 */
cStackMy::~cStackMy()
{
    delete[]StackMy; // zwalnianie zasobow przydzielanych dynamicznie
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
    typeData* StackAux; // deklaracja pomocniczej tablicy
    vSize++; // zwiejsza sie rozmiar stosu
    StackAux = new typeData[vSize]; // okreslamy rozmiar tablicy pomocniczej
    for (typeLoop i = 0; i < (vSize - 1); i++) // przechodzimy przez wszystkie elementy w aktualnej tablicy
        StackAux[i] = StackMy[i]; // kopiujemy element
    delete[]StackMy; // zwalniamy zasoby przydzielane dynamicznie
    StackMy = new typeData[vSize]; // tworzymy nowa tablice elementow
    for (typeLoop i = 0; i < (vSize - 1); i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu stosu
        StackMy[i] = StackAux[i]; // kopiujemy element
    delete[]StackAux; // zwalniamy zasoby przydzielane dynamicznie
    StackMy[vSize - 1] = aElement; // dopisujemy element na szczyt stosu
    mCheckStackIsEmpty(); // wywolanie metody sprawdzajacej czy stos jest pusty
}

/*
 * bool mRemoveElement()
 */
bool cStackMy::mRemoveElement()
{
    if (getStackIsEmpty() == false) // sprawdzamy czy stos nie jest pusty
    {
        typeData* StackAux; // deklaracja pomocniczej tablicy
        vSize--; // zmniejsza sie rozmiar stosu
        StackAux = new typeData[vSize]; // okreslamy rozmiar tablicy pomocniczej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu
            StackAux[i] = StackMy[i]; // kopiujemy element
        delete[]StackMy; // zwalniamy zasoby przydzielane dynamicznie
        StackMy = new typeData[vSize]; // tworzymy nowa tablice elementow
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy za wyjatkiem tego ze szczytu stosu
            StackMy[i] = StackAux[i]; // kopiujemy element
        delete[]StackAux; // zwalniamy zasoby przydzielane dynamicznie
        mCheckStackIsEmpty(); // wywolanie metody sprawdzajacej czy stos jest pusty
        return true; // zwracamy informacje, ze usunelismy element
    }
    else // jesli stos jest pusty
        return false; // zwracamy informacje, ze nic nie usunelismy
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cStackMy::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie wartosci losowej
    for (typeLoop i = 0; i < aSize; i++) // przechodzimy przez wszystkie elementy
        StackMy[i] = rand() % vDrawingRange; // ustanawiamy wartosc elementu
}

/*
 * void mCheckStackIsEmpty()
 */
void cStackMy::mCheckStackIsEmpty()
{
    if (vSize == 0) // sprawdzamy czy mamy cokolwiek na stosie
        vIsEmpty = true; // jesli nic to oznaczamy go jako pusty
    else // w przeciwnym przypadku
        vIsEmpty = false; // oznaczamy jako niepusty
}



/*
 * void mPrintElement()
 */
void cStackMy::mPrintElement()
{
    if (getStackIsEmpty() == false) // sprawdzamy czy stos nie jest pusty
        std::cout << StackMy[vSize - 1] << " "; // jesli nie jest to wypisujemy element ze szczytu stosu
    else // jesli stos jest pusty
        std::cout << "    Stos jest pusty!" << std::endl; // wyswietlamy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cStackMy::mPrintAllElements()
{
    if (getStackIsEmpty() == true)
        std::cout << "    Stos jest pusty!" << std::endl; // wypisujemy elementy az do ostatniego
    else
    {
        while (getStackIsEmpty() == false)
        {
            mPrintElement(); // wypisujemy element ze szczytu stosu
            mRemoveElement(); // usuwamy element dajac dostep do kolejnego
        }
    }
}

/********** PUBLIC: END **********/

/* cstackmy.cpp */
/********** END_OF_FILE **********/
