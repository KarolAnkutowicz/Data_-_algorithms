/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmaptemplate.h
 */

#ifndef CMAPTEMPLATE_H
#define CMAPTEMPLATE_H

#include "celementsmystructures.h"
#include "constantsandtypes.h"
#include <iostream>
#include <map>

using namespace std;

/*
 * cMapTemplate - klasa modelujaca mape
 * wykorzystaniem szablonu <map>.
 */
class cMapTemplate
{
/********** PRIVATE: BEGIN **********/

    /*
     * map <typeKey, typeData> MapTemplate - mapa
     * elementow o kluczu typu "typeKey" i wartosciach
     * typu "typeData".
     */
    map <typeKey, typeData> MapTemplate;

    /*
     * typeData vDrawingRangeValue - pole przechowujace
     * zakres losowania wartosci elementow.
     */
    typeData vDrawingRangeValue;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cMapTemplate() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cMapTemplate.
     */
    cMapTemplate();

    /*
     * cMapTemplate(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * POST:
     * - utworzenie obiektu klasy cMapTemplate.
     */
    cMapTemplate(typeLoop aSize);

    /*
     * cMapTemplate(typeLoop aSize) - konstruktor wywolywany
     * z dwoma argumentem - liczba elementow oraz zakresem
     * losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cMapTemplate.
     */
    cMapTemplate(typeLoop aSize, typeData aDrawingRangeValue);



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
     * typeLoop getMapSize() - metoda zwracajaca rozmiar
     * mapy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru mapy (typ: typeLoop).
     */
    typeLoop getMapSize();

    /*
     * typeLoop getDrawingRangeValue() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRangeValue
     * (typ: typeLoop).
     */
    typeLoop getDrawingRangeValue();

    /*
     * bool getMapIsEmpty() - metoda zawracajaca
     * informacje o tym czy mapa jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy mapa jest pusta
     * (typ: bool).
     */
    bool getMapIsEmpty();



    /*
     * void mAddElement(cElementMapAndSet aElement) - metoda
     * dopisujaca element do mapy.
     * PRE:
     * - podanie elementu (typ: cElementMapAndSet);
     * POST:
     * - brak.
     */
    void mAddElement(cElementMapAndSet aElement);

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
};

#endif // CMAPTEMPLATE_H

/* cmaptemplate.h */
/********** END_OF_FILE **********/
