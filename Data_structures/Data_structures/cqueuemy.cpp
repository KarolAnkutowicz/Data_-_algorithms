/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuemy.h
 */

#include "cqueuemy.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cQueueMy()
 */
cQueueMy::cQueueMy()
{
    vQueueMy = new typeData[1]; // utworzenie nowej kolejki
    vSize = 1; // ustanowienie rozmiaru kolejki
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    vQueueMy[0] = 0; // nadanie wartosci jedynego elementu
}

/*
 * cQueueTemplate()
 */
cQueueMy::cQueueMy(typeLoop aSize)
{
    vQueueMy = new typeData[aSize]; // utworzenie nowej kolejki
    vSize = aSize; // ustanowienie rozmiaru kolejki
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cQueueTemplate()
 */
cQueueMy::cQueueMy(typeLoop aSize, typeData aDrawingRange)
{
    vQueueMy = new typeData[aSize]; // utworzenie nowej kolejki
    vSize = aSize; // ustanowienie rozmiaru kolejki
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
typeData cQueueMy::getFirstElement()
{

}

/*
 * typeData getLastElement()
 */
typeData cQueueMy::getLastElement()
{

}



/*
 * void mAddElement(typeData aElement)
 */
void cQueueMy::mAddElement(typeData aElement)
{

}

/*
 * bool mRemoveElement()
 */
bool cQueueMy::mRemoveElement()
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cQueueMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement()
 */
void cQueueMy::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement()
 */
void cQueueMy::mPrintLastElement()
{

}

/*
 * void mPrintAllElements()
 */
void cQueueMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cqueuemy.h */
/********** END_OF_FILE **********/
