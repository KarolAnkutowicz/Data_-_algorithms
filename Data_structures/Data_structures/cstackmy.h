/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstacktmy.h
 */

#ifndef CSTACKMY_H
#define CSTACKMY_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * cStackMy - klasa modelujaca strukture stosu
 * bez pomocy szablonu "stack".
 */
class cStackMy
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData *StackMy - tablica przechowujaca elementy
     * stosu typu typeData.
     */
    typeData *StackMy;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar stosu.
     */
    typeLoop vSize;

    /*
     * bool vIsEmpty - zmienna logiczna okreslajaca czy stos
     * jest pusty czy nie.
     */
    bool vIsEmpty;

    /*
     * typeData vDrawingRange - zakres losowania elementow
     * stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cStackMy() - konstruktor wywolywany bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu typu cStackMy.
     */
    cStackMy();

    /*
     * cStackMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * polozyc na stosie.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - utworzenie obiektu typu cStackMy.
     */
    cStackMy(typeLoop aSize);

    /*
     * cStackMy(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy polozyc na stosie oraz zakres
     * losowania wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowanie wartosci elementow
     * (typ: typeData);
     * POST:
     * - utworzenie obiektu typu cStackMy.
     */
    cStackMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cStackMy() - destruktor klasy cStackMy zwalniajacy
     * zasoby przydzielane dynamicznie
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    ~cStackMy();



    /*
     * typeData getElement() - metoda zwracajaca
     * element ze szczytu stosu (o ile stos
     * nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie elementu ze stosu (typ: typeData).
     */
    typeData getElement();

    /*
     * void getStackSize() - metoda zwracajaca
     * rozmiar stosu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vStackSize (typ: typeLoop).
     */
    inline typeLoop getStackSize()
    {
        return vSize;
    }

    /*
     * typeData getDrawingRange() - metoda zwracajaca
     * zakres wartosci losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange (typ: typeData).
     */
    inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * bool getStackIsEmpty() - metoda zwracajaca
     * informacje czy stos jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vStackIsEmpty (typ: bool).
     */
    inline bool getStackIsEmpty()
    {
        return vIsEmpty;
    }



    /*
     * void mAddElement(typeData aElement) - metoda
     * kladaca na szczyt stosu nowy element.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca element
     * ze szczytu stosu (o ile stos nie jest pusty!)
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji czy usuniecie sie powiodlo.
     */
    bool mRemoveElement();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * wartosci umieszczane na stosie.
     * PRE:
     * - podanie liczby losowanych elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);

    /*
     * void mCheckStackIsEmpty() - metoda sprawdzajaca
     * czy stos jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mCheckStackIsEmpty();



    /*
     * void mPrintElement() - metoda wypisujaca element
     * ze szczytu stosu (o ile stos nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintElement();

    /*
     * void mPrintAllElements() - metoda wypisujaca
     * wszystkie elementy stosu (o ile stos nie jest
     * pusty!) - wiaze sie to z kolejnym usuwaniem
     * elementow.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CSTACKMY_H

/* cstackmy.h */
/********** END_OF_FILE **********/
