/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstatictwodimensiontable.cpp
 */

#include "cstatictwodimensiontable.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cStaticOneDimensionTable()
 */
cStaticTwoDimensionTable::cStaticTwoDimensionTable()
{
    vRows = 10; // ustanowienie liczby wierszy
    vColumns = 10; // ustanowienie liczby kolumn
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(); // wywolanie metody losujacej wartosci elementow
    mFindMinElement(); // znalezienie wartosci najmniejszej
    mFindMaxElement(); // znalezienie wartosci najwiekszej
}

/*
 * cStaticOneDimensionTable(typeData aDrawingRange)
 */
cStaticTwoDimensionTable::cStaticTwoDimensionTable(typeData aDrawingRange)
{
    vRows = 10; // ustanowienie liczby wierszy
    vColumns = 10; // ustanowienie liczby kolumn
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(); // wywolanie metody losujacej wartosci elementow
    mFindMinElement(); // znalezienie wartosci najmniejszej
    mFindMaxElement(); // znalezienie wartosci najwiekszej
}

/*
 * cStaticOneDimensionTable(typeData aDrawingRange)
 */
cStaticTwoDimensionTable::cStaticTwoDimensionTable(typeData aDrawingRange, typeLoop aRows)
{
    vRows = aRows; // ustanowienie liczby wierszy
    vColumns = 10; // ustanowienie liczby kolumn
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(); // wywolanie metody losujacej wartosci elementow
    mFindMinElement(); // znalezienie wartosci najmniejszej
    mFindMaxElement(); // znalezienie wartosci najwiekszej
}



/*
 * void mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement)
 */
void cStaticTwoDimensionTable::mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement)
{

}

/*
 * void mRemoveElement(typeLoop aRows, typeLoop aColumns)
 */
void cStaticTwoDimensionTable::mClearElement(typeLoop aRows, typeLoop aColumns)
{

}



/*
 * void mDrawElements()
 */
void cStaticTwoDimensionTable::mDrawElements()
{

}

/*
 * void mFindMinElement()
 */
void cStaticTwoDimensionTable::mFindMinElement()
{

}

/*
 * void mFindMaxElement()
 */
void cStaticTwoDimensionTable::mFindMaxElement()
{

}



/*
 * void mPrintTable()
 */
void cStaticTwoDimensionTable::mPrintTable()
{

}

/********** PUBLIC: END **********/

/* cstatictwodimensiontable.cpp */
/********** END_OF_FILE **********/
