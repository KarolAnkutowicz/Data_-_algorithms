/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: ctable.h
 */


#ifndef CTABLE_H
#define CTABLE_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
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
     * typeData *tabElements - wskaznik do tablicy elementow
     * typu typeData.
     */
    typeData *tabElements;

    /*
     * typeLoop vSeries - liczba serii danych.
     */
    typeLoop vSeries;

    /*
     * typeLoop vLength - liczba danych w pojedynczej serii.
     */
    typeLoop vLength;

    /*
     * typeData vDrawingRange - maksymalny zakres losowania
     *elementow tablicy.
     */
    typeData vDrawingRange;

    /*
     * double *tabTimes - wskaznik do tablicy czasow sortowania
     * kolejnych serii.
     */
    double *tabTimes;

    /*
     * double vAverageTime - sredni czas sortowania kolejnych
     * serii
     */
    double vAverageTime;


    /*
     * void setSeries(typeLoop aSeries) - metoda ustanawiajaca
     * liczbe serii.
     * PRE:
     * - podanie liczby serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    inline void setSeries(typeLoop aSeries)
    {
        vSeries = aSeries;
    }

    /*
     * void setLength(typeLoop aLength) - metoda ustanawiajaca
     * liczbe elementow w danej serii
     * PRE:
     * - podanie liczby elementow w serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    inline void setLength(typeLoop aLength)
    {
        vLength = aLength;
    }

    /*
     * void setDrawingRange(typeData aDrawingRange) - metoda
     * ustanawiajaca wartosc zakresu losowania elmentow
     * PRE:
     * - podanie wartosci zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setDrawingRange(typeData aDrawingRange)
    {
        vDrawingRange = aDrawingRange;
    }


    /*
     * void mCalculateAverageTime() - metoda obliczajaca
     * sredni czas sortowania kolejnych serii.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mCalculateAverageTime();

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
     * cTable(typeLoop aSeries) - konstruktor wywolywany
     * ze jednym argumentem - liczba serii.
     * PRE:
     * - podanie liczby serii (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(typeLoop aSeries);

    /*
     * cTable(typeLoop aSeries, typeLoop aLength) - konstruktor
     * wywolywany z dwoma argumentami - liczba serii
     * oraz liczba elementow w pojedynczej serii.
     * PRE:
     * - podanie liczby serii (typ: typeLoop);
     * - podanie dlugosci pojedynczej serii (typ: typeLoop)
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(typeLoop aSeries, typeLoop aLength);

    /*
     * cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange) -
     * konstruktor wywolywany z trzema argumentami -
     * liczba serii, liczba elementow w pojedynczej serii
     * oraz zakresem losowania elementow.
     * PRE:
     * - podanie liczby serii (typ: typeLoop);
     * - podanie dlugosci pojedynczej serii (typ: typeLoop)
     * - podanie zakresu losowanie elementow (typ: typeData)
     * POST:
     * - utworzenie obiektu klasy cTable.
     */
    cTable(typeLoop aSeries, typeLoop aLength, typeData aDrawingRange);

    /*
     * ~cTable() - destruktor klasy cTable.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cTable();



    /*
     * typeData getElement(typeLoop aSeries, typeLoop aColumn) - metoda
     * zwracajaca wskazany element tablicy.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * - podanie numeru elementu w serii (typ: typeLoop);
     * POST:
     * - zwrocenie wskazanego elementu (typ: typeData).
     */
    inline typeData getElement(typeLoop aSeries, typeLoop aColumn)
    {
        return tabElements[aSeries * vLength + aColumn];
    }

    /*
     * typeLoop getSeries() - metoda zwracajaca liczbe serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vSeries (typ: typeLoop).
     */
    inline typeLoop getSeries()
    {
        return vSeries;
    }

    /*
     * typeLoop getLength() - metoda zwracajaca dlugosc serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLength (typ: typeLoop).
     */
    inline typeLoop getLength()
    {
        return vLength;
    }

    /*
     * typeData getDrawingRange() - metoda zwracajaca wartosc
     * zakresu losowania liczb.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange (typ: typeData).
     */
    inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * double getTime(typeLoop aSeries) - metoda zwracajaca
     * wartosc czasu wskazanej serii.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci czasu sortowania wskazanej
     * serii (typ: double).
     */
    inline double getTime(typeLoop aSeries)
    {
        return tabTimes[aSeries];
    }

    /*
     * double getAverageTime() - metoda zwracajaca
     * srednia wartosc czasu sortowania.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vAverageTime (typ: double).
     */
    inline double getAverageTime()
    {
        return vAverageTime;
    }

    /*
     * void setElement(typeLoop aSeries, typeLoop aColumn, typeData aValue) -
     * metoda ustanawiajaca wartosc wskazanego elementu.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * - podanie numeru elementu w serii (typ: typeLoop);
     * - podanie wartosci (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setElement(typeLoop aSeries, typeLoop aColumn, typeData aValue)
    {
        tabElements[aSeries * vLength + aColumn] = aValue;
    }

    /*
     * void setTime(typeLoop aSeries, double aTime) - metoda
     * ustanawiajaca wartosc czasu sortowania wskazanej serii.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * - podanie czasu (typ: double);
     * POST:
     * - brak.
     */
    void setTime(typeLoop aSeries, double aTime)
    {
        tabTimes[aSeries] = aTime;
    }



    /*
     * void mPrintElement(typeLoop aSeries, typeLoop aLength) -
     * metoda wypisujaca wskazany element tablicy.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aSeries, typeLoop aLength);

    /*
     * void mPrintSeries(typeLoop aSeries) - metoda wypisujaca
     * wskazana serie z tablicy.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintSeries(typeLoop aSeries);

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
     * void mWriteTableToFile() - metoda wypisujaca
     * zawartosc tablicy do pliku.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mWriteTableToFile();

    /*
     * void mReadTableFromFile() - metoda wczytujaca
     * zawartosc pliku do tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mReadTableFromFile();



    /*
     * void mDrawingElements() - metoda losujaca elementy
     * tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mDrawingElements();

    /*
     * void mSwap(typeLoop aSeries, typeLoop aColumn1, typeLoop aColumn2) -
     * metoda pomocnicza zamieniajaca miejscami w tablicy
     * wskazane elementy.
     * PRE:
     * - podanie serii w jakiej mamy zaminic elementy
     * (typ: typeLoop);
     * - podanie wspolrzednych obu elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mSwap(typeLoop aSeries, typeLoop aColumn1, typeLoop aColumn2);



    /*
     * void mQuicksort(typeLoop aSeries) - metoda realizujaca
     * algorytm sortowania szybkiego.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mQuicksort(typeLoop aSeries);

    /*
     * mMergeSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop;
     * POST:
     * - brak.
     */
    void mMergeSort(typeLoop aSeries);

    /*
     * void mInPlaceMergeSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mInPlaceMergeSort(typeLoop aSeries);

    /*
     * void mIntrosort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mIntrosort(typeLoop aSeries);

    /*
     * void mHeapsort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mHeapsort(typeLoop aSeries);

    /*
     * void mInsertionSort(typeLoop aSeries) - metoda
     * realizujaca algorytm sortowania przez wstawianie.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mInsertionSort(typeLoop aSeries);

    /*
     * void mBlockSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mBlockSort(typeLoop aSeries);

    /*
     * void mTimsort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mTimsort(typeLoop aSeries);

    /*
     * void mSelectionSort(typeLoop aSeries) - metoda
     * realizujaza algorytm sortowania przez wybieranie.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mSelectionSort(typeLoop aSeries);

    /*
     * void mCubesort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mCubesort(typeLoop aSeries);

    /*
     * void mShellsort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mShellsort(typeLoop aSeries);

    /*
     * void mBubbleSort(typeLoop aSeries) - metoda
     * realizujaca algorytm sortowania babelkowego.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mBubbleSort(typeLoop aSeries);

    /*
     * void mExchangeSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mExchangeSort(typeLoop aSeries);

    /*
     * void mTreeSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mTreeSort(typeLoop aSeries);

    /*
     * void mCycleSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mCycleSort(typeLoop aSeries);

    /*
     * void mLibrarySort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mLibrarySort(typeLoop aSeries);

    /*
     * void mPatienceSorting(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPatienceSorting(typeLoop aSeries);

    /*
     * void mSmoothsort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mSmoothsort(typeLoop aSeries);

    /*
     * void mStrandSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mStrandSort(typeLoop aSeries);

    /*
     * void mTournamentSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mTournamentSort(typeLoop aSeries);

    /*
     * void mCocktailShakerSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mCocktailShakerSort(typeLoop aSeries);

    /*
     * void mCombSort(typeLoop aSeries) - metoda
     * realizujaca algorytm sortowania grzebieniowego.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mCombSort(typeLoop aSeries);

    /*
     * void mGnomeSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mGnomeSort(typeLoop aSeries);

    /*
     * void mOddEvenSort(typeLoop aSeries) -
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mOddEvenSort(typeLoop aSeries);

    /*
     * void mCountingSort(typeLoop aSeries) - metoda
     * realizujaca algorytm sortowania przez zliczanie.
     * PRE:
     * - podanie numeru serii (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mCountingSort(typeLoop aSeries);


/********** PUBLIC: END **********/
};

#endif // CTABLE_H

/* ctable.h */
/********** END_OF_FILE **********/
