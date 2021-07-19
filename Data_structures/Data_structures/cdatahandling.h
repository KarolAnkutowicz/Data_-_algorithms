/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.h
 */

#ifndef CDATAHANDLING_H
#define CDATAHANDLING_H

#include "cdynamiconedimensiontable.h"
#include "cdynamictwodimensiontable.h"
#include "constantsandtypes.h"
#include <iostream>

using namespace std;

/*
 * cDataHandling - klasa modelujaca obsluge zaimplementowanych
 * struktur danych.
 */
class cDataHandling
{
/********** PUBLIC: BEGINNING **********/
public:
    /*
     * typeLoop vOption - zmienna wykorzystywanie do sterowania
     * w menu glownych oraz w menu dla poszczegolnych struktur.
     */
    typeLoop vOption;

    /*
     * cDataHandling() - konstruktor wywolywany bez parametrow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cDataHandling.
     */
    cDataHandling();

    /*
     * void mMainMenu() - menu glowne obslugi.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMainMenu();

    /*
     * void mMenuDynamicOneDimensionTable() - menu obslugujace
     * dynamiczna tabele jednowymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicOneDimensionTable();

    /*
     * void mMenuDynamicTwoDimensionTable() - menu obslugujace
     * dynamiczna tabele dwuwymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicTwoDimensionTable();

/********** PUBLIC: END **********/
};

#endif // CDATAHANDLING_H

/* cdatahandling.h */
/********** END_OF_FILE **********/
