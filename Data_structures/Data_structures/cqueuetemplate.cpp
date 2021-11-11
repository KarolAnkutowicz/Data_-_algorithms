/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuetemplate.cpp
 */

#include "cqueuetemplate.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cQueueTemplate()
 */
cQueueTemplate::cQueueTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cQueueTemplate()
 */
cQueueTemplate::cQueueTemplate(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElement(0); // dodanie nowego elementu
}

/*
 * cQueueTemplate()
 */
cQueueTemplate::cQueueTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
typeData cQueueTemplate::getFirstElement()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
        return QueueTemplate.front(); // jesli nie to zwracamy pierwszy element
    else // przypadek w ktorym kolejka jest pusta
        return NULL; // nie mamy co zwrocic
}

/*
 * typeData getLastElement()
 */
typeData cQueueTemplate::getLastElement()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
        return QueueTemplate.back(); // jesli nie to zwracamy ostatni element
    else // przypadek w ktorym kolejka jest pusta
        return NULL; // nie mamy co zwrocic
}



/*
 * bool mRemoveElement()
 */
bool cQueueTemplate::mRemoveElement()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
    {
        QueueTemplate.pop(); // usuwamy ostatni element
        return true; // zwracamy wartosc logiczna
    }
    else // przypadek w ktorym kolejka jest pusta
        return false; // zwracamy wartosc logiczna
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cQueueTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintFirstElement()
 */
void cQueueTemplate::mPrintFirstElement()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
        cout << QueueTemplate.front() << endl; // wypisujemy pierwszy element
    else // przypadek w ktorym kolejka jest pusta
        cout << "    Kolejka jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintLastElement()
 */
void cQueueTemplate::mPrintLastElement()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
        cout << QueueTemplate.back() << endl; // wypisujemy pierwszy element
    else // przypadek w ktorym kolejka jest pusta
        cout << "    Kolejka jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cQueueTemplate::mPrintAllElements()
{
    if (!QueueTemplate.empty()) // sprawdzamy czy kolejka nie jest pusta
    {
        while (!QueueTemplate.empty()) // dopoki kolejka nie jest pusta
        {
            mPrintLastElement(); // wypisujemy ostatni element
            mRemoveElement(); // usuwamy ostatni element dajac dostep do wczesniejszego
        }
    }
    else // przypadek w ktorym kolejka jest pusta
        cout << "    Kolejka jest pusta!" << endl; // wypisujemy komunikat o tej sytuacji
}

/********** PUBLIC: END **********/

/* cqueuetemplate.cpp */
/********** END_OF_FILE **********/
