/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: main.cpp
 */

#ifndef CDYNAMICTWODIMENSIONTABLE_H
#define CDYNAMICTWODIMENSIONTABLE_H

#include "constantsandtypes.h"
#include <iostream>

using namespace std;

/*
 * cDynamicTwoDimensionTable - klasa modelujaca tablice
 * dwuwymiarowa wraz z operacjami na niej.
 */
class cDynamicTwoDimensionTable
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData *tabElements - tablica elementow.
     */
    typeData *tabElements;

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










/********** PUBLIC: END **********/
};

#endif // CDYNAMICTWODIMENSIONTABLE_H

/* main.cpp */
/********** END_OF_FILE **********/
