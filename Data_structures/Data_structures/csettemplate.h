/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csettemplate.h
 */

#ifndef CSETTEMPLATE_H
#define CSETTEMPLATE_H

#include "constantsandtypes.h"
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
     * set <typeKey, typeData> MapTemplate - zbior
     * elementow o kluczu typu "typeKey" i wartosciach
     * typu "typeData".
     */
    set <typeKey, typeData> SetTemplate;

    /*
     * typeData vDrawingRangeValue - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRangeValue;

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
     * cSetTemplate(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * POST:
     * - utworzenie obiektu klasy cSetTemplate.
     */
    cSetTemplate(typeLoop aSize);

    /*
     * cSetTemplate(typeLoop aSize) - konstruktor wywolywany
     * z dwoma argumentem - liczba elementow oraz zakresem
     * losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cMapTemplate.
     */
    cSetTemplate(typeLoop aSize, typeData aDrawingRangeValue);



    /*
     * typeData getElement(typeKey aKey) - metoda
     * zwracajaca wartosc wskazanego elementu ze zbioru
     * wedlug podanego klucza (o ile element istnieje).
     * PRE:
     * - podanie klucza (typ: typeKey);
     * POST:
     * - zwrocenie elementu ze zbioru (typ: typeData).
     */
    typeData getElement(typeKey aKey);

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
     * typeLoop getDrawingRangeValue() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRangeValue
     * (typ: typeLoop).
     */
    inline typeLoop getDrawingRangeValue()
    {
        return vDrawingRangeValue;
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
     * void mAddElement(typeKey aKey, typeData aValue) - metoda
     * dopisujaca element do zbioru.
     * PRE:
     * - podanie klucza (typ: aKey);
     * - podanie wartosci (typ: aValue);
     * POST:
     * - brak.
     */
    void mAddElement(typeKey aKey, typeData aValue);

    /*
     * bool mRemoveElement(typeKey aKey) - metoda usuwajaca
     * wskazany element ze zbioru (o ile element istnieje!).
     * PRE:
     * - podanie klucza (typeKey aKey);
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement(typeKey aKey);

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
