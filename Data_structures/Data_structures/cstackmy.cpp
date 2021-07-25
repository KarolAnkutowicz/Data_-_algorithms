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
        vIsEmpty - true; // stos nie jest pusty
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
        vIsEmpty - true; // stos nie jest pusty
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

}



/*
 * void mAddElement(typeData aElement)
 */
void cStackMy::mAddElement(typeData aElement)
{

}

/*
 * bool mRemoveElement()
 */
bool cStackMy::mRemoveElement()
{

}



/*
 * void mPrintElement()
 */
void cStackMy::mPrintElement()
{

}

/*
 * void mPrintAllElements()
 */
void cStackMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cstackmy.cpp */
/********** END_OF_FILE **********/
