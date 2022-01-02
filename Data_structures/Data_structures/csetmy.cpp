/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csetmy.cpp
 */

#include "csetmy.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cSetMy()
 */
cSetMy::cSetMy()
{
    SetMy = new typeData[1]; // utworzenie nowego zbioru
    vSize = 0; // ustanowienie rozmiaru zbioru
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    SetMy[0] = NULL; // ustanowienie braku wartosci
}

/*
 * cSetMy(typeLoop aSize)
 */
cSetMy::cSetMy(typeLoop aSize, typeData aDrawingRange)
{
    SetMy = new typeData[aSize]; // utworzenie nowego zbioru
    vSize = aSize; // ustanowienie rozmiaru zbioru
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(vSize); // wywolanie metody losujacej elementy
}

/*
 * ~cSetMy()
 */
cSetMy::~cSetMy()
{
    delete []SetMy; // zwialnianie zasobow przydzielanych dynamicznie
}



/*
 * bool mIfExist(typeData aValue)
 */
bool cSetMy::mIfExist(typeData aValue)
{

}

/*
 * void mAddElement(typeData aValue)
 */
bool cSetMy::mAddElement(typeData aValue)
{

}

/*
 * bool mRemoveElement(typeData aValue)
 */
bool cSetMy::mRemoveElement(typeData aValue)
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cSetMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintAllElements()
 */
void cSetMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* csetmy.cpp */
/********** END_OF_FILE **********/
