/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedsettemplate.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <unordered_set>

/*
 * cUnorderedSetTemplate - klasa modelujaca
 * nieuporzadkowany zbior z wykorzystaniem
 * szablonu <unordered_set>
 */
class cUnorderedSetTemplate
{
/********** PUBLIC: END **********/

public:

    /*
     * cUnorderedSetTemplate() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cUnorderedSetTemplate.
     */
    cUnorderedSetTemplate();

    /*
     * cUnorderedSetTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentem - liczba
     * elementow oraz zakresem losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cSetTemplate.
     */
    cUnorderedSetTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * size_t getSetSize() - metoda zwracajaca rozmiar
     * zbioru.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru zbioru (typ: size_t).
     */
    size_t getSetSize();

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
     * bool getSetIsEmpty() - metoda zawracajaca
     * informacje o tym czy zbior jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy zbior jest pusty
     * (typ: bool).
     */
    bool getSetIsEmpty();



    /*
     * void mAddElement(typeData aValue) - metoda
     * dopisujaca element do zbioru.
     * PRE:
     * - podanie wartosci (typ: aValue);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aValue);

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

/********** PRIVATE: BEGIN **********/

private:

    /*
     * set <typeData> UnorderedSetTemplate - nieuporzadkowany
     * zbior elementow o wartosciach typu "typeData".
     */
    std::unordered_set <typeData> UnorderedSetTemplate;

    /*
     * typeData vDrawingRange - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/
};

/* cunorderedsettemplate.hpp */
/********** END_OF_FILE **********/
