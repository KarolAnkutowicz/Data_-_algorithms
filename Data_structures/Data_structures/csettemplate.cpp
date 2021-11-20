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
    typeLoop vChar; // utworzenie zmiennej wykorzystywanej do tworzenia kluczy
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
    {
        vChar = i + 97; // przesuniecie wartosci na male litery w tablicy kodow ASCII
        mAddElement((char)vChar, 0); // dodanie nowego elementu
    }
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
 * typeData getElement(typeKey aKey)
 */
typeData cSetTemplate::getElement(typeKey aKey)
{

}



/*
 * void mAddElement(typeKey aKey, typeData aValue) - metoda
 */
void cSetTemplate::mAddElement(typeKey aKey, typeData aValue)
{

}

/*
 * bool mRemoveElement(typeKey aKey) - metoda usuwajaca
 */
bool cSetTemplate::mRemoveElement(typeKey aKey)
{

}

/*
 * void mDrawElements(typeLoop aSize) - metoda losujaca
 */
void cSetTemplate::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintAllElements() - metoda wyswietlajaca
 */
void cSetTemplate::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* csettemplate.cpp */
/********** END_OF_FILE **********/
