/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmapmy.cpp
 */

#include "cmapmy.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cMapMy()
 */
cMapMy::cMapMy()
{
    MapMy = new cElementMap[1]; // utworzenie nowej mapy
    vSize = 1; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    MapMy[0] = cElementMap('a',0); // dodanie nowego elementu do mapy
}

/*
 * cMapMy(typeLoop aSize)
 */
cMapMy::cMapMy(typeLoop aSize)
{
    MapMy = new cElementMap[aSize]; // utworzenie nowej mapy
    vSize = aSize; // ustanowienie rozmiaru mapy
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cMapMy(typeLoop aSize, typeData aDrawingRange)
 */
cMapMy::cMapMy(typeLoop aSize, typeData aDrawingRange)
{
    MapMy = new cElementMap[aSize]; // utworzenie nowej mapy
    vSize = aSize; // ustanowienie rozmiaru mapy
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cMapMy()
 */
cMapMy::~cMapMy()
{
    delete []MapMy; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cMapMy::getElement(typeKey aKey)
{

}



/*
 * bool mIfExist(typeKey aKey)
 */
bool cMapMy::mIfExist(typeKey aKey)
{

}

/*
 * bool mAddElement(typeKey aKey, typeData aValue)
 */
bool cMapMy::mAddElement(typeKey aKey, typeData aValue)
{

}

/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cMapMy::mRemoveElement(typeKey aKey)
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cMapMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintAllElements()
 */
void cMapMy::mPrintElement(typeKey aKey)
{

}

/*
 * void mPrintAllElements()
 */
void cMapMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cmapmyg.cpp */
/********** END_OF_FILE **********/
