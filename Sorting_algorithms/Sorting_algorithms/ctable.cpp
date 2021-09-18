/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: ctable.cpp
 */

#include "ctable.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cTable()
 */
cTable::cTable()
{
}

/*
 * cTable(typeLoop aSeries)
 */
cTable::cTable(typeLoop aSeries)
{

}

/*
 * cTable(typeLoop aSeries, typeLoop aLength)
 */
cTable::cTable(typeLoop aSeries, typeLoop aLength)
{

}

/*
 * cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange)
 */
cTable::cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange)
{

}

/*
 * ~cTable()
 */
cTable::~cTable()
{
    delete []tabElements; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * void mPrintElement(typeLoop aSeries, typeLoop aLength)
 */
void cTable::mPrintElement(typeLoop aSeries, typeLoop aLength)
{
    cout << getElement(aSeries, aLength); // wypisanie wskazanego elementu
}

/*
 * void mPrintSeries(typeLoop aSeries)
 */
void cTable::mPrintSeries(typeLoop aSeries)
{
    for (typeLoop i = 0; i < vLength; i++) // przejscie po wszystkich elementach w serii
    {
        mPrintElement(aSeries, i); // wywolanie metody wypisujacej wskazany element w serii
        cout << " "; // zrobienie odstepu miedzy wypisanymi elementami
    }
}

/*
 * void mPrintTable()
 */
void cTable::mPrintTable()
{
    for (typeLoop i = 0; i < vSeries; i++) // przejscie po wszystkih seriach
    {
        mPrintSeries(i); // wywolanie metody wypisujacej wskazana serie
        cout << endl; // przejscie do kolejnej linii
    }
}

/*
 * void mWriteTableToFile()
 */
void cTable::mWriteTableToFile()
{
    ofstream StreamOut; // utworzenie strumienia plikowego
    StreamOut.open("table.txt"); // otwarcie pliku
    StreamOut << getSeries() << " " << getLength() << endl; // wypisanie
    for (typeLoop i = 0; i < vSeries; i++) // przejscie po wszystkich seriach
    {
        for (typeLoop j = 0; j < vLength; j++) // przejscie po wszystkich elementach w serii
            StreamOut << getElement(i, j) << " "; // wypisanie wskazanego elementu
        StreamOut << endl; // przejscie do nowej linii
    }
    StreamOut.close(); // zamkniecie strumienia
}

/*
 * void mReadTableFromFile()
 */
void cTable::mReadTableFromFile()
{

}



/*
 * void mQuicksort(typeLoop aSeries)
 */
void cTable::mQuicksort(typeLoop aSeries)
{

}

/*
 * mMergeSort(typeLoop aSeries)
 */
void cTable::mMergeSort(typeLoop aSeries)
{

}

/*
 * void mInPlaceMergeSort(typeLoop aSeries)
 */
void cTable::mInPlaceMergeSort(typeLoop aSeries)
{

}

/*
 * void mIntrosort(typeLoop aSeries)
 */
void cTable::mIntrosort(typeLoop aSeries)
{

}

/*
 * void mHeapsort(typeLoop aSeries)
 */
void cTable::mHeapsort(typeLoop aSeries)
{

}

/*
 * void mInsertionSort(typeLoop aSeries)
 */
void cTable::mInsertionSort(typeLoop aSeries)
{

}

/*
 * void mBlockSort(typeLoop aSeries)
 */
void cTable::mBlockSort(typeLoop aSeries)
{

}

/*
 * void mTimsort(typeLoop aSeries)
 */
void cTable::mTimsort(typeLoop aSeries)
{

}

/*
 * void mSelectionSort(typeLoop aSeries)
 */
void cTable::mSelectionSort(typeLoop aSeries)
{

}

/*
 * void mCubesort(typeLoop aSeries)
 */
void cTable::mCubesort(typeLoop aSeries)
{

}

/*
 * void mShellsort(typeLoop aSeries)
 */
void cTable::mShellsort(typeLoop aSeries)
{

}

/*
 * void mBubbleSort(typeLoop aSeries)
 */
void cTable::mBubbleSort(typeLoop aSeries)
{

}

/*
 * void mExchangeSort(typeLoop aSeries)
 */
void cTable::mExchangeSort(typeLoop aSeries)
{

}

/*
 * void mTreeSort(typeLoop aSeries)
 */
void cTable::mTreeSort(typeLoop aSeries)
{

}

/*
 * void mCycleSort(typeLoop aSeries)
 */
void cTable::mCycleSort(typeLoop aSeries)
{

}

/*
 * void mLibrarySort(typeLoop aSeries)
 */
void cTable::mLibrarySort(typeLoop aSeries)
{

}

/*
 * void mPatienceSorting(typeLoop aSeries)
 */
void cTable::mPatienceSorting(typeLoop aSeries)
{

}

/*
 * void mSmoothsort(typeLoop aSeries)
 */
void cTable::mSmoothsort(typeLoop aSeries)
{

}

/*
 * void mStrandSort(typeLoop aSeries)
 */
void cTable::mStrandSort(typeLoop aSeries)
{

}

/*
 * void mTournamentSort(typeLoop aSeries)
 */
void cTable::mTournamentSort(typeLoop aSeries)
{

}

/*
 * void mCocktailShakerSort(typeLoop aSeries)
 */
void cTable::mCocktailShakerSort(typeLoop aSeries)
{

}

/*
 * void mCombSort(typeLoop aSeries)
 */
void cTable::mCombSort(typeLoop aSeries)
{

}

/*
 * void mGnomeSort(typeLoop aSeries)
 */
void cTable::mGnomeSort(typeLoop aSeries)
{

}

/*
 * void mOddEvenSort(typeLoop aSeries)
 */
void cTable::mOddEvenSort(typeLoop aSeries)
{

}

/********** PUBLIC: END **********/

/* ctable.cpp */
/********** END_OF_FILE **********/
