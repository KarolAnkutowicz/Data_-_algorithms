/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedmapmy.hpp
 */

#pragma once

#include "celementsmystructures.hpp"
#include "constantsandtypes.hpp"
#include <iostream>

/*
 * cUnorderedMapMy - klasa midelujaca mape
 * nieuporzadkowana bez wykorzystania szablonu
 * <unordered_map>.
 */
class cUnorderedMapMy
{
/********** PUBLIC: BEGINNING **********/

public:

    /*
     * cUnorderedMapMy() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cUnorderedMapMy();

    /*
     * cUnorderedMapMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cUnorderedMapMy(typeLoop aSize);

    /*
     * cUnorderedMapMy(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentem: liczba
     * elementow oraz zakresem losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cUnorderedMapMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cUnorderedMapMy() - destruktor klasy cMapMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cUnorderedMapMy();



    /*
     * typeData getElement(typeKey aKey) - metoda
     * zwracajaca wartosc wskazanego elementu z mapy
     * wedlug podanego klucza (o ile element istnieje).
     * PRE:
     * - podanie klucza (typ: typeKey);
     * POST:
     * - zwrocenie elementu z mapy (typ: typeData).
     */
    typeData getElement(typeKey aKey);

    /*
     * typeLoop getUnorderedMapSize() - metoda zwracajaca rozmiar
     * mapy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru mapy (typ: typeLoop).
     */
    inline typeLoop getUnorderedMapSize()
    {
        return vSize;
    }

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRangeValue
     * (typ: typeLoop).
     */
    inline typeLoop getDrawingRange()
    {
        return vDrawingRange;
    }



    /*
     * bool mIfExist(typeKey aKey) - metoda sprawdaajaca
     * czy w mapie jest juz element o wskazanym kluczu.
     * PRE:
     * - podanie klucza (typeKey aKey);
     * POST:
     * - zwrocenie informacji o tym czy element istnieje
     * typ: bool).
     */
    bool mIfExist(typeKey aKey);

    /*
     * bool mAddElement(typeKey aKey, typeData aValue) - metoda
     * dopisujaca element do mapy.
     * PRE:
     * - podanie klucza (typ: aKey);
     * - podanie wartosci (typ: aValue);
     * POST:
     * - zwrocenie informacji czy dodanie elementu sie
     * powiodlo (typ: bool).
     */
    bool mAddElement(typeKey aKey, typeData aValue);

    /*
     * bool mRemoveElement(typeKey aKey) - metoda usuwajaca
     * wskazany element z mapy (o ile element istnieje!).
     * PRE:
     * - podanie klucza (typeKey aKey);
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement(typeKey aKey);

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy mapy.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * wskazany element mapy (o ile mapa nie jest pusta
     * i element istnieje!).
     * PRE:
     * - podanie wartosci klucza (typ: typeKey);
     * POST:
     * - brak.
     */
    void mPrintElement(typeKey aKey);

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc mapy (o ile mapa nie jest pusta!).
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
     * cElementMap* UnorderedMapMy - wskaznik do mapy
     * elementow o kluczu typu "typeKey" i wartosciach
     * typu "typeData".
     */
    cElementMap* UnorderedMapMy;

    /*
     * typeLoop vSize - pole przechowujace wielkosc mapy.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/
};

/* cunorderedmapmy.hpp */
/********** END_OF_FILE **********/
