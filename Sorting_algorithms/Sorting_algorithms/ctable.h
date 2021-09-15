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

    /*
     * int *tabElements - wskaznik do tablicy elementow
     * typu int.
     */
    int *tabElements;

    /*
     * int vSeries - liczba serii danych.
     */
    int vSeries;

    /*
     * int vLength - liczba danych w pojedynczej serii.
     */
    int vLength;

    /*
     * int vDrawingRange - maksymalny zakres losowania
     *elementow tablicy.
     */
    int vDrawingRange;

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
     * cTable(int aSeries) - konstruktor wywolywany
     * ze jednym argumentem - liczba serii.
     * PRE:
     * - podanie liczby serii (typ: int);
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(int aSeries);

    /*
     * cTable(int aSeries, int aLength) - konstruktor
     * wywolywany z dwoma argumentami - liczba serii
     * oraz liczba elementow w pojedynczej serii.
     * PRE:
     * - podanie liczby serii (typ: int);
     * - podanie dlugosci pojedynczej serii (typ: int)
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(int aSeries, int aLength);

    /*
     * cTable(int aSeries, int aLength, int aDrawingRange) -
     * konstruktor wywolywany z trzema argumentami -
     * liczba serii, liczba elementow w pojedynczej serii
     * oraz zakresem losowania elementow.
     * PRE:
     * - podanie liczby serii (typ: int);
     * - podanie dlugosci pojedynczej serii (typ: int)
     * - podanie zakresu losowanie elementow (typ: int)
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(int aSeries, int aLength, int aDrawingRange);

    /*
     * ~cTable() - destruktor klasy cTable.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cTable();



    /*
     * int getElement(int aSeries, int aColumn) - metoda
     * zwracajaca wskazany element tablicy.
     * PRE:
     * - podanie numeru serii (typ: int);
     * - podanie numeru elementu w serii (typ: int);
     * POST:
     * - zwrocenie wskazanego elementu (typ: int).
     */
    int getElement(int aSeries, int aColumn);

    /*
     * int getSeries() - metoda zwracajaca liczbe serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vSeries (typ: int).
     */
    int getSeries();

    /*
     * int getLength() - metoda zwracajaca dlugosc serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLength (typ: int).
     */
    int getLength();

    /*
     * int getDrawingRange() - metoda zwracajaca wartosc
     * zakresu losowania liczb.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange (typ: int).
     */
    int getDrawingRange();

    /*
     * void setElement(int aSeries, int aColumn, int aValue) -
     * metoda ustanawiajaca wartosc wskazanego elementu.
     * PRE:
     * - podanie numeru serii (typ: int);
     * - podanie numeru elementu w serii (typ: int);
     * - podanie wartosci (typ: int);
     * POST:
     * - brak.
     */
    void setElement(int aSeries, int aColumn, int aValue);



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
