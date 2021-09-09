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
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cVectorOneDimension(typeLoop aSize)
 */
cVectorOneDimension::cVectorOneDimension(typeLoop aSize)
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(0); // dodanie nowego elementu
}

/*
 * cVectorOneDimension(typeLoop aSize, typeData aDrawingRange)
 */
cVectorOneDimension::cVectorOneDimension(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
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
 * void mAddElement(typeData aElement)
 */
void cVectorOneDimension::mAddElement(typeData aElement)
{
    VectorElements.push_back(aElement);
    mFindMinElement(); // aktualizujemy minimum
    mFindMaxElement(); // aktualizujemy maximum
}

/*
 * bool mRemoveElement()
 */
bool cVectorOneDimension::mRemoveElement()
{
    if (!VectorElements.empty()) // sprawdzamy czy wektor nie jest pusty
    {
        VectorElements.pop_back(); // usuwamy ostatni element
        mFindMinElement(); // aktualizujemy minimum
        mFindMaxElement(); // aktualizujemy maximum
        return true; // zwracamy informacje o tym, ze usunelismy element
    }
    else // wektor jest pusty
        return false; // zwracamy informacje o tym, ze nic nie usunelismy
}



/*
 * void mDrawElements(typeLoop aSize)
 */
void cVectorOneDimension::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu

}

/*
 * void mFindMinElement()
 */
void cVectorOneDimension::mFindMinElement()
{
    if (VectorElements.empty() == true) // sprawdzenie czy tablica jest pusta
        vMinElement = NULL; // jesli tak to nie ma wartosci najwiekszej
    else // jesli tablica nie jest pusta
    {
        vMinElement = VectorElements.front(); // ustanawiamy wartosc poczatkowa minimum
        for (typeLoop i = 1; i < VectorElements.size(); i++) // przechodzimy po wszystkich kolejnych elementach
        {
            if (VectorElements[i] < vMinElement) // jesli nowy element jest mniejszy od biezacego minimum...
                vMinElement = VectorElements[i]; // ...to staje sie on nowym minimum
        }
    }
}

/*
 * void mFindMaxElement()
 */
void cVectorOneDimension::mFindMaxElement()
{
    if (VectorElements.empty() == true) // sprawdzenie czy tablica jest pusta
        vMaxElement = NULL; // jesli tak to nie ma wartosci najwiekszej
    else // jesli tablica nie jest pusta
    {
        vMaxElement = VectorElements.front(); // ustanawiamy wartosc poczatkowa maximum
        for (typeLoop i = 1; i < VectorElements.size(); i++) // przechodzimy po wszystkich kolejnych elementach
        {
            if (VectorElements[i] > vMaxElement) // jesli nowy element jest wiekszy od biezacego maximum...
                vMaxElement = VectorElements[i]; // ...to staje sie on nowym maximum
        }
    }
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
            cout << VectorElements.operator [](aIndex) << endl; // wypisujemy wskazany element
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
            cout << VectorElements.operator [](i) << " "; // wypisujemy wskazany element
        cout << endl; // przejscie do nowej linii
    }
    else // wektor jest pusty
        cout << "    Wektor jest pusty!" << endl; // jesli wektor jest pusty to zwracamy komunikat o tej sytuacji
}

/********** PUBLIC: END **********/

/* cvectoronedimension.cpp */
/********** END_OF_FILE **********/
