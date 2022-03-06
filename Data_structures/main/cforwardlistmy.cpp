/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlistmy.cpp
 */

#include "cforwardlistmy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cForwardListMy()
 */
cForwardListMy::cForwardListMy()
{
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    vFirst = NULL; // ustanowienie wskaznika na pierwszy element na NULL;
}

/*
 * cForwardListMy(typeLoop aSize)
 */
cForwardListMy::cForwardListMy(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElementToBegin(0); // dodanie nowego elementu
}

/*
 * cForwardListMy(typeLoop aSize, typeData aDrawingRange)
 */
cForwardListMy::cForwardListMy(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
 typeData cForwardListMy::getFirstElement()
 {
     if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
         return vFirst->getValue(); // jesli nie jest to zwracamy wartosc pierwszego elementu
     else // jesli lista jednokierunkowa kest pusta...
         return NULL; // ...wowczas nie mamy co zwracac
 }

  /*
   * bool getListIsEmpty()
   */
   bool cForwardListMy::getListIsEmpty()
   {
       if (!vSize) // sprawdzenie czy lista jednokierunkowa nie zawiera zadnego elementu
           return true; // jesli tak to zwracamy informacje o tym
       else // jesli na liscie jest jakikolwiek element
           return false; // zwracamy informacje ze lista jednokierunkowa nie jest pusta
   }



   /*
    * void mAddElementToBegin(typeData aElement)
    */
void cForwardListMy::mAddElementToBegin(typeData aElement)
{
    cElementForwardListAndQueue Element(aElement); // utworzenie nowego elementu ze wskazana wartoscia
    if (!vSize) // sprawdzenie czy lista jednokierunkowa nie jest pusta
        vFirst = &Element; // ustanowienie wskaznika na pierwszy (jedyny) element
    else // lista nie jest pusta
    {
        Element.vNext = vFirst; // nowy element wskazuje jako nastepnik dotychczasowy pierwszy element
        vFirst = &Element; // nowy element staje sie pierwszym elementem
    }
    vSize++; // zwiekszenie liczby elementow na liscie jednokierunkowej
    cElementForwardListAndQueue *El = &Element;
    El->vNext = vFirst;
    vFirst = El;
    vSize++;
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cForwardListMy::mRemoveElementFromBegin()
{
    if (!vSize) // sprawdzamy czy lista jest pusta
         return false; // jesli tak to nie mamy co usuwac
    else // jesli na liscie jest cokolwiek
    {
        if (vSize == 1) // sprawdzamy czy mamy tylko jeden element na liscie
            vFirst = NULL; // jesli tak to lista jednokierunkowa nie ma juz zadnego elementu na poczatku...
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
    if (vFirst)
    {
        cElementForwardListAndQueue Element(0);
        cElementForwardListAndQueue *El = &Element;
        El = vFirst;
        vFirst = vFirst->vNext;
        if (!vFirst)
        vSize--;
        return true;
    }
    else
        return false;
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cForwardListMy::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElementToBegin(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintFirstElement()
 */
void cForwardListMy::mPrintFirstElement()
{
    if (!vSize) // sprawdzamy czy lista jest pusta
        std::cout << "    Lista jednokierunkowa jest pusta!" <<std::endl; // jesli tak to nie mamy co wyswietlac
    else // jesli na liscie jest cokolwiek
        std::cout << vFirst->getValue() << std::endl; // wypisujemy wartosc pierwszego elementu
}

/*
 * void mPrintAllElements()
 */
void cForwardListMy::mPrintAllElements()
{
    if (!vSize) // sprawdzamy czy lista jest pusta
        std::cout << "    Lista jednokierunkowa jest pusta!" << std::endl; // jesli tak to nie mamy co wyswietlac
    else // jesli na liscie jest cokolwiek
    {
        cElementForwardListAndQueue ElementAux(0); // tworzymy element pomocniczy
        ElementAux.vNext = vFirst; // jako nastepnik element pomoczniczego ustanawiamy pierwszy element listy jednokierunkowej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
        {
            ElementAux.vNext = &ElementAux; // przechodzimy przez kolejne elementy az dojdziemy do tego ktory wskazuje na ostatni
            std::cout << ElementAux.getValue() << std::endl; // wypisanie wartosci elementu
        }
    }
    //cElementForwardListAndQueue *El;
    /*if (!vFirst)
        std::cout << "    Lista jednokierunkowa jest pusta!" << std::endl; // jesli tak to nie mamy co wyswietlac
    else
    {
        El = vFirst;
        while (El)
        {
            std::cout << El->getValue() << std::endl;
            El = El->vNext;
        }
    }*/
}

/********** PUBLIC: END **********/

/* cforwardlistmy.cpp */
/********** END_OF_FILE **********/
