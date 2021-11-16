/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmaptemplate.cpp
 */

#include "cmaptemplate.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cMapTemplate()
 */
cMapTemplate::cMapTemplate()
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cMapTemplate(typeLoop aSize)
 */
cMapTemplate::cMapTemplate(typeLoop aSize)
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
    typeLoop vChar; // utworzenie zmiennej wykorzystywanej do tworzenia kluczy
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
    {
        vChar = i + 97; // przesuniecie zmiennej do wartosci w tablicy ASCII do malych liter
        MapTemplate[(char)vChar] = rand() % vDrawingRangeValue; // dodanie nowego elementu
    }
}

/*
 * cMapTemplate(typeLoop aSize)
 */
cMapTemplate::cMapTemplate(typeLoop aSize, typeData aDrawingRangeValue)
{
    vDrawingRangeValue = aDrawingRangeValue; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cMapTemplate::getElement(typeKey aKey)
{

}



/*
 * void mAddElement(cElementMapAndSet aElement)
 */
void cMapTemplate::mAddElement(cElementMapAndSet aElement)
{

}

/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cMapTemplate::mRemoveElement(typeKey aKey)
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cMapTemplate::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintAllElements()
 */
void cMapTemplate::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cmaptemplate.cpp */
/********** END_OF_FILE **********/
