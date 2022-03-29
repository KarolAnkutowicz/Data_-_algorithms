/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedmaptemplate.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <unordered_map>

/*
 * cUnorderedMapTemplate - klasa modelujaca
 * nieuporzadkowana mape z wykorzystaniem
 * szablonu <unordered_map>.
 */
class cUnorderedMapTemplate
{
/********** PUBLIC: BEGIN **********/

public:

    /*
     * cUnorderedMapTemplate() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cUnorderedMapTemplate.
     */
    cUnorderedMapTemplate();

    /*
     * cUnorderedMapTemplate() - konstruktor wywolywany z jednym
     * argumentem - liczba elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cUnorderedMapTemplate.
     */
    cUnorderedMapTemplate(typeLoop aSize);

    /*
     * cUnorderedMapTemplate() - konstruktor wywolywany z dwoma
     * argumentami - liczba elementow oraz zakresem losowania
     * wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cUnorderedMapTemplate.
     */
    cUnorderedMapTemplate(typeLoop aSize, typeData aDrawingRangeValue);



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
     * size_t getUnorderedMapSize() - metoda zwracajaca rozmiar
     * mapy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru mapy (typ: size_t).
     */
    size_t getUnorderedMapSize();

    /*
     * typeData getDrawingRangeValue() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRangeValue
     * (typ: typeData).
     */
    typeData getDrawingRangeValue();

    /*
     * bool getMapIsEmpty() - metoda zawracajaca
     * informacje o tym czy mapa jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy mapa jest pusta
     * (typ: bool).
     */
    bool getUnorderedMapIsEmpty();



    /*
     * void mAddElement(typeKey aKey, typeData aValue) - metoda
     * dopisujaca element do mapy.
     * PRE:
     * - podanie klucza (typ: aKey);
     * - podanie wartosci (typ: aValue);
     * POST:
     * - brak.
     */
    void mAddElement(typeKey aKey, typeData aValue);

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
     * cala zawartosc mapy (o ile mapa nie jest pusta!).
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
     * unordered_map <typeKey, typeData> UnorderedMapTemplate -
     * mapa elementow o kluczu typu "typeKey" i wartosciach
     * typu "typeData".
     */
    std::unordered_map <typeKey, typeData> UnorderedMapTemplate;

    /*
     * typeData vDrawingRangeValue - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRangeValue;

/********** PRIVATE: END **********/
};

/* cunorderedmaptemplate.hpp */
/********** END_OF_FILE **********/
