/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.h
 */

#ifndef CDYNAMICONEDIMENSIONTABLE_H
#define CDYNAMICONEDIMENSIONTABLE_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * cDynamicOneDimensionTable - klasa modelujaca jednowymiarowa
 * tablice elementow oraz mozliwe operacje na niej.
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
     * bool vTableIsEmpty - pole okreslajace czy tablica
     * jest pusta.
     */
    bool vTableIsEmpty;

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
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicOneDimensionTable();

    /*
     * cDynamicOneDimensionTable(typeLoop aLengthTable) - konstruktor
     * wywolywany z jednym argumentem - dlugoscia tablicy.
     * PRE:
     * - podanie dlugosci tablicy (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cDynamicOneDimensionTable.
     */
    cDynamicOneDimensionTable(typeLoop aLengthTable);

    /*
     * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - dlugoscia
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
     * ~cDynamicOneDimensionTable() - destruktor klasy DynamicOneDimensionTable.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cDynamicOneDimensionTable();



    /*
     * typeData getElement() - metoda zwracajaca
     * ostatni element tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    typeData getElement();

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
    inline typeLoop getLenthtTable()
    {
        return vLengthTable;
    }

    /*
     * bool getTableIsEmpty() - metoda zwracajaca informacje
     * o tym czy tablica jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vTableIsEmpty(typ: typeData).
     */
    bool getTableIsEmpty();

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
     * void mAddElement(typeData aElement) - metoda dodajaca
     * nowy element na koniec tablicy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca ostatni element
     * tablicy (o ile tablica nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    bool mRemoveElement();



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
     * void mPrintElement() - metoda wypisujaca ostatni element
     * tablicy (o ile tablica nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintElement();

    /*
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element tablicy (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aIndex);

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
