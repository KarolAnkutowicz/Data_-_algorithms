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
    vListMyBegin = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na poczatek kolejki
    vListMyEnd = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na koniec kolejki
    vListMyBegin->vPrevious = NULL; // nie istnieje nic przed poczatkiem listy
    vListMyBegin->vNext = vListMyEnd; // lista ma tylko poczatek i koniec
    vListMyEnd->vPrevious = vListMyBegin; // lista ma tylko poczatek i koniec
    vListMyEnd->vNext = NULL; // nie istnieje nic poza koncem listy
    vSize = 0; // zerowy rozmiar listy
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{
    vListMyBegin = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na poczatek kolejki
    vListMyEnd = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na koniec kolejki
    vListMyBegin->vPrevious = NULL; // nie istnieje nic przed poczatkiem listy
    vListMyBegin->vNext = vListMyEnd; // lista ma tylko poczatek i koniec
    vListMyEnd->vPrevious = vListMyBegin; // lista ma tylko poczatek i koniec
    vListMyEnd->vNext = NULL; // nie istnieje nic poza koncem listy
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
    vListMyBegin = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na poczatek kolejki
    vListMyEnd = new cElementListAndDeque(NULL); // inicjalizacja wskaznika na koniec kolejki
    vListMyBegin->vPrevious = NULL; // nie istnieje nic przed poczatkiem listy
    vListMyBegin->vNext = vListMyEnd; // lista ma tylko poczatek i koniec
    vListMyEnd->vPrevious = vListMyBegin; // lista ma tylko poczatek i koniec
    vListMyEnd->vNext = NULL; // nie istnieje nic poza koncem listy
    vSize = 0; // zerowy rozmiar listy
    vDrawingRange = aDrawingRange; // przypisanie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie dodawania losowych elementow
}

/*
 * ~cListMy()
 */
cListMy::~cListMy()
{
    delete vListMyBegin; // zwalnianie wskaznika na poczatek listy
    delete vListMyEnd; // zwalnianie wskaznika na koniec listy
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
    cElementListAndDeque *Elem; // tworzymy nowy wskaznik
    Elem = new cElementListAndDeque(aElement); // wskazujemy na nowoutworzony obiekt
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
    {
        vListMyBegin->vNext = Elem; // ustawiamy wskaznik na poczatkowy (jedyny) element
        vListMyEnd->vPrevious = Elem; // ustawiamy wskaznik na koncowy (jedyny) element
    }
    else
    {
        Elem->vNext = vListMyBegin->vNext; // nastepnikiem nowego elementu jest dotychczasowy pierwszy element
        (vListMyBegin->vNext)->vPrevious = Elem; // dotychczasowy pierwszy element wskazuje na nowy element jako poprzednik
        vListMyBegin->vNext = Elem; // wskazujemy na nowy element jako pierwszy
    }
    vSize++; // zwiekszamy rozmiar listy
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{
    cElementListAndDeque *Elem; // tworzymy nowy wskaznik
    Elem = new cElementListAndDeque(aElement); // wskazujemy na nowoutworzony obiekt
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
    {
        vListMyBegin->vNext = Elem; // ustawiamy wskaznik na poczatkowy (jedyny) element
        vListMyEnd->vPrevious = Elem; // ustawiamy wskaznik na koncowy (jedyny) element
    }
    else // jesli lista nie jest pusta
    {
        Elem->vPrevious = vListMyEnd->vPrevious; // poprzednikiem nowego elementu jest dotychczasowy ostatni element
        (vListMyEnd->vPrevious)->vNext = Elem; // dotychczasowy ostatni element wskazuje na nowy element jako nastepnik
        vListMyEnd->vPrevious = Elem; // wskazujemy na nowy element listy jako ostatni
    }
    vSize++; // zwiekszamy rozmiar listy
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cListMy::mRemoveElementFromBegin()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else
    {
        if (vSize == 1) // jesli na liscie byl tylko jeden element
        {
            vListMyBegin->vNext = NULL; // poczatek listy wskazuje na NULL
            vListMyEnd->vPrevious = NULL; // koniec listy wskazuje na NULL
        }
        else
        {
            vListMyBegin->vNext = (vListMyBegin->vNext)->vNext; // poczatek listy wskazuje jako nastepnik nastepnika dotychczasowego pierwszego elementu
            (vListMyBegin->vNext)->vPrevious = vListMyBegin; // nowy pierwszy element wskazuje jako poprzednik na poczatek listy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // usuniecie elementu powiodlo sie
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListMy::mRemoveElementFromEnd()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else
    {
        if (vSize == 1) // jesli na liscie byl tylko jeden element
        {
            vListMyBegin->vNext = NULL; // poczatek listy wskazuje na NULL
            vListMyEnd->vPrevious = NULL; // koniec listy wskazuje na NULL
        }
        else
        {
            vListMyEnd->vPrevious = (vListMyEnd->vPrevious)->vPrevious; // koniec listy wskazuje jako poprzednik poprzednika dotychczasowego ostatniego elementu
            (vListMyEnd->vPrevious)->vNext = vListMyEnd; // nowy ostatni element wskazuje jako nastepnik koniec listy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // usuniecie elementu powiodlo sie
    }
}

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
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
    else // jesli lista nie jest pusta
        cout << vListMyBegin->vNext->getValue() << endl; // wypisujemy wartosc pierwszego elementu
}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
    else // jesli lista nie jest pusta
        cout << vListMyEnd->vPrevious->getValue() << endl; // wypisujemy wartosc ostatniego elementu
}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{
    if (getListSize() == 0) // sprawdzamy czy lista jest pusta
        cout << "Lista jest pusta!" << endl; // jesli tak to wypisujemy odpowiedni komunikat
    else
    {
        cElementListAndDeque *ElemAux; // deklarujemy wskaznik pomocniczy
        ElemAux = new cElementListAndDeque(NULL); // wskazujemy na nowoutworzony obiekt
        ElemAux = vListMyBegin; // przypisujemy wskaznik do poczatku listy
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach listy
        {
            ElemAux = ElemAux->vNext; // wskaznik przypisujemy do nastepnika biezacego elementu
            cout << ElemAux->getValue() << endl; // wypisanie wartosci biezacego elementu
        }
    }
}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
