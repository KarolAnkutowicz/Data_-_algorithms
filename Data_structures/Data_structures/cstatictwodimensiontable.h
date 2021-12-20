/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstatictwodimensiontable.h
 */

#ifndef CSTATICTWODIMENSIONTABLE_H
#define CSTATICTWODIMENSIONTABLE_H

#include "constantsandtypes.h"
#include <iostream>

using namespace std;

/*
 * cStaticTwoDimensionTable - klasa modelujaca
 * statyczna tablice dwuwymiarowa o zadanych
 * i niemodyfikowalnych pozniej rozmiarach.
 */
class cStaticTwoDimensionTable
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData tabElements[][10] - tablica elementow.
     */
    typeData tabElements[][10];

    /*
     * typeLoop vRows - pole okreslajace liczbe
     * wierszy tablicy.
     */
    typeLoop vRows;

    /*
     * typeLoop vColumns - pole okreslajace liczbe
     * kolumn tablicy.
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
     * cStaticOneDimensionTable() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cStaticOneDimensionTable.
     */
    cStaticTwoDimensionTable();

    /*
     * cStaticOneDimensionTable(typeData aDrawingRange) -
     * konstruktor wywolywany z jednym parametrem: zakresem
     * losowania elementow.
     * PRE:
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cStaticOneDimensionTable.
     */
    cStaticTwoDimensionTable(typeData aDrawingRange);

    /*
     * cStaticOneDimensionTable(typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma parametrami: zakresem
     * losowania elementow oraz liczba wierszy tablicy.
     * PRE:
     * - podanie zakresu losowania elementow (typ: typeData);
     * - podanie liczby wierszy tablicy (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cStaticOneDimensionTable.
     */
    cStaticTwoDimensionTable(typeData aDrawingRange, typeLoop aRows);



    /*
     * typeData getElement(typeLoop aRows, typeLoop aColumn) -
     * metoda zwracajaca wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    inline typeData getElement(typeLoop aRows, typeLoop aColumns)
    {
        return tabElements[aRows][aColumns];
    }

    /*
     * typeLoop getRows() - metoda zwracajaca liczbe wierszy tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vRows (typ: typeLoop).
     */
    inline typeLoop getRows()
    {
        return vRows;
    }

    /*
     * typeLoop getColumns() - metoda zwracajaca liczbe kolumn tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vColumn (typ: typeLoop).
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
     * void mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement) -
     * metoda zmieniajaca wartosc wskazanego elementu tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement);

    /*
     * void mRemoveElement(typeLoop aRows, typeLoop aColumns) - metoda
     * resetujaca wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mClearElement(typeLoop aRows, typeLoop aColumns);



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
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    inline void mPrintElement(typeLoop aRows, typeLoop aColumns)
    {
        cout << tabElements[aRows][aColumns] << " ";
    }

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

#endif // CSTATICTWODIMENSIONTABLE_H

/* cstatictwodimensiontable.h */
/********** END_OF_FILE **********/
