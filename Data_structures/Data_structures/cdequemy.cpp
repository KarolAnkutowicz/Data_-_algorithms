/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequemy.cpp
 */

#include "cdequemy.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

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
 * typeData getFirstElement()
 */
typeData cDequeMy::getFirstElement()
{

}

/*
 * typeData getLastElement()
 */
typeData cDequeMy::getLastElement()
{

}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cDequeMy::mAddElementToBegin(typeData aElement)
{

}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cDequeMy::mAddElementToEnd(typeData aElement)
{

}

/*
 * bool mRemoveElementFromBegin()
 */
bool cDequeMy::mRemoveElementFromBegin()
{

}

/*
 * bool mRemoveElementFromEnd()
 */
bool cDequeMy::mRemoveElementFromEnd()
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cDequeMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement()
 */
void cDequeMy::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement()
 */
void cDequeMy::mPrintLastElement()
{

}

/*
 * void mPrintAllElements()
 */
void cDequeMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cdequemy.cpp */
/********** END_OF_FILE **********/
