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
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
    mPrintAllElements(); // wypisanie wszystkich elementow listy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
    for (typeLoop i = 0; i < aSize; i++) // przechodzimy przez wszystkie elementy
        mAddElementToEnd(0); // dodajemy nowy element na koniec listy
    mPrintAllElements(); // wypisanie wszystkich elementow listy
}

/*
 * cListMy(typeLoop aSize, typeData aDrawingRange)
 */
cListMy::cListMy(typeLoop aSize, typeData aDrawingRange)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true;
    vDrawingRange = aDrawingRange; // przypisanie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie dodawania losowych elementow
    mPrintAllElements(); // wypisanie wszystkich elementow listy
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
    //DODAWANIE ELEMENTU NA POCZATEK
    // sprawdzamy czy lista jest pusta
        // jesli jest pusta to wskaznik na element poczatkowy ustanawiamy na dodawany element
        // wskaznik na element koncowy rowniez ustawiamy na dodawany element
    // jesli na liscie jest juz co najmniej jeden element
        // ustanawiamy nastepnik nowego elementu jako aktualnie pierwszy element
        // ustanawiamy poczatek listy na nowododany element
    // zwiekszamy rozmiar listy
    // ustanawiamy ze lista nie jest pusta

    cListMyElement Elem(aElement); // utworzenie nowego elementu
    Elem.setNext(vListMyBegin); // nowy element wskazuje na element, ktory jeszcze przes chwila byl jako pierwszy
    vListMyBegin = &Elem; // ustanawiamy nowy pierwszy element
    vIsEmpty = false; // lista na pewno nie bedzie pusta
    vSize++; // zwiekszamy rozmiar listy
    if (getListSize() == 1) // sprawdzamy czy lista sklada sie tylko z jednego elementu
        vListMyEnd = &Elem; // wowczas pierwszy element jest rownoczesnie ostatnim
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{
    //DODAWANIE ELEMENTU NA KONIEC
    // sprawdzamy czy lista jest pusta
        // jesli jest pusta to wskaznik na element poczatkowy ustanawiamy na dodawany element
        // wskaznik na element koncowy rowniez ustawiamy na dodawany element
    // jesli na liscie jest juz co najmniej jeden element
        // ustanawiamy nowy element jako nastepnik aktualnie ostatniego elementu
        // nowy element aktualnie wskazuje na NULL
        // ustanawiamy koniec listy na nowododany element
    // zwiekszamy rozmiar listy
    // ustanawiamy ze lista nie jest pusta

    cListMyElement Elem(aElement); // utworzenie nowego elementu
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        vListMyBegin = &Elem; // jesli tak to ostatni element jest rownoczesnie pierwszym
    else // w przeciwnym przypadku
    {
        vListMyEnd->setNext(&Elem); // aktualnie ostatni element ma wskazywac na nowo dodawany
        Elem.setNext(NULL); // za nowo dodanym aktualnie nie ma zadnego elementu
    }
    vListMyEnd = &Elem; // ustanawiamy nowy ostatni element
    vIsEmpty = false; // lista na pewno nie jest juz pusta
    vSize++; // zwieksza sie rozmiar listy
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cListMy::mRemoveElementFromBegin()
{
    //USUWANIE ELEMENTU Z POCZATKU
    // sprawdzamy czy lista jest pusta
        // jesli tak to nie mamy co usuwac z listy
    // jesli lista nie jest pusta
        // jesli jest na niej jeden element
            // likwidujemy pierwszy element listy
            // poczatek listy ustanawiamy na NULL
            // koniec listy ustanawiamy na NULL
            // ustanawiamy ze lista jest pusta
        // jesli jest na niej wiecej niz jeden element
            // tworzymy element pomocniczy
            // nastepnik elementu pomocniczego jest nastepnikiem elementu z poczatku listy
            // usuwamy element z poczatku listy
            // ustanawiamy poczatek listy jako nastepnik elementu pomocniczego
            // usuwamy element pomocniczy
        // zmniejszamy rozmiar listy

    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie ma co usuwac
    else
    {
        if (vSize == 1) // sprawdzamy czy mamy tylko jeden element na liscie
        {
            vListMyEnd->~cListMyElement(); // usuwamy jedyny element
            vListMyBegin = NULL; // nie istnieje element poczatkowy
            vListMyEnd = NULL; // nie istnieje element koncowy
        }
        else
        {
            //
        }
    }



    /*if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie ma co usuwac
    else // jesli lista nie jest pusta
    {
        cListMyElement Elem; // tworzymy nowy, pomocniczy element
        Elem.setNext(vListMyBegin); // ustanawiamy wskaznik na jego kolejny element jako obecny pierwszy element
        vListMyBegin = (vListMyBegin->getNext()); // nowym pierwszym elementem listy bedzie element na ktory pierwotnie wskazywal pierwszy element
        (Elem.getNext())->~cListMyElement(); // destrukcja pierwotnego pierwszego elementu
        Elem.~cListMyElement(); // destrukcja pomocniczego elementu
    }*/
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListMy::mRemoveElementFromEnd()
{
    //USUWANIE ELEMENTU Z KONCA
    // sprawdzamy czy lista jest pusta
        // jesli tak to nie mamy co usuwac z listy
    // jesli lista nie jest pusta
        // jesli jest na niej jeden element
            // likwidujemy pierwszy element listy
            // poczatek listy ustanawiamy na NULL
            // koniec listy ustanawiamy na NULL
            // ustanawiamy ze lista jest pusta
        // jesli jest na niej wiecej niz jeden element
            // tworzymy element pomocniczy
            // przechodzimy przez wszystkie elementy
                // przypisujemy pomocniczy element jako pierwszy element
                // sprawdzamy czy analizowany element wskazuje jako nastepnik na ostatni element
                    // jesli tak to zmieniamy jego wskazanie na nastepnik jako NULL
                    // usuwamy aktualnie ostatni element
                    // ustanawiamy nowy ostatni element jako biezacy
                // jesli tak nie jest
                    // wowczas jako element pomocniczy wskazujemy nastepnik biezacego elementu
            // niszczymy element pomocniczy
        // zmniejszamy rozmiar listy

    /*if (vIsEmpty == true) //
        return false; //
    else //
    {
        cListMyElement Elem; //
        Elem = vListMyEnd;
    }*/
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy rozmiar jest niezerowy
    {
        //vIsEmpty = false; // jesli tak to lista nie bedzie pusta
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
        cout << vListMyBegin->getValue() << endl; // wypisanie wartosci pierwszego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta 2!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{
    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
        cout << vListMyEnd->getValue() << endl; // wypisanie wartosci ostatniego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{
    //WYPISANIE CALEJ LISTY
    // sprawdzamy czy lista jest pusta
        // jesli tak to wypisujemy odpowiedni komunikat
    // jesli lista nie jest pusta
        // tworzymy element pomocniczy
        // przypisujemy element pomocniczy rowny wartosci pierwszego elementu listy
        // przechodzimy przez wszystkie elementy
            // wypisujemy wartosc elementu
            // przypisujemy nastepnik do elementu pomocniczego

    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
    {
        cListMyElement *ElemAux; // utworzenie pomocniczego wskaznika do przechodzenia przez kolejne elementy listy
        ElemAux = vListMyBegin; // ustanowienie wskaznika na poczatek listy
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach listy
        {
            cout << ElemAux->getValue() << endl; // wypisanie zawartosci elementu
            ElemAux->setNext(ElemAux->getNext()); // przejscie do kolejnego elementu
        }
    }
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
