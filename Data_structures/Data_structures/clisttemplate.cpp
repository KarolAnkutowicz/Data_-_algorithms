/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clisttemplate.cpp
 */

#include "clisttemplate.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cListTemplate()
 */
cListTemplate::cListTemplate()
{
    vDrawingRange = 0; // usranowienie zakresu losowania elementow
}

/*
 * cListTemplate(typeLoop aSize)
 */
cListTemplate::cListTemplate(typeLoop aSize)
{
    vDrawingRange = 0; // usranowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElementToEnd(0); // dodanie nowego elementu
}

/*
 * cListTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cListTemplate::cListTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // usranowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
typeData cListTemplate::getFirstElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        return ListTemplate.front(); // jesli nie to zwracamy pierwszy element
    else // jesli jest pusta
        return NULL; // nie mamy czego zwrocic
}

/*
 * typeData getLastElement()
 */
typeData cListTemplate::getLastElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        return ListTemplate.back(); // jesli nie to zwracamy ostatni element
    else // jesli jest pusta
        return NULL; // nie mamy czego zwrocic
}



/*
 * bool mRemoveElementFromBegin()
 */
bool cListTemplate::mRemoveElementFromBegin()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
    {
        ListTemplate.pop_front(); // jesli nie to usuwamy pierwszy element
        return true; // zwracamy wartosc logiczna
    }
    else // jesli jest pusta
        return false; // zwracamy wartosc logiczna
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListTemplate::mRemoveElementFromEnd()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
    {
        ListTemplate.pop_back(); // jesli nie to usuwamy ostatni element
        return true; // zwracamy wartosc logiczna
    }
    else // jesli jest pusta
        return false; // zwracamy wartosc logiczna
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElementToEnd(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintFirstElement()
 */
void cListTemplate::mPrintFirstElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        cout << ListTemplate.front() << endl; // jesli nie to wypisujemy pierwszy element
    else // jesli jest pusta
        cout << "    Lista jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintLastElement()
 */
void cListTemplate::mPrintLastElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        cout << ListTemplate.back() << endl; // jesli nie jest to wypisujemy ostatni element
    else // jesli jest pusta
        cout << "    Lista jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cListTemplate::mPrintAllElements()
{
    if (ListTemplate.empty()) // sprawdzamy czy lista jest pusta
        cout << "    Lista jest pusta" << endl; // wypisujemy komunikat o tej sytuacji
    else // jesli lista nie jest pusta
    {
        while (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        {
            mPrintFirstElement(); // wypisujemy element z poczatku listy
            mRemoveElementFromBegin(); // usuwamy element dajac dostep do kolejnego
        }
    }
}

/********** PUBLIC: END **********/

/* clisttemplate.cpp */
/********** END_OF_FILE **********/
