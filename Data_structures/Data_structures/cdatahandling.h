/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.h
 */

#ifndef CDATAHANDLING_H
#define CDATAHANDLING_H

#include "carrayonedimension.h"
#include "carraytwodimension.h"
#include "cdequemy.h"
#include "cdequetemplate.h"
#include "cdynamiconedimensiontable.h"
#include "cdynamictwodimensiontable.h"
#include "cforwardlistmy.h"
#include "cforwardlisttemplate.h"
#include "cheapbinary.h"
#include "clistmy.h"
#include "clisttemplate.h"
#include "cmapmy.h"
#include "cmaptemplate.h"
#include "constantsandtypes.h"
#include "cqueuemy.h"
#include "cqueuetemplate.h"
#include "csetmy.h"
#include "csettemplate.h"
#include "cstackmy.h"
#include "cstacktemplate.h"
#include "cstaticonedimensiontable.h"
#include "cstatictwodimensiontable.h"
#include "cunorderedmapmy.h"
#include "cunorderedmaptemplate.h"
#include "cunorderedsetmy.h"
#include "cunorderedsettemplate.h"
#include "cvectoronedimension.h"
#include "cvectortwodimension.h"
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
     * void mMenuStaticOneDimensionTable() - metoda obslugujaca
     * statyczna tablice jednowymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStaticOneDimensionTable();

    /*
     * mMenuArrayOneDimension() - metoda obslugujaca
     * statyczna tablice jednowymiarowa wykorzystujaca
     * szablon <array>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuArrayOneDimension();

    /*
     * void mMenuStaticTwoDimensionTable() - metoda obslugujaca
     * statyczna tablice dwuwymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStaticTwoDimensionTable();

    /*
     * void mMenuArrayTwoDimension() - metoda obslugujaca
     * statyczna tablice dwuwymiarowa wykorzystujaca
     * szablon <array>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuArrayTwoDimension();

    /*
     * void mMenuDynamicOneDimensionTable() - metoda obslugujaca
     * dynamiczna tablice jednowymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicOneDimensionTable();

    /*
     * void mMenuVectorOneDimension() - metoda obslugujaca
     * dynamiczna tablice jednowymiarowa wykorzystujaca
     * szablon <vector>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuVectorOneDimension();

    /*
     * void mMenuDynamicTwoDimensionTable() - metoda obslugujaca
     * dynamiczna tablice dwuwymiarowa.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDynamicTwoDimensionTable();

    /*
     * void mMenuVectorTwoDimension() - metoda obslugujaca
     * dynamiczna tablice dwuwymiarowa wykorzystujaca
     * szablon <vector>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuVectorTwoDimension();



    /*
     * void mMenuForwardListMy() - metoda obslugujaca liste
     * jednokierunkowa bez wykorzystania szablonu
     * <forward_list>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuForwardListMy();

    /*
     * void mMenuForwardListTemplate() - metoda obslugujaca
     * liste jednokierunkowa dzialajaca z wykorzystaniem
     * szablonu <forward_list>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuForwardListTemplate();

    /*
     * void mMenuListMy() - metoda obslugujaca liste dzialajaca
     * bez wykorzystania szablony <list>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuListMy();

    /*
     * void mMenuListTemplate() - metoda obslugujaca liste dzialajaca
     * z wykorzystaniem szablonu <list>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuListTemplate();

    /*
     * void mMenuQueueMy() - metoda obslugujace kolejke
     * dzialajaca bez wykorzystania szablonu <queue>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuQueueMy();

    /*
     * void mMenuQueueTemplate() - metoda obslugujaca kolejke
     * dzialajaca z wykorzystaniem szablonu <queue>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuQueueTemplate();

    /*
     * void mMenuDequeMy() - metoda obslugujace kolejke
     * dwukierunkowa dzialajaca bez wykorzystania szablonu
     * <deque>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDequeMy();

    /*
     * void mMenuDequeTemplate() - metoda obslugujace kolejke
     * dwukierunkowa dzialajaca z wykorzystaniem szablonu
     * <deque>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuDequeTemplate();



    /*
     * void mMenuStackMy() - metoda obslugujaca stos dzialajacy
     * bez wykorzystania szablonu <stack>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStackMy();

    /*
     * void mMenuStackTemplate() - metoda obslugujaca stos dzialajacy
     * na podstawie szablonu <stack>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuStackTemplate();

    /*
     * void mMenuHeapBinary() - metoda obslugujaca kopiec
     * binarny.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuHeapBinary();



    /*
     * void mMenuMapMy() - metoda obslugujaca mape
     * dzialajaca bez wykorzystania szablonu <map>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuMapMy();

    /*
     * void mMenuMapTemplate() - metoda obslugujaca mape
     * dzialajaca z wykorzystaniem szablonu <map>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuMapTemplate();

    /*
     * void mMenuUnorderedMapMy() - metoda obslugujaca
     * nieuporzadkowana mape dzialajaca bez wykorzystania
     * szablonu <unordered_map>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuUnorderedMapMy();

    /*
     * void mMenuUnorderedMapTemplate() - metoda obslugujaca
     * nieuporzadkowana mape wykorzystujaca szablon
     * <unordered_map>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuUnorderedMapTemplate();



    /*
     * void mMenuSetMy() - metoda obslugujaca zbior dzialajacy
     * bez wykorzystania szablonu <set>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuSetMy();

    /*
     * void mMenuSetTemplate() - metoda obslugujaca zbior
     * dzialajacy z wykorzystaniem szablonu <set>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuSetTemplate();

    /*
     * void mMenuUnorderedSetMy() - metoda obslugujaca
     * nieupoprzadkowany zbior dzialajacy bez wykorzystania
     * szablonu <unordered_set>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuUnorderedSetMy();

    /*
     * void mMenuUnorderedSetTemplate() - metoda obslugujaca
     * nieuporzadkowany zbior dzialajacy z wykorzystaniem
     * szablonu <unordered_set>.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMenuUnorderedSetTemplate();

/********** PUBLIC: END **********/
};

#endif // CDATAHANDLING_H

/* cdatahandling.h */
/********** END_OF_FILE **********/
