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
    vFirst = new cElementForwardListAndQueue(NULL); // inicjalizacja wskaznika na poczatek listy
    vFirst->vNext = NULL; // nie istnieje nastepny element
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cForwardListMy(typeLoop aSize)
 */
cForwardListMy::cForwardListMy(typeLoop aSize)
{
    vFirst = new cElementForwardListAndQueue(NULL); // inicjalizacja wskaznika na poczatek listy
    vFirst->vNext = NULL; // nie istnieje nastepny element
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(0); // dodanie nowego elementu
}

/*
 * cForwardListMy(typeLoop aSize, typeData aDrawingRange)
 */
cForwardListMy::cForwardListMy(typeLoop aSize, typeData aDrawingRange)
{
    vFirst = new cElementForwardListAndQueue(NULL); // inicjalizacja wskaznika na poczatek listy
    vFirst->vNext = NULL; // nie istnieje nastepny element
    vSize = 0; // ustanowienie rozmiaru listy jednokierunkowej
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cForwardListMy().
 */
cForwardListMy::~cForwardListMy()
{
    delete vFirst; // zwalnianie wskaznika na poczatek listy
}



/*
 * typeData getFirstElement()
 */
 typeData cForwardListMy::getFirstElement()
 {
     if (getListIsEmpty() == true) // sprawdzenie czy lista jednokierunkowa jest pusta
         return NULL; // ...wowczas nie mamy co zwracac
     else // jesli na liscie jednokierunkowej jest cokolwiek
         return vFirst->getValue(); // wartosc pierwszego elementu
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
 * void mAddElement(typeData aElement)
 */
void cForwardListMy::mAddElement(typeData aElement)
{
    cElementForwardListAndQueue *Elem; // tworzymy nowy wskaznik
    Elem = new cElementForwardListAndQueue(aElement); // wskazujemy na nowoutworzony obiekt
    if (getListIsEmpty() == true) // sprawdzenie czy lista jest pusta
        vFirst = Elem; // jesli tak to nowy element jest jedynym
    else // jesli na liscie juz cos jest
    {
        Elem->vNext = vFirst; // nowy element wskazuje na nastepnik dotychczasowy pierwszy element
        vFirst = Elem; // poczatek listy wskazuje na nowy element
    }
    vSize++; // zwiekszamy rozmiar listy
    mPrintAllElements();
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cForwardListMy::mRemoveElement()
{
    if (getListIsEmpty() == true) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else // jesli na liscie cos jest
    {
        if (vSize == 1) // jesli na liscie jest tylko jeden element
            vFirst = NULL; // na liscie nie ma juz zadnego elementu
        else // jesli na liscie jest wiecej elementow
            vFirst = vFirst->vNext; // pierwszym elementem zostaje ten na ktory dotychczasowy pierwszy element wskazywal
        vSize--; // zmniejszamy rozmiar listy
        return true; // zwracamy informacje o powodzeniu usuniecia elementu
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cForwardListMy::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu
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
        cElementForwardListAndQueue* Elem;
        Elem = new cElementForwardListAndQueue(NULL); // tworzymy element pomocniczy
        Elem = vFirst; // jako nastepnik element pomoczniczego ustanawiamy pierwszy element listy jednokierunkowej
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
        {
            Elem = Elem->vNext; // przechodzimy przez kolejne elementy az dojdziemy do tego ktory wskazuje na ostatni
            std::cout << Elem->getValue() << " "; // wypisanie wartosci elementu
        }
        std::cout << "\n"; // przejscie do nowej linii po wypisaniu zawartosci listy jednokierunkowej
    }
}

/********** PUBLIC: END **********/

/* cforwardlistmy.cpp */
/********** END_OF_FILE **********/
