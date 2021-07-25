/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.h
 */

#ifndef CDATAHANDLING_H
#define CDATAHANDLING_H

#include "cdynamiconedimensiontable.h"
#include "cdynamictwodimensiontable.h"
#include "clisttemplate.h"
#include "constantsandtypes.h"
#include "cstackmy.h"
#include "cstacktemplate.h"
#include <conio.h>
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
     * void mPrintMenu() - metoda wyswietlajaca menu glowne programu.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintMainMenu();

    /*
     * void mMainMenu() - menu glowne obslugi.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMainMenu();

    /*
     * void mMenuDynamicOneDimensionTable() - menu obslugujaca
     * dynamiczna tabele jednowymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicOneDimensionTable();

    /*
     * void mMenuVectorOneDimension() - metoda obslugujaca
     * dynamiczna tabele jednowymiarowa wykorzystujaca
     * szablon <vector>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuVectorOneDimension();

    /*
     * void mMenuDynamicTwoDimensionTable() - menu obslugujace
     * dynamiczna tabele dwuwymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicTwoDimensionTable();

    /*
     * void mMenuVectorTwoDimension() - metoda obslugujaca
     * dynamiczna tabele dwuwymiarowa wykorzystujaca
     * szablon <vector>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuVectorTwoDimension();

    /*
     * void mMenuStackTemplate() - menu obslugujace stos dzialajacy
     * na podstawie szablonu <stack>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStackTemplate();

    /*
     * void mMenuStackMy() - menu obslugujace stos dzialajacy
     * bez wykorzystania szablonu <stack>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStackMy();

    /*
     * void mMenuListTemplate() - menu obslugujace liste dzialajaca
     * z wykorzystaniem szablonu <lisy>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuListTemplate();

    /*
     * void mMenuListMy() - menu obslugujace liste dzialajaca
     * bez wykorzystania szablony <list>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuListMy();

    /*
     * void mMenuQueueTemplate() - menu obslugujace kolejke
     * dzialajaca z wykorzystaniem szablonu <queue>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuQueueTemplate();

    /*
     * void mMenuQueueMy() - menu obslugujace kolejke
     * dzialajaca bez wykorzystania szablonu <queue>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuQueueMy();

    /*
     * void mMenuHeapBinary() - metoda obslugujaca kopiec
     * binarny.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuHeapBinary();

/********** PUBLIC: END **********/
};

#endif // CDATAHANDLING_H

/* cdatahandling.h */
/********** END_OF_FILE **********/
