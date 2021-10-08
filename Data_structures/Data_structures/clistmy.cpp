/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmy.cpp
 */

#include "clistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cListMy()
 */
cListMy::cListMy()
{
    *vListMyBegin = NULL; // brak pierwszego elementu
    *vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{
    //*vListMyBegin = NULL; // brak pierwszego elementu
    //*vListMyEnd = NULL; // brak ostatniego elementu
    //for (typeLoop i = 0; i < aSize; i++) // przechodzimy przez wszystkie elementy
    //    mAddElementToEnd(0); // dodajemy nowy element na koniec listy
    vSize = aSize; // aktualny rozmiar listy
    if (aSize == 0) // sprawdzamy czy podalismy rozmiar zerowy
        vIsEmpty = true; // jesli tak to lista jest pusta
    else // w przeciwnym przypadku
        vIsEmpty = false; // lista nie jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
}

/*
 * cListMy(typeLoop aSize, typeData aDrawingRange)
 */
cListMy::cListMy(typeLoop aSize, typeData aDrawingRange)
{
    //*vListMyBegin = NULL; // brak pierwszego elementu
    //*vListMyEnd = NULL; // brak ostatniego elementu
    //mDrawElements(aSize); // wywolanie dodawania losowych elementow
    vSize = aSize; // aktualny rozmiar listy
    if (aSize == 0) // sprawdzamy czy podalismy rozmiar zerowy
        vIsEmpty = true; // jesli tak to lista jest pusta
    else // w przeciwnym przypadku
        vIsEmpty = false; // lista nie jest pusta
    vDrawingRange = aDrawingRange; // zakres losowania elementow jest zerowy
}



/*
 * typeData getFirstElement()
 */
typeData cListMy::getFirstElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyBegin->getValue(); // zwracamy wartosc pierwszego elementu
}

/*
 * typeData getLastElement()
 */
typeData cListMy::getLastElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyEnd->getValue(); // zwracamy wartosc ostatniego elementu
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cListMy::mAddElementToBegin(typeData aElement)
{
    cListMyElement Elem(aElement); // utworzenie nowego elementu
    if (vIsEmpty == true)
    {
        vListMyBegin = &Elem; // przypisanie wskaznika do pierwszego (aktualnie jedynego) elementu
        vListMyEnd = &Elem; // przypisanie wskaznika do ostatniego (aktualnie jedynego) elementu
        vSize++; // zwiekszamy rozmiar listy
        vIsEmpty = false; // lista nie jest juz pusta
    }
    else
    {
        Elem.setNext(vListMyBegin); // nowy element wskazuje na element, ktory jeszcze przes chwila byl jako pierwszy
        vListMyBegin = &Elem; // ustanawiamy nowy pierwszy element
        vSize++; // zwiekszamy rozmiar listy
    }
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{
    cListMyElement Elem(aElement); // utworzenie nowego elementu
    if (vIsEmpty == true)
    {
        vListMyBegin = &Elem; // przypisanie wskaznika do pierwszego (aktualnie jedynego) elementu
        vListMyEnd = &Elem; // przypisanie wskaznika do ostatniego (aktualnie jedynego) elementu
        vSize++; // zwiekszamy rozmiar listy
        vIsEmpty = false; // lista nie jest juz pusta
    }
    else
    {
        Elem.setNext(vListMyEnd); // nowy element wskazuje na element, ktory jeszcze przed chwila byl jako ostatni
        vListMyEnd = &Elem; // ustanawiamy nowy ostatni element
        vSize++; // zwiekszamy rozmiar listy
    }
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cListMy::mRemoveElementFromBegin()
{
    if (vIsEmpty == true)
        return false;
    else
    {
        cListMyElement Elem; // tworzymy nowy, pomocniczy element
        Elem.setNext(vListMyBegin); // ustanawiamy wskaznik na jego kolejny element jako obecny pierwszy element
        vListMyBegin = (vListMyBegin->getNext()); // nowym pierwszym elementem listy bedzie element na ktory pierwotnie wskazywal pierwszy element
        (Elem.getNext())->~cListMyElement(); // destrukcja pierwotnego pierwszego elementu
        Elem.~cListMyElement(); // destrukcja pomocniczego elementu
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListMy::mRemoveElementFromEnd()
{
    /*if (vIsEmpty == true)
        return false;
    else
    {

    }*/
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy rozmiar jest niezerowy
    {
        vIsEmpty = false; // jesli tak to lista nie bedzie pusta
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
            mAddElementToEnd(rand() % vDrawingRange); // dodanie nowego elementu na koniec listy
    }
}



/*
 * void mPrintFirstElement()
 */
void cListMy::mPrintFirstElement()
{
    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
        cout << vListMyBegin->getValue() << " "; // wypisanie wartosci pierwszego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{
    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
        cout << vListMyEnd->getValue() << " "; // wypisanie wartosci ostatniego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
