/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: carrayonedimension.h
 */

#ifndef CARRAYONEDIMENSION_H
#define CARRAYONEDIMENSION_H

#include "constantsandtypes.h"
//#include <array>

using namespace std;

/*
 * cArrayOneDimension - klasa modelujaca tablica
 * jednowymiarowa z wykorzystaniem szablonu <array>
 */
class cArrayOneDimension
{
/********** PRIVATE: BEGINNING **********/

    /*
     * array<typeData, vLengthArray> - struktura elementow
     * typu typeData.
     */
    //array<typeData, vLengthArray>;

    /*
     * const typeLoop vLengthArray - stala typu typeLoop
     * okreslajaca liczbe elementow struktury.
     */
    //const typeLoop vLengthArray = 10;

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
    //typeData getElement(typeLoop aIndex);

    /*
     * typeLoop getLengthTable() - metoda zwracajaca dlugosc tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vLengthTable (typ: typeLoop).
     */
    //typeLoop getLengthTable();

    /*
     * typeData getDrawingRange() - metoda zwracajaca maksymalny
     * zakres losowania elementow tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange(typ: typeData).
     */
    //typeData getDrawingRange();

    /*
     * typeData getMinElement() - metoda zwracajaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement(typ: typeData).
     */
    //typeData getMinElement();

    /*
     * typeData getMaxElement() - metoda zwracajaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement(typ: typeData).
     */
    //typeData getMaxElement();



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
    //void mReplaceElement(typeLoop aIndex, typeData aElement);

    /*
     * void mClearElement() - metoda zerujaca wskazany element
     * tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    //void mClearElement(typeLoop aIndex);



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
};

#endif // CARRAYONEDIMENSION_H

/* carrayonedimension.h */
/********** END_OF_FILE **********/
