/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlistmy.cpp
 */

#include "cforwardlistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cForwardListMy() - konstruktor wywolywany bez argumentow.
 */
cForwardListMy::cForwardListMy()
{
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cForwardListMy(typeLoop aSize) - konstruktor wywolywany
 */
cForwardListMy::cForwardListMy(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElementToEnd(0); // dodanie nowego elementu
}

/*
 * cForwardListMy(typeLoop aSize, typeData aDrawingRange) -
 */
cForwardListMy::cForwardListMy(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement() - metoda zwracajaca
 */
typeData cForwardListMy::getFirstElement()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vFirst->getValue(); // jesli nie jest to zwracamy wartosc pierwszego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac
}

/*
 * typeData getLastElement() - metoda zwracajaca
 */
typeData cForwardListMy::getLastElement()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vLast->getValue(); // jesli nie jest to zwracamy wartosc ostatniego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac
}

/*
 * bool getListIsEmpty() - metoda zawracajaca
 */
bool cForwardListMy::getListIsEmpty()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie zawiera zadnego elementu
        return true; // jesli tak to zwracamy informacje o tym
    else // jesli na liscie jest jakikolwiek element
        return false; // zwracamy informacje ze lista jednokierunkowa nie jest pusta
}



/*
 * void mAddElementToBegin(typeData aElement) - metoda
 */
void cForwardListMy::mAddElementToBegin(typeData aElement)
{

}

/*
 * void mAddElementToEnd(typeData aElement) - metoda
 */
void cForwardListMy::mAddElementToEnd(typeData aElement)
{

}

/*
 * bool mRemoveElementFromBegin() - metoda usuwajaca
 */
bool cForwardListMy::mRemoveElementFromBegin()
{

}

/*
 * bool mRemoveElementFromEnd() - metoda usuwajaca
 */
bool cForwardListMy::mRemoveElementFromEnd()
{

}

/*
 * void mDrawElements(typeLoop aSize) - metoda losujaca
 */
void cForwardListMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintLastElement()
{

}

/*
 * void mPrintAllElements() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cforwardlistmy.cpp */
/********** END_OF_FILE **********/
