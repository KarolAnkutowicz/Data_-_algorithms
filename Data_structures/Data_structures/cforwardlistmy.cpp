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

}

/*
 * typeData getLastElement() - metoda zwracajaca
 */
typeData cForwardListMy::getLastElement()
{

}

/*
 * bool getListIsEmpty() - metoda zawracajaca
 */
bool cForwardListMy::getListIsEmpty()
{

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
