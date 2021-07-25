/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstacktemplate.h
 */

#ifndef CSTACKTEMPLATE_H
#define CSTACKTEMPLATE_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stack>

using namespace std;

/*
 * cStackTemplate - klasa modelujaca strukture stosu
 * w oparciu o szablon "stack".
 */
class cStackTemplate
{
/********** PRIVATE: BEGINNING **********/

    /*
     * stack <typeData> StackTemplate - stos
     * przechowujacy elementy typu typeData.
     */
    stack <typeData> StackTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    /*
     * cStackTemplate() - konstruktor wywolywany
     * bez argumentow
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu typu cStackTemplate.
     */
    cStackTemplate();

    /*
     * cStackTemplate(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem - liczba
     * elementow jakie mamy polozyc na stosie.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - utworzenie obiektu typu cStackTemplate.
     */
    cStackTemplate(typeLoop aSize);

    /*
     * cStackTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami -
     * liczba elementow jakie mamy polozyc na stosie
     * oraz zakres losowania wartosci elementow.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania wartosci elementow
     * (typ: typeData);
     * POST:
     * - utworzenie obiektu typu cStackTemplate.
     */
    cStackTemplate(typeLoop aSize, typeData aDrawingRange);



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
     * typeLoop getStackSize() - metoda zwracajaca
     * rozmiar stosu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vStackSize (typ: typeLoop).
     */
    inline typeLoop getStackSize()
    {
        return StackTemplate.size();
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
        return StackTemplate.empty();
    }



    /*
     * void mAddElement(typeData aElement) - metoda
     * kladaca na szczyt stosu nowy element.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElement(typeData aElement)
    {
        StackTemplate.push(aElement);
    }

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
     * void mPrintElement() - metoda wypisujaca element
     * ze szczytu stosu (o ile stos nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    inline void mPrintElement()
    {
        cout << StackTemplate.top() << endl;
    }

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

#endif // CSTACKTEMPLATE_H

/* cstacktemplate.h */
/********** END_OF_FILE **********/
