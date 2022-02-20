/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectortwodimension.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

/*
 * cVectorTwoDimension() - klasa modelujaca tablice
 * dwuwymiarowa (wektor wektorow) z wykorzystaniem
 * szablonu <vector>.
 */
class cVectorTwoDimension
{
/********** PUBLIC: BEGIN **********/

public:

    /*
     * cVectorTwoDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension();

    /*
     * cVectorTwoDimension(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem: rozmiarem, ktory
     * jest rownoczesnie liczba elementow poszczegolnych
     * wektorow oraz wektorow wektorow.
     * PRE:
     * - podanie wymiaru (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aSize);

    /*
     * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns) -
     * konstruktor wywolywany z dwoma argumentami: liczba
     * wierszy (liczba wektorow) oraz liczba kolumn (liczba
     * elementow w poszczegolnych wektorach).
     * PRE:
     * - podanie liczby wierszy (typ: typeLoop);
     * - podanie liczby kolumn (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aRows, typeLoop aColumns);

    /*
     * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange) -
     * konstruktor wywolywany z trzema argumentami: liczba
     * wierszy (liczba wektorow), liczba kolumna (liczba
     * elementow w poszczegolnych wektorach) oraz
     * zakresem losowania elementow struktury.
     * PRE:
     * - podanie liczby wierszy (typ: typeLoop);
     * - podanie liczby kolumn (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange);



    /*
     * typeData getElement(typeLoop aRows, typeLoop aColumns) -
     * metoda zwracajaca wartosc wskazanego elementu.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci wskazanego elementu
     * (typ: typeData).
     */
    inline typeData getElement(typeLoop aRows, typeLoop aColumns)
    {
        return VectorElements[aRows][aColumns];
    }

    /*
     * size_t getRows() - metoda zwracajaca liczbe
     * wierszy (wektorow) struktury.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie liczby wierszy (typ: size_t).
     */
    inline size_t getRows()
    {
        return VectorElements.size();
    }

    /*
     * typeLoop getColumns() - metoda zwracajaca liczbe
     * kolumn (liczbe elementow w poszczegolnych
     * wektorach) struktury.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie liczby kolumn (typ: typeLoop).
     */
    inline /*typeLoop*/ size_t getColumns()
    {
        return VectorElements[0].size();
    }

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeData).
     */
    inline typeLoop getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * typeData getMinElement() - metoda znajdujaca
     * najmniejszy element w strukturze.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement (typ: typeData).
     */
    inline typeData getMinElement()
    {
        return vMinElement;
    }

    /*
     * typeData getMaxElement() - metoda znajdujaca
     * najwiekszy element w strukturze.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement (typ: typeData).
     */
    inline typeData getMaxElement()
    {
        return vMaxElement;
    }



    /*
     * void mAddElement(typeLoop aRows,typeData aElement) -
     * metoda dopisujaca element do wskazanego wektora.
     * PRE:
     * - podanie wspolrzednej wektora (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeLoop aRows, typeData aElement);

    /*
     * bool mRemoveElement(typeLoop aRows) - metoda
     * usuwajaca element z konca wskazanego wektora
     * (o ile wektor nie jest pusty!).
     * PRE:
     * - podanie wspolrzednej wektora (typ: typeLoop);
     * POST:
     * - zwrocenie informacji o tym, ze usuniecie elementu
     * sie powiodlo (typ: bool).
     */
    bool mRemoveElement(typeLoop aRows);



    /*
     * void mDrawElements() - metoda losujaca elementy
     * wektora wektorow o podanych rozmiarach.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mDrawElements();

    /*
     * void mFindMinElement() - metoda znajdujaca
     * najmniejszy element w strukturze.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMinElement();

    /*
     * void mFindMaxElement() - metoda znajdujaca
     * najwiekszy element w strukturze.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMaxElement();



    /*
     * void mPrintElement(typeLoop aRows, typeLoop aColumns) -
     * metoda wypisujaca wskazany element.
     * PRE:
     * - podanie numeru wektora (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aRows, typeLoop aColumns);

    /*
     * void mPrintVector(typeLoop aRows) - metoda
     * wyswietlajaca zawartosc wskazanego wektora.
     * PRE:
     * - podanie numeru wektora (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintVector(typeLoop aRows);

    /*
     * void mPrintAllElements() - metoda wypisujaca
     * wszystkie elementy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGIN **********/

private:

    /*
     * vector <vector <typeData> > VectorElements - wektor
     * przechowujacy wektory typu typeData.
     */
    std::vector <std::vector <typeData> > VectorElements;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow wektora wektorow.
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - pole przechowujaca
     * najmniejsza wartosc w wektorze wektorow.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - pole przechowujace
     * najwieksza wartosc w wektorze wektorow.
     */
    typeData vMaxElement;

/********** PRIVATE: END **********/
};

/* cvectortwodimension.hpp */
/********** END_OF_FILE **********/
