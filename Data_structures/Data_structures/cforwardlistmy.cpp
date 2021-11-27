/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlistmy.cpp
 */

#include "cforwardlistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cForwardListMy() - konstruktor wywolywany bez argumentow.
 */
cForwardListMy::cForwardListMy()
{
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cForwardListMy(typeLoop aSize) - konstruktor wywolywany
 */
cForwardListMy::cForwardListMy(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElementToEnd(0); // dodanie nowego elementu
}

/*
 * cForwardListMy(typeLoop aSize, typeData aDrawingRange) -
 */
cForwardListMy::cForwardListMy(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement() - metoda zwracajaca
 */
typeData cForwardListMy::getFirstElement()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vFirst->getValue(); // jesli nie jest to zwracamy wartosc pierwszego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac
}

/*
 * typeData getLastElement() - metoda zwracajaca
 */
typeData cForwardListMy::getLastElement()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vLast->getValue(); // jesli nie jest to zwracamy wartosc ostatniego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac
}

/*
 * bool getListIsEmpty() - metoda zawracajaca
 */
bool cForwardListMy::getListIsEmpty()
{
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie zawiera zadnego elementu
        return true; // jesli tak to zwracamy informacje o tym
    else // jesli na liscie jest jakikolwiek element
        return false; // zwracamy informacje ze lista jednokierunkowa nie jest pusta
}



/*
 * void mAddElementToBegin(typeData aElement) - metoda
 */
void cForwardListMy::mAddElementToBegin(typeData aElement)
{
    cElementForwardListAndQueue Element(aElement); // utworzenie nowego elementu ze wskazana wartoscia
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
    {
        vFirst = &Element; // ustanowienie wskaznika na pierwszy (jedyny) element
        vLast = &Element; // ustanowienie wskaznika na ostatni (jedyny) element
    }
    else // lista nie jest pusta
    {
        Element.vNext = vFirst; // nowy element wskazuje jako nastepnik dotychczasowy pierwszy element
        vFirst = &Element; // nowy element staje sie pierwszym elementem
    }
    vSize++; // zwiekszenie liczby elementow na liscie jednokierunkowej
}

/*
 * void mAddElementToEnd(typeData aElement) - metoda
 */
void cForwardListMy::mAddElementToEnd(typeData aElement)
{
    cElementForwardListAndQueue Element(aElement); // utworzenie nowego elementu ze wskazana wartoscia
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
    {
        vFirst = &Element; // ustanowienie wskaznika na pierwszy (jedyny) element
        vLast = &Element; // ustanowienie wskaznika na ostatni (jedyny) element
    }
    else // lista nie jest pusta
    {
        vLast->vNext = &Element; // ostatni element wskazuje jako nastepnik nowy element
        vLast = &Element; // nowy element staje sie ostatnim elementem
    }
    vSize++; // zwiekszenie liczby elementow na liscie jednokierunkowej
}

/*
 * bool mRemoveElementFromBegin() - metoda usuwajaca
 */
bool cForwardListMy::mRemoveElementFromBegin()
{
    if (!vSize) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else // jesli na liscie jest cokolwiek
    {
        if (vSize == 1) // sprawdzamy czy mamy tylko jeden element na liscie
        {
            vFirst = NULL; // jesli tak to lista jednokierunkowa nie ma juz zadnego elementu na poczatku...
            vLast = NULL; // ...ani na koncu
        }
        else // na liscie jest wiecej niz jeden element
        {
            cElementForwardListAndQueue ElementAux(0); // utworzenie elementu pomocniczego
            ElementAux.vNext = vFirst->vNext; // element pomocniczy wskazuje jako nastepnik ten sam element co pierwszy
            vFirst = ElementAux.vNext; // pierwszym elementem zostaje nastepnik elementu pomocniczego
            ElementAux.vNext = NULL; // element pomocniczy juz nie jest nam potrzebny
        }
        vSize--; // zmniejszenie liczby elementow na liscie jednokierunkowej
        return true; // zwrocenie informacji o powodzeniu usuniecia elementu
    }
}

/*
 * bool mRemoveElementFromEnd() - metoda usuwajaca
 */
bool cForwardListMy::mRemoveElementFromEnd()
{
    if (!vSize) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else // jesli na liscie jest cokolwiek
    {
        if (vSize == 1) // sprawdzamy czy mamy tylko jeden elemeny na liscie
        {
            vFirst = NULL; // jesli tak to lista jednokierunkowa nie ma juz zadnego elementu na poczatku...
            vLast = NULL; // ...anie na koncu
        }
        else // na liscie jest wiecej niz jeden element
        {
            cElementForwardListAndQueue ElementAux(0); // utworzenie elementu pomocniczego
            ElementAux.vNext = vFirst->vNext; // element pomocniczy wskazuje jako nastepnik ten sam element co pierwszy
            for (typeLoop i = 0; i < (vSize - 1); i++) // przejscie po wszystkich elementach az do przedostatniego
                ElementAux.vNext = &ElementAux; // przechodzimy przez kolejne elementy az dojdziemy do tego ktory wskazuje na ostatni
            vLast = ElementAux.vNext; // ostatnim elementem zostaje ten, ktory wskazywal na ostatni element
            vLast->vNext = NULL; // nowy ostatni element nie ma juz nastepnika
            ElementAux.vNext = NULL; // element pomocniczy juz nie jest nam potrzebny
        }
        vSize--; // zmniejszenie liczby elementow na liscie jednokierunkowej
        return true; // zwrocenie informacji o powodzeniu usuniecia elementu
    }
}

/*
 * void mDrawElements(typeLoop aSize) - metoda losujaca
 */
void cForwardListMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintLastElement()
{

}

/*
 * void mPrintAllElements() - metoda wyswietlajaca
 */
void cForwardListMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* cforwardlistmy.cpp */
/********** END_OF_FILE **********/
