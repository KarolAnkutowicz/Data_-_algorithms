/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlistmy.hpp
 */

#ifndef CFORWARDLISTMY_HPP
#define CFORWARDLISTMY_HPP

#include "celementsmystructures.hpp"
#include <iostream>

using namespace std;

/*
 * cForwardListMy - klasa modelujaca liste
 * jednokierunkowa bez wykorzystania szablonu
 * <forward_list>.
 */
class cForwardListMy
{
    /********** PRIVATE: BEGINNING **********/

        /*
         * cElementForwardListAndQueue *vFirst - wskaznik
         * na pierwszy element listy.
         */
    cElementForwardListAndQueue* vFirst;

    /*
     * cElementForwardListAndQueue *vLast; - wskaznik
     * na ostatni element listy.
     */
    cElementForwardListAndQueue* vLast;

    /*
     * typeLoop vSize - pole przechowujace rozmiar listy.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - pole przechowujace zakres
     * losowania elementow listy.
     */
    typeData vDrawingRange;

    /********** PRIVATE: END **********/

    /********** PUBLIC: BEGINNING **********/
public:

    /*
     * cForwardListMy() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cForwardListMy.
     */
    cForwardListMy();

    /*
     * cForwardListMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * dodac do listy jednokierunkowej.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cForwardListMy.
     */
    cForwardListMy(typeLoop aSize);

    /*
     * cForwardListMy(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do listy jednokierunkowej oraz
     * zakresem z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie maksymalnego zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cForwardListMy.
     */
    cForwardListMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cForwardListMy() - destruktor klasy cForwardListMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
     //~cForwardListMy();



     /*
      * typeData getFirstElement() - metoda zwracajaca
      * pierwszy element z listy jednokierunkowej.
      * PRE:
      * - brak;
      * POST:
      * - zwrocenie pierwszego elementu z listy
      * jednokierunkowej (typ: typeData).
      */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z listy jednokierunkowej.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z listy
     * jednokierunkowej (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getListSize() - zwrocenie rozmiaru listy
     * jednokierunkowej.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru listy jednokierunkowej
     * (typ: typeLoop).
     */
    inline typeLoop getListSize()
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
     * bool getListIsEmpty() - metoda zawracajaca
     * informacje o tym czy lista jednokierunkowa jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy lista jednokierunkowa
     * jest pusta (typ: bool).
     */
    bool getListIsEmpty();



    /*
     * void mAddElementToBegin(typeData aElement) - metoda
     * dopisujaca element na sam poczatek listy jednokierunkowej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToBegin(typeData aElement);

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na samym koncu listy jednokierunkowej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToEnd(typeData aElement);

    /*
     * bool mRemoveElementFromBegin() - metoda usuwajaca
     * element z poczatku listy jednokierunkowej (o ile
     * lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromBegin();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca listy jednokierunkowej (o ile
     * lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy listy jednokierunkowej.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element listy jednokierunkowej (o ile
     * lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element listy jednokierunkowej (o ile
     * lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc listy jednokierunkowej (o ile
     * lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

    /********** PUBLIC: END **********/
};

#endif // CFORWARDLISTMY_HPP

/* cforwardlistmy.hpp */
/********** END_OF_FILE **********/
