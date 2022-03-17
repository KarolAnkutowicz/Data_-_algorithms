/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequetemplate.cpp
 */

#include "cdequetemplate.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cDequeTemplate()
 */
cDequeTemplate::cDequeTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cQueueTemplate(typeLoop aSize)
 */
cDequeTemplate::cDequeTemplate(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // przejscie przez wszystkie elementy
        mAddElementToEnd(0); // dodanie elementu na koniec kolejki dwukierunkowej
}

/*
 * cDequeTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cDequeTemplate::cDequeTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getFirstElement()
 */
typeData cDequeTemplate::getFirstElement()
{
    if (getDequeIsEmpty()) // sprawdzamy czy kolejka dwustronna jest pusta
        return NULL; // jesli tak to nie ma elementu, ktory mozemy zwrocic
    else // jesli lista nie jest pusta
        return DequeTemplate.front(); // zwracamy element z poczatku kolejki dwustronnej
}

/*
 * typeData getLastElement()
 */
typeData cDequeTemplate::getLastElement()
{
    if (getDequeIsEmpty()) // sprawdzamy czy kolejka dwustronna jest pusta
        return NULL; // jesli tak to nie ma elementu, ktory mozemy zwrocic
    else // jesli lista nie jest pusta
        return DequeTemplate.back(); // zwracamy element z konca kolejki dwustronnej
}



/*
 * bool mRemoveElementFromBegin()
 */
bool cDequeTemplate::mRemoveElementFromBegin()
{
    if (getDequeIsEmpty()) // sprawdzamy czy kolejka dwustronna jest pusta
        return false; // jesli tak to nie mamy mozliwosci cokolwiek usunac
    else // jesli lista nie jest pusta
    {
        DequeTemplate.pop_front(); // usuniecie elementu z poczatku kolejki dwustronnej
        return true; // zwracamy informacje o powodzeniu operacji
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cDequeTemplate::mRemoveElementFromEnd()
{
    if (getDequeIsEmpty()) // sprawdzamy czy kolejka dwustronna jest pusta
        return false; // jesli tak to nie mamy mozliwosci cokolwiek usunac
    else // jesli lista nie jest pusta
    {
        DequeTemplate.pop_back(); // usuniecie elementu z konca kolejki dwustronnej
        return true; // zwracamy informacje o powodzeniu operacji
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cDequeTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzanie liczby dodanych elementow
        mAddElementToEnd(rand() % vDrawingRange); // dodanie nowego elementu na koniec listy dwukierunkowej

}



/*
 * void mPrintFirstElement()
 */
void cDequeTemplate::mPrintFirstElement()
{
    if (!DequeTemplate.empty()) // sprawdzamy czy kolejka dwustronna nie jest pusta
        std::cout << DequeTemplate.front() << " "; // jesli nie to wypisujemy pierwszy element kolejki dwukierunkowej
    else // jesli kolejka dwustronna jest pusta
        std::cout << "    Kolejka dwustronna jest pusta!\n"; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintLastElement()
 */
void cDequeTemplate::mPrintLastElement()
{
    if (!DequeTemplate.empty()) // sprawdzamy czy kolejka dwustronna nie jest pusta
        std::cout << DequeTemplate.back() << " "; // jesli nie to wypisujemy ostatni element kolejki dwukierunkowej
    else // jesli kolejka dwustronna jest pusta
        std::cout << "    Kolejka dwustronna jest pusta!\n"; // wypisujemy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cDequeTemplate::mPrintAllElements()
{
    if (DequeTemplate.empty()) // sprawdzamy czy kolejka dwustronna jest pusta
        std::cout << "    Kolejka dwustronna jest pusta!\n"; // wypisujemy komunikat o tej sytuacji
    else // jesli kolejka dwustronna nie jest pusta
    {
        while (!DequeTemplate.empty()) // sprawdzamy czy kolejka dwustronna nie jest pusta
        {
            mPrintFirstElement(); // wypisujemy element z poczatku kolejki dwustronnej
            mRemoveElementFromBegin(); // usuwamy element dajac dostep do kolejnego
        }
        std::cout << "\n"; // przejscie do nowej linii
    }
}

/********** PUBLIC: END **********/

/* cdequetemplate.cpp */
/********** END_OF_FILE **********/
