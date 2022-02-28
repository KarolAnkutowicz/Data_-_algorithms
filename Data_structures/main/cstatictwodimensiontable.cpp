/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstatictwodimensiontable.cpp
 */

#include "cstatictwodimensiontable.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cStaticOneDimensionTable()
 */
cStaticTwoDimensionTable::cStaticTwoDimensionTable()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(); // wywolanie metody losujacej wartosci elementow
    mFindMinElement(); // znalezienie wartosci najmniejszej
    mFindMaxElement(); // znalezienie wartosci najwiekszej
}

/*
 * cStaticOneDimensionTable(typeData aDrawingRange)
 */
cStaticTwoDimensionTable::cStaticTwoDimensionTable(typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(); // wywolanie metody losujacej wartosci elementow
    mFindMinElement(); // znalezienie wartosci najmniejszej
    mFindMaxElement(); // znalezienie wartosci najwiekszej
}



/*
 * void mDrawElements()
 */
void cStaticTwoDimensionTable::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich kolumnach
            tabElements[i][j] = (rand() % vDrawingRange); // zmiana wartosci wskazanego elementu
}

/*
 * void mFindMinElement()
 */
void cStaticTwoDimensionTable::mFindMinElement()
{
    vMinElement = tabElements[0][0]; // nadanie poczatkowej wartosci najmniejszej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich kolumnach
            if (tabElements[i][j] < vMinElement) // sprawdzenie czy nowy element jest mniejszy od aktualnego najmniejszego elementu
                vMinElement = tabElements[i][j]; // jezeli tak to ustanawiamy nowy element najmniejszy
}

/*
 * void mFindMaxElement()
 */
void cStaticTwoDimensionTable::mFindMaxElement()
{
    vMaxElement = tabElements[0][0]; // nadanie poczatkowej wartosci najwiekszej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich kolumnach
            if (tabElements[i][j] > vMaxElement) // sprawdzenie czy nowy element jest mniejszy od aktualnego najwiekszego elementu
                vMaxElement = tabElements[i][j]; // jezeli tak to ustanawiamy nowy element najwiekszy
}



/*
 * void mPrintTable()
 */
void cStaticTwoDimensionTable::mPrintTable()
{
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
    {
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich kolumnach
            mPrintElement(i, j); // wywolanie wypisania wskazanego elementu
        std::cout << std::endl; // przejscie do nowego wiersza
    }
}

/********** PUBLIC: END **********/

/* cstatictwodimensiontable.cpp */
/********** END_OF_FILE **********/
