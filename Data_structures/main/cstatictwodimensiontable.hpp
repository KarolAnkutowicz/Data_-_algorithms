/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstatictwodimensiontable.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

/*
 * cStaticTwoDimensionTable - klasa modelujaca
 * statyczna tablice dwuwymiarowa o zadanych
 * i niemodyfikowalnych pozniej rozmiarach.
 */
class cStaticTwoDimensionTable
{
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
        return conRowsTable;
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
        return conColumnsTable;
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
    inline void mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement)
    {
        tabElements[aRows][aColumns] = aElement;
    }

    /*
     * void mRemoveElement(typeLoop aRows, typeLoop aColumns) - metoda
     * resetujaca wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    inline void mClearElement(typeLoop aRows, typeLoop aColumns)
    {
        tabElements[aRows][aColumns] = NULL;
    }



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
        std::cout << tabElements[aRows][aColumns] << " ";
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

/********** PRIVATE: BEGINNING **********/

private:

    /*
     * typeData tabElements[vRows][vColumns] - tablica elementow.
     */
    typeData tabElements[conRowsTable][conColumnsTable];

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

/* cstatictwodimensiontable.hpp */
/********** END_OF_FILE **********/
