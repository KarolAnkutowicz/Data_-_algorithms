/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: carrayonedimension.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
 //#include <array>

/*
 * cArrayOneDimension - klasa modelujaca tablica
 * jednowymiarowa z wykorzystaniem szablonu <array>
 */
class cArrayOneDimension
{
/********** PUBLIC: BEGINNING **********/

public:
    /*
     * cArrayOneDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cArrayOneDimension.
     */
    cArrayOneDimension();

    /*
     * cArrayOneDimension(typeData aDrawingRange) - konstruktor
     * wywolywany z jednym argumentem - zakresem losowania
     * elementow tablicy.
     * PRE:
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cArrayOneDimension.
     */
     //cArrayOneDimension(typeData aDrawingRange);



    /*
     * typeData getElement(typeLoop aIndex) - metoda zwracajaca
     * wskazany element tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    /*inline typeData getElement(typeLoop aIndex)
    {
        return MyArray[aIndex];
    }*/

    /*
     * typeLoop getLengthTable() - metoda zwracajaca dlugosc tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola conLengthTable (typ: typeLoop).
     */
    /*inline typeLoop getLengthTable()
    {
        return conLengthArray;
    }*/

    /*
     * typeData getDrawingRange() - metoda zwracajaca maksymalny
     * zakres losowania elementow tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange(typ: typeData).
     */
    /*inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }*/

    /*
     * typeData getMinElement() - metoda zwracajaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement(typ: typeData).
     */
    /*inline typeData getMinElement()
    {
        return vMinElement;
    }*/

    /*
     * typeData getMaxElement() - metoda zwracajaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement(typ: typeData).
     */
    /*inline typeData getMaxElement()
    {
        return vMaxElement;
    }*/



    /*
     * void mReplaceElement(typeLoop aIndex, typeData aElement) -
     * metoda wstawiajaca nowa wartosc we wskazane miejsce
     * w tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    /*void mReplaceElement(typeLoop aIndex, typeData aElement)
    {
        MyArray[aIndex] = aElement;
    }*/

    /*
     * void mClearElement() - metoda zerujaca wskazany element
     * tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    /*void mClearElement(typeLoop aIndex)
    {
        MyArray[aIndex] = 0;
    }*/



    /*
     * void mDrawElements() - metoda losujaca elementy tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    //void mDrawElements();

    /*
     * void mFindMinElement() - metoda znajdujaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    //void mFindMinElement();

    /*
     * void mFindMaxElement() - metoda znajdujaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    //void mFindMaxElement();



    /*
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element tablicy (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    //void mPrintElement(typeLoop aIndex);

    /*
     * void mPrintArray() - metoda wypisujaca zawartosc tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    //void mPrintArray();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

//private:
        
    /*
     * array<typeData, vLengthArray> - struktura elementow
     * typu typeData.
     */
    //array<typeData, vLengthArray> MyArray;

    /*
     * const typeLoop conLengthArray - stala typu typeLoop
     * okreslajaca liczbe elementow struktury.
     */
    //const typeLoop conLengthArray = 10;

    /*
     * typeData vDrawingRange - maksymalna liczba jaka mozemy
     * wylosowac (zakres od 0 do vDarwingRange).
     */
    //typeData vDrawingRange;

    /*
     * typeData vMinElement - najmniejsza wartosc w tablicy.
     */
    //typeData vMinElement;

    /*
     * typeData vMaxElement - najwieksza wartosc w tablicy
     */
    //typeData vMaxElement;

/********** PRIVATE: END **********/
};

/* carrayonedimension.hpp */
/********** END_OF_FILE **********/
