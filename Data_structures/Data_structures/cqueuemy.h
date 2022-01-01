/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuemy.h
 */

#ifndef CQUEUEMY_H
#define CQUEUEMY_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * class cQueueMy - klasa modelujaca kolejke
 * bez wykorzystania szablonu <queue>.
 */
class cQueueMy
{
/********** PRIVATE: BEGIN **********/

    /*
     * cElementMy *QueuekMy - wskaznik do pierwszego elementu
     * kolejki.
     */
    typeData *QueueMy;

    /*
     * typeLoop vSize - zmienna przechowujaca rozmiar kolejki.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - zakres losowania elementow
     * kolejki.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:

    /*
     * cQueueMy() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cQueueMy.
     */
    cQueueMy();

    /*
     * cQueueMy() - konstruktor wywolywany z jednym
     * argumentem - liczba elementow jakie mamy dodac
     * do kolejki.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cQueueMy.
     */
    cQueueMy(typeLoop aSize);

    /*
     * cQueueMy() - konstruktor wywolywany z dwoma
     * argumentami - liczba elementow jakie mamy dodac
     * do kolejki oraz zakresem z jakiego mamy te elementy
     * losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cQueueMy.
     */
    cQueueMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cQueueMy() - destruktor klasy cQueueMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cQueueMy();



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z kolejki
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z kolejki
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getQueueSize() - zwrocenie rozmiaru kolejki.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru kolejki (typ: typeLoop).
     */
    inline typeLoop getQueueSize()
    {
        return vSize;
    }

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeLoop).
     */
    inline typeLoop getDrawingRange()
    {
        return vDrawingRange;
    }



    /*
     * void mAddElement(typeData aElement) - metoda
     * dopisujaca element do kolejki.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca
     * element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy kolejki.
     * PRE:
     * - podanie liczby losowanych elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CQUEUEMY_H

/* cqueuemy.h */
/********** END_OF_FILE **********/
