/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cheapbinary.cpp
 */

#include "cheapbinary.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cHeapBinary()
 */
cHeapBinary::cHeapBinary()
{
    HeapBinary = new typeData[1]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    HeapBinary[0] = NULL; // ustanowienie braku wartosci elementu
}

/*
 * cHeapBinary(typeLoop aSize)
 */
cHeapBinary::cHeapBinary(typeLoop aSize)
{
    HeapBinary = new typeData[aSize]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cHeapBinary(typeLoop aSize, typeData aDrawingRange)
 */
cHeapBinary::cHeapBinary(typeLoop aSize, typeData aDrawingRange)
{
    HeapBinary = new typeData[aSize]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cHeapBinary()
 */
cHeapBinary::~cHeapBinary()
{
    delete []HeapBinary; // zwalniania zasobow przydzielanych dynamicznie
}



/*
 * typeData getRootHeap()
 */
typeData cHeapBinary::getRootHeap()
{

}

/*
 * typeData getLastElement()
 */
typeData cHeapBinary::getLastElement()
{

}



/*
 * typeLoop getParentIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getParentIndex(typeLoop aIndex)
{

}

/*
 * typeData getParentValue(typeLoop aIndex)
 */
typeData cHeapBinary::getParentValue(typeLoop aIndex)
{

}

/*
 * typeLoop getLeftKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getLeftKidIndex(typeLoop aIndex)
{

}

/*
 * typeData getLeftKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getLeftKidValue(typeLoop aIndex)
{

}

/*
 * typeLoop getRigthKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getRigthKidIndex(typeLoop aIndex)
{

}

/*
 * typeData getRigthKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getRigthKidValue(typeLoop aIndex)
{

}

/*
 * typeLoop getLevels()
 */
typeLoop cHeapBinary::getLevels()
{

}



/*
 * void mAddElementToRoot(typeData aElement)
 */
void cHeapBinary::mAddElementToRoot(typeData aElement)
{

}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cHeapBinary::mAddElementToEnd(typeData aElement)
{

}

/*
 * bool mRemoveRootHeap()
 */
bool cHeapBinary::mRemoveRootHeap()
{

}

/*
 * bool mRemoveElementFromEnd()
 */
bool cHeapBinary::mRemoveElementFromEnd()
{

}

/*
 * void mRepairHeap()
 */
void cHeapBinary::mRepairHeap()
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cHeapBinary::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintRootHeap()
 */
void cHeapBinary::mPrintRootHeap()
{

}

/*
 * void mPrintLastElement()
 */
void cHeapBinary::mPrintLastElement()
{

}

/*
 * void mPrintAllElements()
 */
void cHeapBinary::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cheapbinary.cpp */
/********** END_OF_FILE **********/
