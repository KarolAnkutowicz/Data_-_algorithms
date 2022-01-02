/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: celementmystructures.h
 */

#ifndef CELEMENTSMYSTRUCTURES_H
#define CELEMENTSMYSTRUCTURES_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * cElementListAndDeque - klasa modelujaca element
 * listy dwukierunkowej lub kolejki dwukierunkowej.
 */
class cElementListAndDeque
{
/********** PRIVATE: BEGIN **********/

    /*
     * typeData vValue - pole zawierajace wartosc elementu.
     */
    typeData vValue;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cElementListAndDeque *vPrevious - pole zawierajace
     * wskaznik na poprzedni element.
     */
    cElementListAndDeque *vPrevious;

    /*
     * cElementListAndDeque *vNext - pole zawierajace
     * wskaznik na nasteony element
     */
    cElementListAndDeque *vNext;

    /*
     * cElementListAndDeque(typeData aValue) - konstruktor
     * wywolywany z jednym argumentem - wartoscia elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cElementListAndDeque.
     */
    cElementListAndDeque(typeData aValue)
    {
        vValue = aValue; // ustanowienie wartosci elementu
    }

    /*
     * typeData getValue() - metoda zwracajaca wartosc
     * elementu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vValue.
     */
    inline typeData getValue()
    {
        return vValue;
    }

    /*
     * void setValue(typeData aValue) - metoda ustanawiajaca
     * wartosc elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setValue(typeData aValue)
    {
        vValue = aValue;
    }

/********** PUBLIC: END **********/
};



/*
 * cElementForwardListAndQueue - klasa modelujaca
 * element listy jednokierunkowej lub kolejki.
 */
class cElementForwardListAndQueue
{
/********** PRIVATE: BEGIN **********/

    /*
     * typeData vValue - pole przechowujace wartosc
     * elementu.
     */
    typeData vValue;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cElementForwardListAndQueue *vNext - pole
     * przechowujace wskaznik na kolejny element.
     */
    cElementForwardListAndQueue *vNext;

    /*
     * cElementForwardListAndQueue (typeData aValue) -
     * konstruktor wywolywany z jednym argumentem -
     * wartoscia elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cElementForwardListAndQueue.
     */
    cElementForwardListAndQueue (typeData aValue)
    {
        vValue = aValue; // ustanowienie wartosci elementu
        vNext = NULL; // ustawienie wskaznika na nastepny element
    }

    /*
     * typeData getValue() - metoda zwracajaca wartosc
     * elementu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vValue.
     */
    inline typeData getValue()
    {
        return vValue;
    }

    /*
     * void setValue(typeData aValue) - metoda ustanawiajaca
     * wartosc elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setValue(typeData aValue)
    {
        vValue = aValue;
    }

/********** PUBLIC: END **********/
};



/*
 * cElementMap - klasa modelujaca element mapy.
 */
class cElementMap
{
/********** PRIVATE: BEGIN **********/

    /*
     * typeData vValue - pole przechowujaca wartosc
     * elementu.
     */
    typeData vValue;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * typeKey vKey - pole przechowujace klucz elementu.
     */
    typeKey vKey;

    /*
     * cElementMapAndSet() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cElementMapAndSet.
     */
    cElementMap()
    {
        vKey = NULL; // przypisanie klucza elementu
        vValue = NULL; // przypisanie wartosci elementu
    }

    /*
     * cElementMapAndSet(typeKey aKey, typeData aValue) -
     * konstruktor wywolywany z dwoma argumentami -
     * kluczem oraz wartoscia elementu.
     * PRE:
     * - podanie klucza (typ: typeKey);
     * - podanie wartosci (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cElementMapAndSet.
     */
    cElementMap(typeKey aKey, typeData aValue)
    {
        vKey = aKey; // przypisanie klucza elementu
        vValue = aValue; // przypisanie wartosci elementu
    }

    /*
     * typeData getValue() - metoda zwracajaca wartosc
     * elementu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vValue.
     */
    inline typeData getValue()
    {
        return vValue;
    }

    /*
     * void setValue(typeData aValue) - metoda ustanawiajaca
     * wartosc elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setValue(typeData aValue)
    {
        vValue = aValue;
    }

/********** PUBLIC: END **********/
};


#endif // CELEMENTSMYSTRUCTURES_H

/* celementmystructures.h */
/********** END_OF_FILE **********/
