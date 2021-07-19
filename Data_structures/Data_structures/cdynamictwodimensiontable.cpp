/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: main.cpp
 */

#include "cdynamictwodimensiontable.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDynamicTwoDimensionTable()
 */
cDynamicTwoDimensionTable::cDynamicTwoDimensionTable()
{
    vColumns = vRows = 1; // ustanowienie wymiarow tablicy
    tabElements = new typeData[vColumns * vRows]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustnowienie maksymalnej wartosci w tablicy
    tabElements[0] = vDrawingRange; // przypisanie wartosci jej jedynego elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
    mPrintTable(); // wypisanie zawartosci tablicy
    mPrintResults(); // wypisanie rezultatow
}

/*
 * cDynamicTwoDimensionTable(typeLoop aColumn)
 */
cDynamicTwoDimensionTable::cDynamicTwoDimensionTable(typeLoop aColumn)
{
    vColumns = aColumn; // ustanowienie liczby kolumn
    vRows = 1; // ustanowienie liczby wierszy
    tabElements = new typeData[vColumns * vRows]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustnowienie maksymalnej wartosci w tablicy
    for (typeLoop i = 0; i < vColumns; i++) // przejscie po wszystkich elemenentach
        tabElements[i] = 0; // przypisanie wartosci elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
    mPrintTable(); // wypisanie zawartosci tablicy
    mPrintResults(); // wypisanie rezultatow
}

/*
 * cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows)
 */
cDynamicTwoDimensionTable::cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows)
{
    vColumns = aColumn; // ustanowienie liczby kolumn
    vRows = aRows; // ustanowienie liczby wierszy
    tabElements = new typeData[vColumns * vRows]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustnowienie maksymalnej wartosci w tablicy
    for (typeLoop i = 0; i < vRows; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < vColumns; j++) // przejscie po wszystkich kolumnach
            tabElements[i * vColumns + j] = 0; // przypisanie wartosci elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
    mPrintTable(); // wypisanie zawartosci tablicy
    mPrintResults(); // wypisanie rezultatow
}

/*
 * cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows, typeData aDrawingRange)
 */
cDynamicTwoDimensionTable::cDynamicTwoDimensionTable(typeLoop aColumn, typeLoop aRows, typeData aDrawingRange)
{
    vColumns = aColumn; // ustanowienie liczby kolumn
    vRows = aRows; // ustanowienie liczby wierszy
    tabElements = new typeData[vColumns * vRows]; // utworzenie nowej tablicy
    vDrawingRange = aDrawingRange; // ustnowienie maksymalnej wartosci w tablicy
    mDrawElements(); // wylosowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
    mPrintTable(); // wypisanie zawartosci tablicy
    mPrintResults(); // wypisanie rezultatow
}

/*
 * ~cDynamicTwoDimensionTable()
 */
cDynamicTwoDimensionTable::~cDynamicTwoDimensionTable()
{
    delete []tabElements; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * void mDrawElements()
 */
void cDynamicTwoDimensionTable::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vRows; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < vColumns; j++) // przejscie po wszystkich kolumnach
            tabElements[i * vColumns + j] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
}

/*
 * void mFindMinElement()
 */
void cDynamicTwoDimensionTable::mFindMinElement()
{
    vMinElement = tabElements[0]; // ustanowienie poczatkowej wartosci najmniejszej
    for (typeLoop i = 0; i < vRows; i++) // przejscie po wszystkich wierszach
    {
        for (typeLoop j = 0; j < vColumns; j++) // przejscie po wszystkich kolumnach
        {
            if (tabElements[i] < vMinElement) // sprawdzenie czy kolejny element nie jest mniejszy
                vMinElement = tabElements[i * vColumns + j]; // jesli tak to ustanawiamy nowa wartosc najmniejsza
        }
    }
}

/*
 * void mFindMaxElement()
 */
void cDynamicTwoDimensionTable::mFindMaxElement()
{
    vMaxElement = tabElements[0]; // ustanowienie poczatkowej wartosci najwiekszej
    for (typeLoop i = 0; i < vRows; i++) // przejscie po wszystkich wierszach
    {
        for (typeLoop j = 0; j < vColumns; j++) // przejscie po wszystkich kolumnach
        {
            if (tabElements[i] > vMaxElement) // sprawdzenie czy kolejny element nie jest wiekszy
                vMaxElement = tabElements[i * vColumns + j]; // jesli tak to ustanawiamy nowa wartosc najwieksza
        }
    }
}

/*
 * void mPrintTable()
 */
void cDynamicTwoDimensionTable::mPrintTable()
{
    cout << "    Zawartosc tablicy: ";
    for (typeLoop i = 0; i < vRows; i++) // przejscie po wszystkich wierszach
    {
        for (typeLoop j = 0; j < vColumns; j++) // przejscie po wszystkich kolumnach
            cout << getElement(i, j) << " "; // wypisanie kolejnego elementu
        cout << endl; // przejscie do nowej linii
    }
}

/*
 * void mPrintResults()
 */
void cDynamicTwoDimensionTable::mPrintResults()
{
    cout << "    Liczba elementow tablicy: " << getColumns() * getRows() << endl // wypisanie liczby elementow
         << "    Wartosc najmniejsza: " << getMinElement() << endl // wypisanie najmniejszej wartosci
         << "    Wartosc najwieksza: " << getMaxElement() << endl; // wypisanie nawiekszej wartosci
}

/********** PUBLIC: END **********/

/* main.cpp */
/********** END_OF_FILE **********/
