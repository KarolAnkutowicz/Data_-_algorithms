/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedsetmy.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <iostream>

/*
 * cUnorderedSetMy - klasa modelujaca
 * nieuporzadkowany zbior bez wykorzystania
 * szablonu <unordered_set>.
 */
class cUnorderedSetMy
{
/********** PUBLIC: END **********/

public:

    /*
     * cSetMy() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cUnorderedSetMy.
     */
    cUnorderedSetMy();

    /*
     * cUnorderedSetMy(typeLoop aSize) - konstruktor wywolywany
     * z dwoma argumentem - liczba elementow oraz zakresem
     * losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cUnorderedSetMy.
     */
    cUnorderedSetMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cUnorderedSetMy() - destruktor klasy cSetMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cUnorderedSetMy();



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
     * bool mIfExist(typeData aValue) - metoda sprawdzajaca
     * czy element o wskazanej wartosci istnieje w zbiorze.
     * PRE:
     * - podanie wartosci (typ: typeData);
     * POST:
     * - zwrocenie informacji czy istnieje element w zbiorze
     * (typ: bool).
     */
    bool mIfExist(typeData aValue);



    /*
     * void mAddElement(typeData aValue) - metoda
     * dopisujaca element do zbioru.
     * PRE:
     * - podanie wartosci (typ: aValue);
     * POST:
     * - zwrocenie informacji czy dodanie do zbioru
     * powiodlo sie (typ: bool).
     */
    bool mAddElement(typeData aValue);

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
     * typeData *UnorderedSetMy - wskaznik na zbior elementow
     * o wartosciach typu "typeData".
     */
    typeData* UnorderedSetMy;

    /*
     * typeLoop vSize - pole przechowujace rozmiar zbioru.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/
};

/* cunorderedsetmy.hpp */
/********** END_OF_FILE **********/
