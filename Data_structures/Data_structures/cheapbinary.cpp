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
    if (vSize != 0) // sprawdzamy czy kopiec boinarny nie jest pusty
        return HeapBinary[0]; // jesli nie jest to zwracamy pierwszy element
    else // jesli kopiec binarny jest pusty
        return NULL; // to nie mamy co zwracac
}

/*
 * typeData getLastElement()
 */
typeData cHeapBinary::getLastElement()
{
    if (vSize != 0) // sprawdzamy czy kopiec nie jest pusty
        return HeapBinary[vSize - 1]; // jesli nie jest to zwracamy ostatni element
    else // jesli kopiec jest pusty
        return NULL; // to nie mamy co zwracac
}



/*
 * typeLoop getParentIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getParentIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if (aIndex != 0) // sprawdzamy czy element nie jest korzeniem
            return (aIndex + 1) / 2 - 1; // jesli nie jest to zwracamy indeks rodzica
    }
    return NULL; // jesli kopiec binarny jest pusty lub element jest korzeniem to wowczas nie mamy co zwracac
}

/*
 * typeData getParentValue(typeLoop aIndex)
 */
typeData cHeapBinary::getParentValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if (aIndex != 0) // sprawdzamy czy element nie jest korzeniem
            return HeapBinary[(aIndex + 1) / 2 - 1]; // jesli nie jest to zwracamy wartosc rodzica
    }
    return NULL; // jesli kopiec binarny jest pusty lub element jest korzeniem to wowczas nie mamy co zwracac
}

/*
 * typeLoop getLeftKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getLeftKidIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 1) < vSize) // sprawdzamy czy element w ogole ma lewego potomka
            return (aIndex + 1) / 2 - 1; // jesli tak to zwracamy indeks lewego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma lewego potomka to wowczas nie mamy co zwracac
}

/*
 * typeData getLeftKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getLeftKidValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 1) < vSize) // sprawdzamy czy element w ogole ma lewego potomka
            return HeapBinary[(aIndex + 1) / 2 - 1]; // jesli tak to zwracamy wartosc lewego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma lewego potomka to wowczas nie mamy co zwracac
}

/*
 * typeLoop getRigthKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getRigthKidIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 2) < vSize) // sprawdzamy czy element w ogole ma prawego potomka
            return (aIndex + 1) / 2 - 1; // jesli tak to zwracamy indeks prawego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma prawego potomka to wowczas nie mamy co zwracac
}

/*
 * typeData getRigthKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getRigthKidValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 2) < vSize) // sprawdzamy czy element w ogole ma prawego potomka
            return HeapBinary[(aIndex + 1) / 2 - 1]; // jesli tak to zwracamy wartosc prawego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma prawego potomka to wowczas nie mamy co zwracac
}

/*
 * typeLoop getLevels()
 */
typeLoop cHeapBinary::getLevels()
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
        return (typeLoop)log10(vSize); // zwracamy wyznaczona liczbe poziomow drzewa, lacznie z ewentualnym ostatnim, niepelnym
    return NULL; // jesli kopiec binarny jest pusty wowczas nie mamy co zwracac
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
 * void mRepairHeapFromRoot()
 */
void cHeapBinary::mRepairHeapFromRoot()
{

}

/*
 * void mRepairHeapFromEnd()
 */
void cHeapBinary::mRepairHeapFromEnd()
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
