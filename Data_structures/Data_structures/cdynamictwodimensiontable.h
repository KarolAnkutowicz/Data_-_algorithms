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





/********** PUBLIC: END **********/
};

#endif // CDYNAMICTWODIMENSIONTABLE_H

/* main.cpp */
/********** END_OF_FILE **********/
