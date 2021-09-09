/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstacktemplate.cpp
 */

#include "cstacktemplate.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cStackTemplate()
 */
cStackTemplate::cStackTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cStackTemplate(typeLoop aSize)
 */
cStackTemplate::cStackTemplate(typeLoop aSize)
{
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(0); // dodanie nowego elementu
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cStackTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cStackTemplate::cStackTemplate(typeLoop aSize, typeData aDrawingRange)
{
    mDrawElements(aSize); // wywolanie metody losujacej elementy
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
}



/*
 * typeData getElement()
 */
typeData cStackTemplate::getElement()
{
    if (!StackTemplate.empty()) // sprawdzamy czy stos nie jest pusty
        return StackTemplate.top(); // zwracamy element ze szczytu
    else // jesli stos jest pusty
        return NULL; // nie mamy nic do zwrocenia
}



/*
 * bool mRemoveElement()
 */
bool cStackTemplate::mRemoveElement()
{
    if (!StackTemplate.empty()) // sprawdzamy czy stos nie jest pusty
    {
        StackTemplate.pop(); // usuwamy element
        return true; // zwracamy wartosc logiczna
    }
    else // jesli stos jest pusty
        return false; // zwracamy wartosc logiczna
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cStackTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementiw
        mAddElement(rand() % vDrawingRange); // dodanie nowego wylosowanego elementu
}



/*
 * void mPrintElement() - metoda wypisujaca element
 * ze szczytu stosu (o ile stos nie jest pusty!).
 * PRE:
 * - brak;
 * POST:
 * - brak.
 */
void cStackTemplate::mPrintElement()
{
    if (!StackTemplate.empty()) // sprawdzamy czy stos nie jest pusty
        cout << StackTemplate.top() << endl; //  jesli nie ejst to wypisujemy element ze szczytu
    else //  jesli jest pusty
        cout << "    Stos jest pusty!" << endl; // wyswietlamy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cStackTemplate::mPrintAllElements()
{
    if (StackTemplate.empty()) // sprawdzamy czy stos jest pusty
        cout << "    Stos jest pusty!" << endl; // jesli tak to wypisujemy komunikat o tej sytuacji
    else
    {
        cout << "    Zawartosc stosu:" << endl; // rozpoczynamy wypisywanie zawartosci stosu
        while (!StackTemplate.empty())
        {
            mPrintElement(); // wypisujemy element ze szczytu stosu
            mRemoveElement(); // usuwamy element dajac dostep do kolejnego
        }
    }
}

/********** PUBLIC: END **********/

/* cstacktemplate.cpp */
/********** END_OF_FILE **********/
