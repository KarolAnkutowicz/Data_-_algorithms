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
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
    for (typeLoop i = 0; i < aSize; i++) // przechodzimy przez wszystkie elementy
        mAddElementToEnd(0); // dodajemy nowy element na koniec listy
}

/*
 * cListMy(typeLoop aSize, typeData aDrawingRange)
 */
cListMy::cListMy(typeLoop aSize, typeData aDrawingRange)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vDrawingRange = aDrawingRange; // przypisanie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie dodawania losowych elementow
}



/*
 * typeData getFirstElement()
 */
typeData cListMy::getFirstElement()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyBegin->vNext->getValue(); // zwracamy wartosc pierwszego elementu
}

/*
 * typeData getLastElement()
 */
typeData cListMy::getLastElement()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyEnd->vPrevious->getValue(); // zwracamy wartosc ostatniego elementu
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cListMy::mAddElementToBegin(typeData aElement)
{
    /*cElementMy Elem(aElement); // utworzenie nowego elementu
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
    {
        Elem.setNext(NULL); // nowy element poki co nie ma nastepnika
        vListMyEnd = &Elem; // wskaznik na element koncowy ustawiamy na dodawany element
    }
    else // jesli na liscie jest juz co najmniej jeden element
        Elem.setNext(vListMyBegin); // ustanawiamy nastepnik nowego elementu jako aktualnie pierwszy element
    vListMyBegin = &Elem; // ustanawiamy poczatek listy na nowododany element
    vSize++; // zwiekszamy rozmiar listy*/
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{
    /*cElementMy Elem(aElement); // utworzenie nowego elementu
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        vListMyBegin = &Elem; // jesli jest pusta to wskaznik na element poczatkowy ustanawiamy na dodawany element
    else // jesli na liscie jest juz co najmniej jeden element
    {
        vListMyEnd->setNext(&Elem); // ustanawiamy nowy element jako nastepnik aktualnie ostatniego elementu
        Elem.setNext(NULL); // nowy element aktualnie wskazuje na NULL
    }
    vListMyEnd = &Elem; // ustanawiamy koniec listy na nowododany element
    vSize++; // zwiekszamy rozmiar listy*/
    //cout << "Rozmiar listy: " << getListSize() << endl;
    //cout << "Nowy element: " << Elem.getValue() << endl;
    //cout << "Aktualnie pierwszy: " << vListMyBegin->getValue() << endl;
    //cout << "Aktualnie ostatni: " << vListMyEnd->getValue() << endl << endl;
}

/*
 * bool mRemoveElementFromBegin()
 */
/*bool cListMy::mRemoveElementFromBegin()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else // jesli lista nie jest pusta
    {
        if (vSize == 1) // jesli jest na niej jeden element
        {
            vListMyBegin->~cElementMy(); // likwidujemy pierwszy element listy
            vListMyBegin = NULL; // poczatek listy ustanawiamy na NULL
            vListMyEnd = NULL; // koniec listy ustanawiamy na NULL
        }
        else // jesli jest na niej wiecej niz jeden element
        {
            cElementMy Elem;// tworzymy element pomocniczy
            Elem.setNext(vListMyBegin->getNext()); // nastepnik elementu pomocniczego jest nastepnikiem elementu z poczatku listy
            vListMyBegin->~cElementMy(); // usuwamy element z poczatku listy
            vListMyBegin = Elem.getNext(); // ustanawiamy poczatek listy jako nastepnik elementu pomocniczego
            Elem.~cElementMy(); // usuwamy element pomocniczy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // zwrasamy informacje, ze element zostal usuniety
    }
}*/

/*
 * bool mRemoveElementFromEnd()
 */
/*bool cListMy::mRemoveElementFromEnd()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else // jesli lista nie jest pusta
    {
        if (vSize == 1) // jesli jest na niej jeden element
        {
            vListMyBegin->~cElementMy(); // likwidujemy pierwszy element listy
            vListMyBegin = NULL; // poczatek listy ustanawiamy na NULL
            vListMyEnd =  NULL; // koniec listy ustanawiamy na NULL
        }
        else // jesli jest na niej wiecej niz jeden element
        {
            cElementMy *Elem; // tworzymy element pomocniczy
            Elem = vListMyBegin; // przypisujemy pomocniczy element jako pierwszy element
            for (typeLoop i = 0; i < vSize; i++)// przechodzimy przez wszystkie elementy
            {
                if ((Elem->getNext()) == vListMyEnd)// sprawdzamy czy analizowany element wskazuje jako nastepnik na ostatni element
                {
                    Elem->setNext(NULL); // jesli tak to zmieniamy jego wskazanie na nastepnik jako NULL
                    vListMyEnd->~cElementMy(); // usuwamy aktualnie ostatni element
                    vListMyEnd = Elem; // ustanawiamy nowy ostatni element jako biezacy
                }
                else// jesli tak nie jest
                    Elem = Elem->getNext(); // wowczas jako element pomocniczy wskazujemy nastepnik biezacego elementu
            }
            Elem->~cElementMy(); // niszczymy element pomocniczy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // zwracamy informacje, ze element zostal usuniety
    }
}*/

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy rozmiar jest niezerowy
    {
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
    /*if (getListSize() == 0) // sprawdzenie czy lista nie jest pusta
        cout << vListMyBegin->getValue() << endl; // wypisanie wartosci pierwszego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta 2!" << endl; // wypisujemy odpowiedni komunikat*/
}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{
    /*if (getListSize() == 0) // sprawdzenie czy lista nie jest pusta
        cout << vListMyEnd->getValue() << endl; // wypisanie wartosci ostatniego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat*/
}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{
    /*if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        cout << "Lista jest pusta!" << endl; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli lista nie jest pusta
    {
        cElementMy *Elem; // tworzymy element pomocniczy
        Elem = vListMyBegin; // przypisujemy element pomocniczy rowny wartosci pierwszego elementu listy
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
        {
            cout << Elem->getValue() << endl; // wypisujemy wartosc elementu
            Elem = Elem->getNext(); // przypisujemy nastepnik do elementu pomocniczego
        }
    }*/
}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
