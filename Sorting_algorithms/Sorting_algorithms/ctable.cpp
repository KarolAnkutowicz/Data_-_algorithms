/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: ctable.cpp
 */

#include "ctable.h"

using namespace std;

/********** PRIVATE: BEGIN **********/

/*
 * void mCalculateAverageTime()
 */
void cTable::mCalculateAverageTime()
{
    double vSum = 0.0; // zdefiniowanie sumy poczatkowej czasow
    for (typeLoop i = 0; i < vSeries; i++) // przejscie przez czasy wszystkich serii
        vSum += tabTimes[i]; // dodanie czasu kolejnej serii
    vAverageTime = vSum / vSeries; // obliczenie sredniego czasu sortowania
}

/********** PRIVATE: END **********/


/********** PUBLIC: BEGIN **********/

/*
 * cTable()
 */
cTable::cTable()
{
    vSeries = 1; // ustnowienie liczby serii
    vLength = 1; // ustanowienie liczby elementow w serii
    vDrawingRange = 1; // ustanowienie zakresu losowania elementow
    tabElements = new typeData[vSeries * vLength]; // utworzenie nowej tablicy elementow
    mDrawingElements(); // losowanie elementow
}

/*
 * cTable(typeLoop aSeries)
 */
cTable::cTable(typeLoop aSeries)
{
    vSeries = aSeries; // ustnowienie liczby serii
    vLength = 1; // ustanowienie liczby elementow w serii
    vDrawingRange = 1; // ustanowienie zakresu losowania elementow
    tabElements = new typeData[vSeries * vLength]; // utworzenie nowej tablicy elementow
    mDrawingElements(); // losowanie elementow
}

/*
 * cTable(typeLoop aSeries, typeLoop aLength)
 */
cTable::cTable(typeLoop aSeries, typeLoop aLength)
{
    vSeries = aSeries; // ustnowienie liczby serii
    vLength = aLength; // ustanowienie liczby elementow w serii
    vDrawingRange = 1; // ustanowienie zakresu losowania elementow
    tabElements = new typeData[vSeries * vLength]; // utworzenie nowej tablicy elementow
    mDrawingElements(); // losowanie elementow
}

/*
 * cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange)
 */
cTable::cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange)
{
    vSeries = aSeries; // ustnowienie liczby serii
    vLength = aLength; // ustanowienie liczby elementow w serii
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    tabElements = new typeData[vSeries * vLength]; // utworzenie nowej tablicy elementow
    mDrawingElements(); // losowanie elementow
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
    ifstream StreamIn; // utworzenie strumienia plikowego
    typeData aElement; // deklaracja zmiennej wykorzystywanej do wczytywanie elementow
    typeLoop aSize; // deklaracja zmiennej wykorzystywanej do wczytywanie rozmiarow tablicy
    StreamIn.open("table.txt"); // otwarcie pliku
    StreamIn >> skipws >> aSize; // wczytanie liczby serii
    setSeries(aSize); // ustanowienie liczby serii
    StreamIn >> skipws >> aSize; // wczytywanie liczby elementow w serii
    setLength(aSize); // ustanowienie liczby elementow w serii
    delete []tabElements; // zwalnianie zasobow w celu utworzenie tablicy o nowej liczbie elementow
    tabElements = new typeData[vSeries * vLength]; // utworzenie nowej tablicy elementow o wskazanych wymiarach
    for (typeLoop i = 0; i < vSeries; i++) // przejscie po wszystkich seriach
    {
        for (typeLoop j = 0; j < vLength; j++) // przejscie po wszystkich elmenentach w serii
        {
            StreamIn >> skipws >> aElement; // wczytywanie wartosci elementu
            setElement(i, j, aElement); // ustanowienie wartosci wskazanego elementu
        }
    }
    StreamIn.close(); // zamkniecie strumienia
}



/*
 * void mDrawingElements()
 */
void cTable::mDrawingElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vSeries; i++) // przejscie po wszystkich seriach
        for (typeLoop j = 0; j < vLength; j++) // przejscie po wszystkich elememntach w serii
            setElement(i, j, rand () % vDrawingRange); // wylosowanie wartosci elementu
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
    typeData vAux;
    for (typeLoop i = 0; i < (vLength - 1); i++)
    {
        for (typeLoop j = i + 1; j < vLength; j++)
        {
            if (getElement(aSeries, i) > getElement(aSeries, j))
            {
                vAux = getElement(aSeries, i);
                setElement(aSeries, i, getElement(aSeries,j));
                setElement(aSeries, j, vAux);
            }
        }
    }
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
