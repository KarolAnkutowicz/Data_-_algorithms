/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.cpp
 */

#include "cdynamiconedimensiontable.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable()
{
    vLengthTable = 1; // ustanowienie dlugosci tablicy
    tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    tabElements[0] = vDrawingRange; // przypisanie wartosci jej jedynego elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable)
{
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        tabElements[i] = vDrawingRange; // przypisanie wartosci elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
{
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = aDrawingRange; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // wylosowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}



/*
 * void mDrawElements()
 */
void cDynamicOneDimensionTable::mDrawElements()
{

}

/*
 * void mFindMinElement()
 */
void cDynamicOneDimensionTable::mFindMinElement()
{

}

/*
 * void mFindMaxElement()
 */
void cDynamicOneDimensionTable::mFindMaxElement()
{

}

/*
 * void mPrintTable()
 */
void cDynamicOneDimensionTable::mPrintTable()
{

}

/********** PUBLIC: END **********/

/* cdynamiconedimensiontable.cpp */
/********** END_OF_FILE **********/
