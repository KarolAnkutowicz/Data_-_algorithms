/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamictwodimensiontable.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

/*
 * cDynamicTwoDimensionTable - klasa modelujaca tablice
 * dwuwymiarowa wraz z operacjami na niej.
 */
class cDynamicTwoDimensionTable
{
/********** PUBLIC: BEGINNING **********/

public:

    /*
     * cDynamicTwoDimensionTable() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicTwoDimensionTable();

    /*
     * cDynamicTwoDimensionTable(typeLoop aColumn) - konstruktor
     * wywolywany z jednym argumentem - liczba kolumn.
     * PRE:
     * - podanie liczby kolumn (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicTwoDimensionTable(typeLoop aColumn);

    /*
     * cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows) -
     * konstruktor wywolywany z dwoma argumentami - liczba kolumn
     * oraz liczba wierszy.
     * PRE:
     * - podanie liczby kolumn (typ: typeLoop);
     * - podanie liczby wierszy (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows);

    /*
     * cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows, typeData aDrawingRange) -
     * konstruktor wywolywany z trzema argumentami - liczba kolumn
     * oraz liczba wierszy oraz maksymalna wartoscia jaka mozemy
     * wylosowac wypelniajac tablice losowymi elementami.
     * PRE:
     * - podanie liczby kolumn (typ: typeLoop);
     * - podanie liczby wierszy (typ: typeLoop);
     * - podanie zakresu elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows, typeData aDrawingRange);

    /*
     * ~cDynamicTwoDimensionTable() - destruktor klasy DynamicTwoDimensionTable.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cDynamicTwoDimensionTable();



    /*
     * typeData getElement(typeLoop aColumns, typeLoop aRows) -
     * metoda zwracajaca wskazany element tablicy.
     * PRE:
     * - podanie kolumny (typ: typeLoop);
     * - podanie wiersza (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    inline typeData getElement(typeLoop aColumns, typeLoop aRows)
    {
        return tabElements[aRows * vColumns + aColumns];
    }

    /*
     * typeLoop getRows() - metoda zwracajaca liczbe wierszy
     * tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLengthTable (typ: typeLoop).
     */
    inline typeLoop getRows()
    {
        return vRows;
    }

    /*
     * typeLoop getColumns() - metoda zwracajaca liczbe kolumn
     * tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLengthTable (typ: typeLoop).
     */
    inline typeLoop getColumns()
    {
        return vColumns;
    }

    /*
     * typeData getDrawingRange() - metoda zwracajaca maksymalny
     * zakres losowania elementow tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange(typ: typeData).
     */
    inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * typeData getMinElement() - metoda zwracajaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement(typ: typeData).
     */
    inline typeData getMinElement()
    {
        return vMinElement;
    }

    /*
     * typeData getMaxElement() - metoda zwracajaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement(typ: typeData).
     */
    inline typeData getMaxElement()
    {
        return vMaxElement;
    }



    /*
     * void mAddElement(typeLoop aRows,typeData aElement) -
     * metoda ustanawiajaca wartosc wskazanego elementu.
     * PRE:
     * - podanie wspolrzednej wektora (typ: typeLoop);
     * - podanie wspolrzednej we wskazanym wektorze
     * (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mSetElement(typeLoop aRows, typeLoop aColumns, typeData aElement);

    /*
     * void mRemoveElement(typeLoop aRows) - metoda
     * resetujaca wartosc wskazanego elementu.
     * PRE:
     * - podanie wspolrzednej wektora (typ: typeLoop);
     * - podanie wspolrzednej we wskazanym wektorze
     * (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mResetElement(typeLoop aRows, typeLoop aColumns);



    /*
     * void mDrawElements() - metoda losujaca elementy tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mDrawElements();

    /*
     * void mFindMinElement() - metoda znajdujaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMinElement();

    /*
     * void mFindMaxElement() - metoda znajdujaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMaxElement();



    /*
     * void mPrintElement(typeLoop aRows, typeLoop aColumns) -
     * metoda wypisujaca wskazany element.
     * PRE:
     * - podanie numeru wektora (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aRows, typeLoop aColumns);

    /*
     * void mPrintVector(typeLoop aRows) - metoda
     * wyswietlajaca zawartosc wskazanego wektora.
     * PRE:
     * - podanie numeru wektora (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintVector(typeLoop aRows);

    /*
     * void mPrintAllElements() - metoda wypisujaca
     * wszystkie elementy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

private:

    /*
     * typeData *tabElements - tablica elementow.
     */
    typeData* tabElements;

    /*
     * typeLoop vRows - liczba wierszy w tablicy.
     */
    typeLoop vRows;

    /*
     * typeLoop vColumns - liczba kolumn w tablicy.
     */
    typeLoop vColumns;

    /*
     * typeData vDrawingRange - maksymalna liczba jaka mozemy
     * wylosowac (zakres od 0 do vDarwingRange).
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - najmniejszy element tablicy.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - najwiekszy element tablicy.
     */
    typeData vMaxElement;

/********** PRIVATE: END **********/
};

/* cdynamictwodimensiontable.hpp */
/********** END_OF_FILE **********/
