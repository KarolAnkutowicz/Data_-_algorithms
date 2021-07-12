/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.h
 */

#ifndef CDYNAMICONEDIMENSIONTABLE_H
#define CDYNAMICONEDIMENSIONTABLE_H

#include "constantsandtypes.h"

using namespace std;

/*
 *
 */
class cDynamicOneDimensionTable
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData *tabElements - tablica elementow.
     */
    typeData *tabElements;

    /*
     * typeLoop vLengthTable - liczba elementow tablicy.
     */
    typeLoop vLengthTable;

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
     * cDynamicOneDimensionTable() - konstruktor wywolywany
     * bez parametrow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicOneDimensionTable();

    /*
     * cDynamicOneDimensionTable(typeLoop aLengthTable) - konstruktor
     * wywolywany z jednym parametrem - dlugoscia tablicy.
     * PRE:
     * - podanie dlugosci tablicy (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicOneDimensionTable(typeLoop aLengthTable);

    /*
     * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma parametrami - dlugoscia
     * tablicy oraz maksymalna wartoscia jaka mozemy wylosowac
     * wypelniajac tablice losowymi elementami.
     * PRE:
     * - podanie dlugosci tablicy (typ: typeLoop), podanie zakresu
     * elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange);



    /*
     * typeData getElement(typeLoop aIndex) - metoda zwracajaca
     * wskazany element tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    typeData getElement(typeLoop aIndex);

    /*
     * typeLoop getLenthtTable() - metoda zwracajaca dlugosc tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLengthTable (typ: typeLoop).
     */
    typeLoop getLenthtTable();

    /*
     * typeData getDrawingRange() - metoda zwracajaca maksymalny
     * zakres losowania elementow tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange(typ: typeData).
     */
    typeData getDrawingRange();

    /*
     * typeData getMinElement() - metoda zwracajaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement(typ: typeData).
     */
    typeData getMinElement();

    /*
     * typeData getMaxElement() - metoda zwracajaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement(typ: typeData).
     */
    typeData getMaxElement();



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
     * void mPrintTable() - metoda wypisujaca zawartosc tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintTable();
    /********** PUBLIC: END **********/
};

#endif // CDYNAMICONEDIMENSIONTABLE_H

/* cdynamiconedimensiontable.h */
/********** END_OF_FILE **********/
