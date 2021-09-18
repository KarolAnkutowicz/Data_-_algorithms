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
 * cTable(int aSeries)
 */
cTable::cTable(int aSeries)
{

}

/*
 * cTable(int aSeries, int aLength)
 */
cTable::cTable(int aSeries, int aLength)
{

}

/*
 * cTable(int aSeries, int aLength, int aDrawingRange)
 */
cTable::cTable(int aSeries, int aLength, int aDrawingRange)
{

}

/*
 * ~cTable()
 */
cTable::~cTable()
{

}



/*
 * void mPrintElement(int aSeries, int aLength)
 */
void cTable::mPrintElement(int aSeries, int aLength)
{
    cout << getElement(aSeries, aLength); // wypisanie wskazanego elementu
}

/*
 * void mPrintSeries(int aSeries)
 */
void cTable::mPrintSeries(int aSeries)
{
    for (int i = 0; i < vLength; i++) // przejscie po wszystkich elementach w serii
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
    for (int i = 0; i < vSeries; i++) // przejscie po wszystkih seriach
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
    for (int i = 0; i < vSeries; i++) // przejscie po wszystkich seriach
    {
        for (int j = 0; j < vLength; j++) // przejscie po wszystkich elementach w serii
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
 * void mQuicksort(int aSeries)
 */
void cTable::mQuicksort(int aSeries)
{

}

/*
 * mMergeSort(int aSeries)
 */
void cTable::mMergeSort(int aSeries)
{

}

/*
 * void mInPlaceMergeSort(int aSeries)
 */
void cTable::mInPlaceMergeSort(int aSeries)
{

}

/*
 * void mIntrosort(int aSeries)
 */
void cTable::mIntrosort(int aSeries)
{

}

/*
 * void mHeapsort(int aSeries)
 */
void cTable::mHeapsort(int aSeries)
{

}

/*
 * void mInsertionSort(int aSeries)
 */
void cTable::mInsertionSort(int aSeries)
{

}

/*
 * void mBlockSort(int aSeries)
 */
void cTable::mBlockSort(int aSeries)
{

}

/*
 * void mTimsort(int aSeries)
 */
void cTable::mTimsort(int aSeries)
{

}

/*
 * void mSelectionSort(int aSeries)
 */
void cTable::mSelectionSort(int aSeries)
{

}

/*
 * void mCubesort(int aSeries)
 */
void cTable::mCubesort(int aSeries)
{

}

/*
 * void mShellsort(int aSeries)
 */
void cTable::mShellsort(int aSeries)
{

}

/*
 * void mBubbleSort(int aSeries)
 */
void cTable::mBubbleSort(int aSeries)
{

}

/*
 * void mExchangeSort(int aSeries)
 */
void cTable::mExchangeSort(int aSeries)
{

}

/*
 * void mTreeSort(int aSeries)
 */
void cTable::mTreeSort(int aSeries)
{

}

/*
 * void mCycleSort(int aSeries)
 */
void cTable::mCycleSort(int aSeries)
{

}

/*
 * void mLibrarySort(int aSeries)
 */
void cTable::mLibrarySort(int aSeries)
{

}

/*
 * void mPatienceSorting(int aSeries)
 */
void cTable::mPatienceSorting(int aSeries)
{

}

/*
 * void mSmoothsort(int aSeries)
 */
void cTable::mSmoothsort(int aSeries)
{

}

/*
 * void mStrandSort(int aSeries)
 */
void cTable::mStrandSort(int aSeries)
{

}

/*
 * void mTournamentSort(int aSeries)
 */
void cTable::mTournamentSort(int aSeries)
{

}

/*
 * void mCocktailShakerSort(int aSeries)
 */
void cTable::mCocktailShakerSort(int aSeries)
{

}

/*
 * void mCombSort(int aSeries)
 */
void cTable::mCombSort(int aSeries)
{

}

/*
 * void mGnomeSort(int aSeries)
 */
void cTable::mGnomeSort(int aSeries)
{

}

/*
 * void mOddEvenSort(int aSeries)
 */
void cTable::mOddEvenSort(int aSeries)
{

}

/********** PUBLIC: END **********/

/* ctable.cpp */
/********** END_OF_FILE **********/
