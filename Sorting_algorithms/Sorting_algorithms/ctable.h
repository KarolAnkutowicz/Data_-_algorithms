/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: ctable.h
 */


#ifndef CTABLE_H
#define CTABLE_H

#include "constantsandtypes.h"

using namespace std;

/*
 * cTable - klasa modelujaca tablice,
 * wraz z podstawowymi operacjami oraz algorytmami
 * sortowania jej elementow.
 */
class cTable
{
/********** PRIVATE: BEGIN **********/

/********** PRIVATE: END **********/
/********** PUBLIC: BEGIN **********/
public:
    /*
     * cTable() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable();

    /*
     * cTable(int aLength) - konstruktor wywolywany
     * ze jednym argumentem - liczba elementow tablicy.
     * PRE:
     * - podanie liczby elementwo tablicy (typ: int);
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(int aLength);

    /*
     *
     */
    void mPrintTable();

    void mWriteTableToFile();

    void mReadTableFromFile();



    void mQuicksort();

    void mMergeSort();

    void mInPlaceMergeSort();

    void mIntrosort();

    void mHeapsort();

    void mInsertionSort();

    void mBlockSort();

    void mTimsort();

    void mSelectionSort();

    void mCubesort();

    void mShellsort();

    void mBubbleSort();

    void mExchangeSort();

    void mTreeSort();

    void mCycleSort();

    void mLibrarySort();

    void mPatienceSorting();

    void mSmoothsort();

    void mStrandSort();

    void mTournamentSort();

    void mCocktailShakerSort();

    void mCombSort();

    void mGnomeSort();

    void mOddEvenSort();


/********** PUBLIC: END **********/
};

#endif // CTABLE_H

/* ctable.h */
/********** END_OF_FILE **********/
