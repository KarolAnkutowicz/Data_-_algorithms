/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: carraytwodimension.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <array>
#include <iostream>

/*
 * cArrayTwoDimension - klasa modelujaca dwuwymiarowa
 * tablice dynamiczna z wykorzystaniem szablonu <array>
 */
class cArrayTwoDimension
{
/********** PUBLIC: BEGINNING **********/

public:

    /*
     * cArrayTwoDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cArrayOneDimension.
     */
    cArrayTwoDimension();

    /*
     * cArrayTwoDimension(typeData aDrawingRange) - konstruktor
     * wywolywany z jednym argumentem - zakresem losowania
     * elementow tablicy.
     * PRE:
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cArrayOneDimension.
     */
    cArrayTwoDimension(typeData aDrawingRange);



    /*
     * typeData getElementtypeLoop aRows, typeLoop aColumns) - metoda zwracajaca
     * wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    inline typeData getElement(typeLoop aRows, typeLoop aColumns)
    {
        return MyArray[aRows][aColumns];
    }

    /*
     * typeLoop getRows() - metoda zwracajaca liczbe wierszy tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci stalej conRowsTable (typ: typeLoop).
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
     * - zwrocenie wartoscistalej conColumnsTable (typ: typeLoop).
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
     * metoda wstawiajaca nowa wartosc we wskazane miejsce
     * w tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mReplaceElement(typeLoop aRows, typeLoop aColumns, typeData aElement)
    {
        MyArray[aRows][aColumns] = aElement;
    }

    /*
     * void mClearElement(typeLoop aRows, typeLoop aColumns) -
     * metoda zerujaca wskazany element
     * tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mClearElement(typeLoop aRows, typeLoop aColumns)
    {
        MyArray[aRows][aColumns] = 0;
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
     * void mPrintElement(typeLoop aRows, typeLoop aColumns) -
     * metoda wypisujaca wskazany element tablicy.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    inline void mPrintElement(typeLoop aRows, typeLoop aColumns)
    {
        std::cout << MyArray[aRows][aColumns] << " ";
    }

    /*
     * void mPrintRow(typeLoop aRows) - metoda wypisujaca
     * wskazany wiersz.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintRow(typeLoop aRows);

    /*
     * void mPrintArray() - metoda wypisujaca zawartosc tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintArray();


/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

private:

    /*
     * array<typeData, vLengthArray> - struktura elementow
     * typu typeData.
     */
     //std::array<typeData, conLengthArray> MyArray;
    std::array< std::array<typeData, conRowsTable>, conColumnsTable> MyArray;

    /*
     * typeData vDrawingRange - maksymalna liczba jaka mozemy
     * wylosowac (zakres od 0 do vDarwingRange).
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - najmniejsza wartosc w tablicy.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - najwieksza wartosc w tablicy
     */
    typeData vMaxElement;


/********** PRIVATE: END **********/
};

/* carraytwodimension.hpp */
/********** END_OF_FILE **********/
