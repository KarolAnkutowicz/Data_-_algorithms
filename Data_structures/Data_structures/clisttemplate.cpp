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
}

/*
 * cListTemplate(typeLoop aSize)
 */
cListTemplate::cListTemplate(typeLoop aSize)
{

}

/*
 * cListTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cListTemplate::cListTemplate(typeLoop aSize, typeData aDrawingRange)
{

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
 * void mPrintFirstElement()
 */
void cListTemplate::mPrintFirstElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        cout << ListTemplate.front(); // jesli nie to wypisujemy pierwszy element
    else // jesli jest pusta
        cout << "    Lista jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintLastElement()
 */
void cListTemplate::mPrintLastElement()
{
    if (!ListTemplate.empty()) // sprawdzamy czy lista nie jest pusta
        cout << ListTemplate.back(); // jesli nie jest to wypisujemy ostatni element
    else // jesli jest pusta
        cout << "    Lista jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cListTemplate::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* clisttemplate.cpp */
/********** END_OF_FILE **********/
