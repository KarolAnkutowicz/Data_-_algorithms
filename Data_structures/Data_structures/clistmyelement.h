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

/********** PUBLIC: END **********/
};

#endif // CLISTMYELEMENT_H

/* clistmyelement.h */
/********** END_OF_FILE **********/
