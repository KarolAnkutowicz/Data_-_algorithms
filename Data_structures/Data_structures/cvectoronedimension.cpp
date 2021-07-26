/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectoronedimension.cpp
 */

#include "cvectoronedimension.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cVectorOneDimension()
 */
cVectorOneDimension::cVectorOneDimension()
{
    mPrintAllElements(); // wypisanie zawartosci wektora
}

/*
 * cVectorOneDimension(typeLoop aSize)
 */
cVectorOneDimension::cVectorOneDimension(typeLoop aSize)
{
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(0); // dodanie nowego elementu
    mPrintAllElements(); // wypisanie zawartosci wektora
}

/*
 * cVectorOneDimension(typeLoop aSize, typeData aDrawingRange)
 */
cVectorOneDimension::cVectorOneDimension(typeLoop aSize, typeData aDrawingRange)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(rand() % aDrawingRange); // dodanie nowego elementu
    mPrintAllElements(); // wypisanie zawartosci wektora
}



/*
 * typeData getElement()
 */
typeData cVectorOneDimension::getElement()
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
        return VectorElements.back(); // jesli nie to zwracamy ostatni element
    else // wektor jest pusty
        return NULL; // jesli tak to nie mamy co zwracac
}

/*
 * typeData getElement(aIndex)
 */
typeData cVectorOneDimension::getElement(typeLoop aIndex)
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
    {
        if (aIndex >= VectorElements.size()) // sprawdzamy czy nie wychodzimy poza zakres wektora
            return NULL; // jesli tak to nie mamy co zwracac
        else // indeks miesci sie w zakresie wektora
            return VectorElements.operator [](aIndex); // zwracamy odpowiednia wartosc
    }
    else // jesli jest
        return NULL; // nie mamy co zwracac
}



/*
 * bool mRemoveElement()
 */
bool cVectorOneDimension::mRemoveElement()
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
    {
        VectorElements.pop_back(); // usuwamy ostatni element
        return true; // zwracamy informacje o tym, ze usunelismy element
    }
    else // wektor jest pusty
        return false; // zwracamy informacje o tym, ze nic nie usunelismy
}



/*
 * void mPrintElement()
 */
void cVectorOneDimension::mPrintElement()
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
        cout << VectorElements.back() << endl; // wypisujemy ostatni element
    else // wektor jest pusty
        cout << "    Wektor jest pusty!" << endl; // jesli wektor jest pusty to zwracamy komunikat o tej sytuacji
}

/*
 * void mPrintElement(typeLoop aIndex)
 */
void cVectorOneDimension::mPrintElement(typeLoop aIndex)
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
    {
        if (aIndex >= VectorElements.size()) // sprawdzamy czy nie wychodzimy poza zakres wektora
            cout << "    Brak elementu o wskazanym indeksie!" << endl;
        else // miescimy sie w zakresie wektora
            cout << VectorElements.operator [](aIndex); // wypisujemy wskazany element
    }
    else // wektor jest pusty
        cout << "    Wektor jest pusty!" << endl; // jesli wektor jest pusty to zwracamy komunikat o tej sytuacji
}

/*
 * void mPrintAllElements()
 */
void cVectorOneDimension::mPrintAllElements()
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
    {
        for (typeLoop i = 0; i < VectorElements.size(); i++) // przechodzimhy przez wszystkie elementy wektora
            cout << VectorElements.operator [](i); // wypisujemy wskazany element
    }
    else // wektor jest pusty
        cout << "    Wektor jest pusty!" << endl; // jesli wektor jest pusty to zwracamy komunikat o tej sytuacji
}

/********** PUBLIC: END **********/

/* cvectoronedimension.cpp */
/********** END_OF_FILE **********/
