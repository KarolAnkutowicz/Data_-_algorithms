/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequemy.hpp
 */

#ifndef CDEQUEMY_HPP
#define CDEQUEMY_HPP

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * cDequeMy - klasa modelujaca kolejke dwukierunkowa
 * bez wykorzystania szablonu <deque>
 */
class cDequeMy
{
    /********** PRIVATE: BEGIN **********/

        /*
         * cElementMy *DequekMy - wskaznik do pierwszego elementu
         * kolejki dwukierunkowej.
         */
    typeData* DequeMy;

    /*
     * typeLoop vSize - zmienna przechowujaca rozmiar kolejki
     * dwukierunkowej.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - zakres losowania elementow
     * kolejki dwukierunkowej.
     */
    typeData vDrawingRange;

    /********** PRIVATE: END **********/

    /********** PUBLIC: BEGIN **********/
public:

    /*
     * cDequeMy() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cDequeMy.
     */
    cDequeMy();

    /*
     * cDequeMy() - konstruktor wywolywany z jednym
     * argumentem - liczba elementow jakie mamy dodac
     * do kolejki dwukierunkowej.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cDequeMy.
     */
    cDequeMy(typeLoop aSize);

    /*
     * cDequeMy() - konstruktor wywolywany z dwoma
     * argumentami - liczba elementow jakie mamy dodac
     * do kolejki dwukierunkowej oraz zakresem z jakiego
     * mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cDequeMy.
     */
    cDequeMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cDequeMy() - destruktor klasy cDequeMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cDequeMy();



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z kolejki dwukierunkowej
     * (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z kolejki
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z kolejki dwukierunkowej
     * (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z kolejki
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getDequeSize() - zwrocenie rozmiaru kolejki
     * dwukierunkowej.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru kolejki (typ: typeLoop).
     */
    inline typeLoop getDequeSize()
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
     * void mAddElementToBegin(typeData aElement) -
     * metoda dopisujaca element na poczatek kolejki
     * dwukierunkowej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToBegin(typeData aElement);

    /*
     * void mAddElementToEnd(typeData aElement) -
     * metoda dopisujaca element na koniec kolejki
     * dwukierunkowej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToEnd(typeData aElement);

    /*
     * bool mRemoveElementFromBegin() - metoda usuwajaca
     * element z poczatku kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromBegin();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy kolejki dwukierunkowej
     * PRE:
     * - podanie liczby losowanych elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

    /********** PUBLIC: END **********/
};

#endif // CDEQUEMY_HPP

/* cdequemy.hpp */
/********** END_OF_FILE **********/
