/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: ctable.h
 */


#ifndef CTABLE_H
#define CTABLE_H

#include "constantsandtypes.h"
#include <fstream>
#include <iostream>

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



    /*
     * void setSeries(int aSeries) - metoda ustanawiajaca
     * liczbe serii.
     * PRE:
     * - podanie liczby serii (typ: int);
     * POST:
     * - brak.
     */
    inline void setSeries(int aSeries)
    {
        vSeries = aSeries;
    }

    /*
     * void setLength(int aLength) - metoda ustanawiajaca
     * liczbe elementow w danej serii
     * PRE:
     * - podanie liczby elementow w serii (typ: int);
     * POST:
     * - brak.
     */
    inline void setLength(int aLength)
    {
        vLength = aLength;
    }

    /*
     * void setDrawingRange(int aDrawingRange) - metoda
     * ustanawiajaca wartosc zakresu losowania elmentow
     * PRE:
     * - podanie wartosci zakresu losowania elementow
     * (typ: int);
     * POST:
     * - brak.
     */
    inline void setDrawingRange(int aDrawingRange)
    {
        vDrawingRange = aDrawingRange;
    }

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
    inline int getElement(int aSeries, int aColumn)
    {
        return tabElements[aSeries * vLength + aColumn];
    }

    /*
     * int getSeries() - metoda zwracajaca liczbe serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vSeries (typ: int).
     */
    inline int getSeries()
    {
        return vSeries;
    }

    /*
     * int getLength() - metoda zwracajaca dlugosc serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLength (typ: int).
     */
    inline int getLength()
    {
        return vLength;
    }

    /*
     * int getDrawingRange() - metoda zwracajaca wartosc
     * zakresu losowania liczb.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange (typ: int).
     */
    inline int getDrawingRange()
    {
        return vDrawingRange;
    }

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
    inline void setElement(int aSeries, int aColumn, int aValue)
    {
        tabElements[aSeries * vLength + aColumn] = aValue;
    }



    /*
     * void mPrintElement(int aSeries, int aLength) -
     * metoda wypisujaca wskazany element tablicy.
     * PRE:
     * - podanie numeru serii (typ: int);
     * - podanie numeru kolumny (typ: int);
     * POST:
     * - brak.
     */
    void mPrintElement(int aSeries, int aLength);

    /*
     * void mPrintSeries(int aSeries) - metoda wypisujaca
     * wskazana serie z tablicy.
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mPrintSeries(int aSeries);

    /*
     * void mPrintTable() - metoda wypisujaca
     * zawartosc tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintTable();

    /*
     * void mWriteTableToFile() -
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mWriteTableToFile();

    /*
     * void mReadTableFromFile() -
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mReadTableFromFile();



    /*
     * void mQuicksort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mQuicksort(int aSeries);

    /*
     * mMergeSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mMergeSort(int aSeries);

    /*
     * void mInPlaceMergeSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mInPlaceMergeSort(int aSeries);

    /*
     * void mIntrosort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mIntrosort(int aSeries);

    /*
     * void mHeapsort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mHeapsort(int aSeries);

    /*
     * void mInsertionSort(int aSeries)
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mInsertionSort(int aSeries);

    /*
     * void mBlockSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mBlockSort(int aSeries);

    /*
     * void mTimsort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mTimsort(int aSeries);

    /*
     * void mSelectionSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mSelectionSort(int aSeries);

    /*
     * void mCubesort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mCubesort(int aSeries);

    /*
     * void mShellsort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mShellsort(int aSeries);

    /*
     * void mBubbleSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mBubbleSort(int aSeries);

    /*
     * void mExchangeSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mExchangeSort(int aSeries);

    /*
     * void mTreeSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mTreeSort(int aSeries);

    /*
     * void mCycleSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mCycleSort(int aSeries);

    /*
     * void mLibrarySort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mLibrarySort(int aSeries);

    /*
     * void mPatienceSorting(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mPatienceSorting(int aSeries);

    /*
     * void mSmoothsort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mSmoothsort(int aSeries);

    /*
     * void mStrandSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mStrandSort(int aSeries);

    /*
     * void mTournamentSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mTournamentSort(int aSeries);

    /*
     * void mCocktailShakerSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mCocktailShakerSort(int aSeries);

    /*
     * void mCombSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mCombSort(int aSeries);

    /*
     * void mGnomeSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mGnomeSort(int aSeries);

    /*
     * void mOddEvenSort(int aSeries) -
     * PRE:
     * - podanie numeru serii (typ: int);
     * POST:
     * - brak.
     */
    void mOddEvenSort(int aSeries);


/********** PUBLIC: END **********/
};

#endif // CTABLE_H

/* ctable.h */
/********** END_OF_FILE **********/
