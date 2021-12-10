/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlistmy.cpp
 */

#include "cforwardlistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cForwardListMy()
 */
cForwardListMy::cForwardListMy()
{
/*    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow*/
}

/*
 * cForwardListMy(typeLoop aSize)
 */
cForwardListMy::cForwardListMy(typeLoop aSize)
{
/*    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElementToEnd(0); // dodanie nowego elementu*/
}

/*
 * cForwardListMy(typeLoop aSize, typeData aDrawingRange)
 */
cForwardListMy::cForwardListMy(typeLoop aSize, typeData aDrawingRange)
{
/*    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy*/
}



/*
 * typeData getFirstElement()
 */
typeData cForwardListMy::getFirstElement()
{
/*    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vFirst->getValue(); // jesli nie jest to zwracamy wartosc pierwszego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac*/
}

/*
 * typeData getLastElement()
 */
typeData cForwardListMy::getLastElement()
{
/*    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        return vLast->getValue(); // jesli nie jest to zwracamy wartosc ostatniego elementu
    else // jesli lista jednokierunkowa kest pusta...
        return NULL; // ...wowczas nie mamy co zwracac*/
}

/*
 * bool getListIsEmpty()
 */
bool cForwardListMy::getListIsEmpty()
{
/*    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie zawiera zadnego elementu
        return true; // jesli tak to zwracamy informacje o tym
    else // jesli na liscie jest jakikolwiek element
        return false; // zwracamy informacje ze lista jednokierunkowa nie jest pusta*/
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cForwardListMy::mAddElementToBegin(typeData aElement)
{
    /*cElementForwardListAndQueue Element(aElement); // utworzenie nowego elementu ze wskazana wartoscia
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
    vSize++; // zwiekszenie liczby elementow na liscie jednokierunkowej*/
/*    cElementForwardListAndQueue Element(aElement);
    cElementForwardListAndQueue *El = &Element;
    El->vNext = vFirst;
    vFirst = El;
    if (!vLast)
        vLast = vFirst;
    vSize++;*/
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cForwardListMy::mAddElementToEnd(typeData aElement)
{
/*    cElementForwardListAndQueue Element(aElement); // utworzenie nowego elementu ze wskazana wartoscia
    cElementForwardListAndQueue *El = &Element;
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        vFirst = El; // ustanowienie wskaznika na pierwszy (jedyny) element
    else // lista nie jest pusta
        vLast->vNext = El; // ostatni element wskazuje jako nastepnik nowy element
    vLast = El; // nowy element staje sie ostatnim elementem
    vSize++; // zwiekszenie liczby elementow na liscie jednokierunkowej*/
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cForwardListMy::mRemoveElementFromBegin()
{
    /*if (!vSize) // sprawdzamy czy lista jest pusta
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
    }*/
/*    if (vFirst)
    {
        //cElementForwardListAndQueue Element(0);
        cElementForwardListAndQueue *El/* = &Element*/;
/*        El = vFirst;
        vFirst = vFirst->vNext;
        if (!vFirst)
            vLast = NULL;
        vSize--;
        return true;
    }
    else
        return false;*/
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cForwardListMy::mRemoveElementFromEnd()
{
    /*if (!vSize) // sprawdzamy czy lista jest pusta
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
    }*/
/*    if (vLast)
    {
        //cElementForwardListAndQueue Element(0);
        cElementForwardListAndQueue *El/* = &Element*/;
/*        El = vLast;
        if (El == vFirst)
            vFirst = vLast = NULL;
        else
        {
            vLast = vFirst;
            while (vLast->vNext != El)
                vLast = vLast->vNext;
            vLast->vNext = NULL;
        }
        vSize--;
        return true;
    }
    else
        return false;*/
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cForwardListMy::mDrawElements(typeLoop aSize)
{
/*    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElementToEnd(rand() % vDrawingRange); // dodanie nowego elementu*/
}



/*
 * void mPrintFirstElement()
 */
void cForwardListMy::mPrintFirstElement()
{
/*    if (!vSize) // sprawdzamy czy lista jest pusta
        cout << "    Lista jednokierunkowa jest pusta!" << endl; // jesli tak to nie mamy co wyswietlac
    else // jesli na liscie jest cokolwiek
        cout << vFirst->getValue() << endl; // wypisujemy wartosc pierwszego elementu*/
}

/*
 * void mPrintLastElement()
 */
void cForwardListMy::mPrintLastElement()
{
/*    if (!vSize) // sprawdzamy czy lista jest pusta
        cout << "    Lista jednokierunkowa jest pusta!" << endl; // jesli tak to nie mamy co wyswietlac
    else // jesli na liscie jest cokolwiek
        cout << vLast->getValue() << endl; // wypisujemy wartosc ostatniego elementu*/
}

/*
 * void mPrintAllElements()
 */
void cForwardListMy::mPrintAllElements()
{
    /*if (!vSize) // sprawdzamy czy lista jest pusta
        cout << "    Lista jednokierunkowa jest pusta!" << endl; // jesli tak to nie mamy co wyswietlac
    else // jesli na liscie jest cokolwiek
    {
        cElementForwardListAndQueue ElementAux(0); // tworzymy element pomocniczy
        ElementAux.vNext = vFirst; // jako nastepnik element pomoczniczego ustanawiamy pierwszy element listy jednokierunkowej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
        {
            ElementAux.vNext = &ElementAux; // przechodzimy przez kolejne elementy az dojdziemy do tego ktory wskazuje na ostatni
            cout << ElementAux.getValue() << endl; // wypisanie wartosci elementu
        }
    }*/
/*    cElementForwardListAndQueue *El;
    if (!vFirst)
        cout << "    Lista jednokierunkowa jest pusta!" << endl; // jesli tak to nie mamy co wyswietlac
    else
    {
        El = vFirst;
        while (El)
        {
            cout << El->getValue() << endl;
            El = El->vNext;
        }
    }*/
}

/********** PUBLIC: END **********/

/* cforwardlistmy.cpp */
/********** END_OF_FILE **********/
