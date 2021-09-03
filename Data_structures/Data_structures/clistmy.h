/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmy.h
 */

#ifndef CLISTMY_H
#define CLISTMY_H

#include "constantsandtypes.h"

using namespace std;

/*
 * cListMy - klasa modelujaca liste bez wykorzystania
 * szablonu <list>.
 */
class cListMy
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData *ListTemplate - lista przechowujaca
     * elementy typu typeData.
     */
    typeData *ListTemplate;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar listy.
     */
    typeLoop vSize;

    /*
     * bool vIsEmpty - zmienna logiczna okreslajaca czy lista
     * jest pusta czy nie.
     */
    bool vIsEmpty;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow stosu.
     */
    typeData vDrawingRange;


/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cListMy() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cListTemplate.
     */
    cListMy();

    /*
     * cListMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * dodac do listy.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cListTemplate.
     */
    cListMy(typeLoop aSize);

    /*
     * cListMy(typeLoop aSize, typeData aDrawingRange) -
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
    cListMy(typeLoop aSize, typeData aDrawingRange);



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
    typeLoop getListSize();

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
     * bool getListIsEmpty() - metoda zawracajaca
     * informacje o tym czy lista jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy lista jest pusta
     * (typ: bool).
     */
    bool getListIsEmpty();



    /*
     * void mAddElementToBegin(typeData aElement) - metoda
     * dopisujaca element na sam poczatek listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToBegin(typeData aElement);

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na samym koncu listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToEnd(typeData aElement);

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
};

/********** PUBLIC: END **********/

#endif // CLISTMY_H

/* clistmy.h */
/********** END_OF_FILE **********/
