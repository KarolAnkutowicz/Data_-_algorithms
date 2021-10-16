/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: celementmy.h
 */

#ifndef CELEMENTMY_H
#define CELEMENTMY_H

#include "constantsandtypes.h"
#include <cstdlib>

using namespace std;

/*
 * class cElementMy - klasa modelujaca elementy
 * obiektow klasy "cListMy", czyli list nie
 * korzystajacych z szablonu <list>
 * oraz obiektow klasy "cQueueMy", czyli kolejek
 * nie korzystajacych z szablonu <queue>.
 */
class cElementMy
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData vValue - zmienna przechowujaca
     * wartosc elementu listy.
     */
    typeData vValue;

    /*
     * cElementMy *vNext - wskaznik na nastepny
     * element listy.
     */
    cElementMy *vNext;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cElementMy() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cElementMy.
     */
    cElementMy();

    /*
     * cElementMy(typeData aValue) - konstruktor
     * wywolywany z jednym argumentem - wartoscia elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cElementMy.
     */
    cElementMy(typeData aValue);

    /*
     * cElementMy(typeData aValue, cElementMy *aNext) -
     * konstruktor wywolywany z dwoma argumentami -
     * wartoscia elementu oraz wskaznikiem na nastepny element.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * - podanie wskaünika do nastepnego elementu
     * (typ: *cElementMy);
     * POST:
     * - tworzenie obiektu klasy cElementMy.
     */
    cElementMy(typeData aValue, cElementMy *aNext);

    /*
     * ~cElementMy() - destruktor klasy cElementMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cElementMy();



    /*
     * typeData getValue() - metoda zwracajaca
     * wartosc elementu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie zawartosci pola vValue (typ: typeData).
     */
    inline typeData getValue()
    {
        return vValue;
    }

    /*
     * cElementMy *getNext() - metoda zwracajaca
     * wskaznik do nastepnego elementu w liscie.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie zawartosci pola *vNext (typ: cElementMy).
     */
    inline cElementMy *getNext()
    {
        return vNext;
    }

    /*
     * void setValue (typeData aValue) - metoda
     * ustanawiajaca wartosc elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void setValue (typeData aValue)
    {
        vValue = aValue;
    }

    /*
     * void setNext (cElementMy *aNext) - metoda
     * ustanawiajaca wskaznik do nastepnego elementu.
     * PRE:
     * - podanie wskaznika do nastepnego elementu
     * (typ: cElementMy);
     * POST:
     * - brak.
     */
    inline void setNext (cElementMy *aNext)
    {
        vNext = aNext;
    }

/********** PUBLIC: END **********/
};

#endif // CELEMENTMY_H

/* celementmy.h */
/********** END_OF_FILE **********/
