/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmyelement.h
 */

#ifndef CLISTMYELEMENT_H
#define CLISTMYELEMENT_H

#include "constantsandtypes.h"
using namespace std;

/*
 * class cListMyElement - klasa modelujaca
 * element obiektow klasy "cListMy", czyli
 * list nie korzystajacych z szablonu <list>.
 */
class cListMyElement
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData vValue - zmienna przechowujaca
     * wartosc elementu listy.
     */
    typeData vValue;

    /*
     * typeLoop *vNext - wskaznik na nastepny element listy.
     */
    typeLoop *vNext;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cListMyElement() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cListMyElement.
     */
    cListMyElement();

    /*
     * cListMyElement() - konstruktor wywolywany
     * z jednym argumentem - wartoscia elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cListMyElement.
     */
    cListMyElement(typeData aValue);

    /*
     * ~cListMyElement() - destruktor klasy cListMyElement.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cListMyElement();



    /*
     * typeData getValue() - metoda zwracajaca
     * wartosc elementu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie zawartosci pola vValue (typ: typeData).
     */
    typeData getValue();

    /*
     * typeLoop *getNext() - metoda zwracajaca
     * wskaznik do nastepnego elementu w liscie.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie zawartosci pola *vNext (typ: typeLoop).
     */
    typeLoop *getNext();

    /*
     * void setValue (typeData aValue) - metoda
     * ustanawiajaca wartosc elementu.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void setValue (typeData aValue);

    /*
     * void setNext (typeLoop *aNext) - metoda
     * ustanawiajaca wskaznik do nastepnego elementu.
     * PRE:
     * - podanie wskaznika do nastepnego elementu
     * (typ: typeLoop);
     * POST:
     * - brak.
     */
    void setNext (typeLoop *aNext);


/********** PUBLIC: END **********/
};

#endif // CLISTMYELEMENT_H

/* clistmyelement.h */
/********** END_OF_FILE **********/
