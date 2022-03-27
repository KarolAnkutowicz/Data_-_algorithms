/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlisttemplate.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <forward_list>
#include <iostream>

/*
 * cForwardListTemplate - klasa modelujaca liste
 * jednokierunkowa z wykorzystaniem szablonu
 * <forward_list>.
 */
class cForwardListTemplate
{
/********** PUBLIC: BEGINNING **********/

public:

    /*
     * cForwardListTemplate() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cForwardListTemplate.
     */
    cForwardListTemplate();

    /*
     * cForwardListTemplate(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem - liczba elementow
     * jakie mamy dodac do listy jednokierunkowej.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cForwardListTemplate.
     */
    cForwardListTemplate(typeLoop aSize);

    /*
     * cForwardListTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do listy jednokierunkowej oraz
     * zakresem z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie maksymalnego zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cForwardListTemplate.
     */
    cForwardListTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z listy jednokierunkowej.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z listy
     * jednokierunkowej (typ: typeData).
     */
    inline typeData getFirstElement()
    {
        return ForwardListTemplate.front();
    }

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
    inline bool getListIsEmpty()
    {
        return ForwardListTemplate.empty();
    }



    /*
     * void mAddElement(typeData aElement) - metoda dopisujaca
     * element na sam poczatek listy jednokierunkowej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca element z poczatku
     * listy jednokierunkowej (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement();

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

/********** PRIVATE: BEGINNING **********/

private:

    /*
     * std::forward_list <typeData> ForwardListTemplate -
     * lista jednokierunkowa przechowujaca elementy type typeData.
     */
    std::forward_list <typeData> ForwardListTemplate;

    /*
     * typeData vDrawingRange - pole przechowujace zakres
     * losowania elementow listy.
     */
    typeData vDrawingRange;

    /*
     * typeLoop vSize - pole przechowujace liczbe elementow
     * listy jednokierunkowej.
     */
    typeLoop vSize;

/********** PRIVATE: END **********/
};

/* cforwardlisttemplate.hpp */
/********** END_OF_FILE **********/
