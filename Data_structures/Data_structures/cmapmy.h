/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmapmy.h
 */

#ifndef CMAPMY_H
#define CMAPMY_H

#include "celementsmystructures.h"
#include <iostream>

using namespace std;

/*
 * cMapMy - klasa modelujaca mape bez
 * wykorzystania szablonu <map>
 */
class cMapMy
{
/********** PRIVATE: BEGIN **********/

    /*
     * map <typeKey, typeData> MapTemplate - mapa
     * elementow o kluczu typu "typeKey" i wartosciach
     * typu "typeData".
     */
    cElementMap *MapMy;

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

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cMapMy() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cMapMy();

    /*
     * cMapMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow
     * PRE:
     * - podanie liczby elementow (typ: typeLoop;
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cMapMy(typeLoop aSize);

    /*
     * cMapMy(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentem: liczba
     * elementow oraz zakresem losowanie wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cMapMy.
     */
    cMapMy(typeLoop aSize, typeData aDrawingRange);



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
    inline typeLoop getMapSize()
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

};

#endif // CMAPMY_H

/* cmapmy.h */
/********** END_OF_FILE **********/
