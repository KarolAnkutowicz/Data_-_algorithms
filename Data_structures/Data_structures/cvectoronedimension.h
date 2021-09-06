/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectoronedimension.h
 */

#ifndef CVECTORONEDIMENSION_H
#define CVECTORONEDIMENSION_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

/*
 * cVectorOneDimension() - klasa modelujaca tablice
 * jednowymiarowa (wektor) z wykorzystaniem szablonu
 * <vector>.
 */
class cVectorOneDimension
{
/********** PRIVATE: BEGIN **********/

    /*
     * vector <typeData> VectorElements - wektor
     * przechowujacy elementy typu TypeData.
     */
    vector <typeData> VectorElements;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow wektora.
     */
    typeData vDrawingRange;

    /*
     * typeData vMaximum - pole przechowujace
     * najwieksza wartosc tablicy.
     */
    typeData vMaximum;

    /*
     * typeData vMinimum - pole przechowujaca
     * najmniejsza wartosc tablicy.
     */
    typeData vMinimum;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:
    /*
     * cVectorOneDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension();

    /*
     * cVectorOneDimension(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem - liczba elementow
     * jakie mamy umiescic w wektorze.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension(typeLoop aSize);

    /*
     * cVectorOneDimension(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy umiescic w wektorze oraz zakres
     * losowanie elementow wektora.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typData);
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getElement() - metoda zwracajaca ostatni
     * element wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu wektora (typ: typeData).
     */
    typeData getElement();

    /*
     * typeData getElement(typeLoop aIndex) - metoda zwracajaca
     * wskazany element wektora (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wskazanego elementu wektora (typ: typeData).
     */
    typeData getElement(typeLoop aIndex);

    /*
     * typeLoop getVectorSize() - metoda zwracajaca rozmiar
     * wektora.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru wektora (typ: typeLoop).
     */
    inline typeLoop getVectorSize()
    {
        return VectorElements.size();
    }

    /*
     * typeData getDrawingRange() - metoda zwracaja
     * zakres losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeData).
     */
    inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * bool getVectorIsEmpty() - zwrocenie informacji o tym
     * czy wektor jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy wektor jest pusty
     * (typ: bool).
     */
    inline bool getVectorIsEmpty()
    {
        return VectorElements.empty();
    }

    /*
     * typeData getMaximum() - metoda zwracajaca
     * najwieksza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosc pola vMaximum (typ: typeData).
     */
    inline typeData getMaximum()
    {
        return vMaximum;
    }

    /*
     * typeData getMinimum() - metoda zwracajaca
     * najmniejsza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosc pola vMinimum (typ: typeData).
     */
    inline typeData getMinimum()
    {
        return vMinimum;
    }



    /*
     * void mAddElement(typeData aElement) - metoda dodajaca
     * nowy element na koniec wektora.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca ostatni element
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    bool mRemoveElement();



    /*
     * void mFindMaximum() - metoda znajdujaca
     * najwieksza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMaximum();

    /*
     * void mFindMinimum() - metoda znajdujaca
     * najmniejsza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMinimum();



    /*
     * void mPrintElement() - metoda wypisujaca ostatni element
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintElement();

    /*
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element wektora (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aIndex);

    /*
     * void mPrintAllElements() - wypisanie calej zawartosci
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CVECTORONEDIMENSION_H

/* cvectoronedimension.h */
/********** END_OF_FILE **********/
