/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csettemplate.cpp
 */

#include "csettemplate.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cSetTemplate()
 */
cSetTemplate::cSetTemplate()
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cSetTemplate(typeLoop aSize)
 */
cSetTemplate::cSetTemplate(typeLoop aSize)
{
    vDrawingRangeValue = 0; // ustnowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(i); // dodanie nowego elementu
}

/*
 * cSetTemplate(typeLoop aSize)
 */
cSetTemplate::cSetTemplate(typeLoop aSize, typeData aDrawingRangeValue)
{
    vDrawingRangeValue = aDrawingRangeValue; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * bool mRemoveElement(typeData aValue)
 */
bool cSetTemplate::mRemoveElement(typeData aValue)
{
    //
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cSetTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(rand() % vDrawingRangeValue); // dodanie nowego elementu
}



/*
 * void mPrintAllElements()
 */
void cSetTemplate::mPrintAllElements()
{
    //
}

/********** PUBLIC: END **********/

/* csettemplate.cpp */
/********** END_OF_FILE **********/
