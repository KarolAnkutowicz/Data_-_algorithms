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
    cDynamicTwoDimensionTable();

/********** PUBLIC: END **********/
};

#endif // CDYNAMICTWODIMENSIONTABLE_H

/* main.cpp */
/********** END_OF_FILE **********/
