/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csettemplate.h
 */

#ifndef CSETTEMPLATE_H
#define CSETTEMPLATE_H

#include "constantsandtypes.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <set>

using namespace std;

/*
 * cSetTemplate - klasa modelujaca zbior
 * z wykorzystaniem szablonu <set>
 */
class cSetTemplate
{
/********** PRIVATE: BEGIN **********/

    /*
     * set <typeData> SetTemplate - zbior elementow
     * o wartosciach typu "typeData".
     */
    set <typeData> SetTemplate;

    /*
     * typeData vDrawingRange - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cSetTemplate() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cSetTemplate.
     */
    cSetTemplate();

    /*
     * cSetTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentem - liczba
     * elementow oraz zakresem losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cSetTemplate.
     */
    cSetTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeLoop getSetSize() - metoda zwracajaca rozmiar
     * zbioru.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru zbioru (typ: typeLoop).
     */
    inline typeLoop getSetSize()
    {
        return SetTemplate.size();
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
     * bool getSetIsEmpty() - metoda zawracajaca
     * informacje o tym czy zbior jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy zbior jest pusty
     * (typ: bool).
     */
    inline bool getSetIsEmpty()
    {
        return SetTemplate.empty();
    }



    /*
     * void mAddElement(typeData aValue) - metoda
     * dopisujaca element do zbioru.
     * PRE:
     * - podanie wartosci (typ: aValue);
     * POST:
     * - brak.
     */
    inline void mAddElement(typeData aValue)
    {
        SetTemplate.insert(aValue);
    }

    /*
     * bool mRemoveElement(typeData aValue) - metoda usuwajaca
     * wskazany element ze zbioru (o ile element istnieje!).
     * PRE:
     * - podanie wartosci (typeData aValue);
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement(typeData aValue);

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy zbioru.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc zbioru (o ile zbior nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CSETTEMPLATE_H

/* csettemplate.h */
/********** END_OF_FILE **********/
