/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuemy.h
 */

#ifndef CQUEUEMY_H
#define CQUEUEMY_H

#include "constantsandtypes.h"

using namespace std;

/*
 * class cQueueMy - klasa modelujaca kolejke
 * bez wykorzystania szablonu <queue>.
 */
class cQueueMy
{
/********** PRIVATE: BEGIN **********/

    /*
     * typeData *QueuekMy - wskaznik do pierwszego elementu
     * kolejki.
     */
    typeData *QueueMy;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar kolejki.
     */
    typeLoop vSize;

    /*
     * bool vIsEmpty - zmienna logiczna okreslajaca czy kolejka
     * jest pusta czy nie.
     */
    bool vIsEmpty;

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
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueMy();

    /*
     * cQueueTemplate() - konstruktor wywolywany z jednym
     * argumentem - liczba elementow jakie mamy dodac
     * do kolejki.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueMy(typeLoop aSize);

    /*
     * cQueueTemplate() - konstruktor wywolywany z dwoma
     * argumentami - liczba elementow jakie mamy dodac
     * do kolejki oraz zakresem z jakiego mamy te elementy
     * losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueMy(typeLoop aSize, typeData aDrawingRange);



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
    typeLoop getQueueSize();

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeLoop).
     */
    typeLoop getDrawingRange();

    /*
     * bool getListQueueIsEmpty() - metoda zawracajaca
     * informacje o tym czy lista jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy lista jest pusta
     * (typ: bool).
     */
    bool getQueueIsEmpty();



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
