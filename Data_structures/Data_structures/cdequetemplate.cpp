/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequetemplate.cpp
 */

#include "cdequetemplate.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cDequeTemplate()
 */
cDequeTemplate::cDequeTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cQueueTemplate(typeLoop aSize)
 */
cDequeTemplate::cDequeTemplate(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie przez wszystkie elementy
        mAddElementToEnd(0); // dodanie elementu na koniec kolejki dwukierunkowej
}

/*
 * cDequeTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cDequeTemplate::cDequeTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
typeData cDequeTemplate::getFirstElement()
{

}

/*
 * typeData getLastElement()
 */
typeData cDequeTemplate::getLastElement()
{

}



/*
 * bool mRemoveElementFromBegin()
 */
bool cDequeTemplate::mRemoveElementFromBegin()
{

}

/*
 * bool mRemoveElementFromEnd()
 */
bool cDequeTemplate::mRemoveElementFromEnd()
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cDequeTemplate::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement()
 */
void cDequeTemplate::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement()
 */
void cDequeTemplate::mPrintLastElement()
{

}

/*
 * void mPrintAllElements()
 */
void cDequeTemplate::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cdequetemplate.cpp */
/********** END_OF_FILE **********/
