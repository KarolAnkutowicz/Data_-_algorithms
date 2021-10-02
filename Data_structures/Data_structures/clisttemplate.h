/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clisttemplate.h
 */

#ifndef CLISTTEMPLATE_H
#define CLISTTEMPLATE_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <list>

using namespace std;

/*
 * cListTemplate - klasa modelujaca liste w oparciu
 * o szablon <list>.
 */
class cListTemplate
{
/********** PRIVATE: BEGINNING **********/

    /*
     * list <typeData> ListTemplate - lista przechowujaca
     * elementy typu typeData.
     */
    list <typeData> ListTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cListTemplate() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cListTemplate.
     */
    cListTemplate();

    /*
     * cListTemplate(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * dodac do listy.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cListTemplate.
     */
    cListTemplate(typeLoop aSize);

    /*
     * cListTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do listy oraz zakresem
     * z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie maksymalnego zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cListTemplate.
     */
    cListTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z listy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z listy
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z listy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z listy
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getListSize() - zwrocenie rozmiaru listy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru listy (typ: typeLoop).
     */
    inline typeLoop getListSize()
    {
        return ListTemplate.size();
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
     * informacje o tym czy lista jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy lista jest pusta
     * (typ: bool).
     */
    inline bool getListIsEmpty()
    {
        return ListTemplate.empty();
    }



    /*
     * void mAddElementToBegin(typeData aElement) - metoda
     * dopisujaca element na sam poczatek listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElementToBegin(typeData aElement)
    {
        ListTemplate.push_front(aElement);
    }

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na samym koncu listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElementToEnd(typeData aElement)
    {
        ListTemplate.push_back(aElement);
    }

    /*
     * bool mRemoveElementFromBegin() - metoda usuwajaca
     * element z poczatku listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromBegin();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy listy.
     * PRE:
     * - podanie liczby elementow (typ: typeData);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();


/********** PUBLIC: END **********/
};

#endif // CLISTTEMPLATE_H

/* clisttemplate.h */
/********** END_OF_FILE **********/
