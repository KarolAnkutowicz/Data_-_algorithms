/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: carraytwodimension.cpp
 */

#include "carraytwodimension.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cArrayTwoDimension()
 */
cArrayTwoDimension::cArrayTwoDimension()
{
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // losowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}

/*
 * cArrayTwoDimension(typeData aDrawingRange)
 */
cArrayTwoDimension::cArrayTwoDimension(typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // losowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}



/*
 * void mDrawElements()
 */
void cArrayTwoDimension::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich elementach w wierszu
            MyArray[i][j] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
}

/*
 * void mFindMinElement()
 */
void cArrayTwoDimension::mFindMinElement()
{
    vMinElement = MyArray[0][0]; // ustanowienie poczatkowej wartosci najmniejszej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich elementach w wierszu
            if (MyArray[i][j] < vMinElement) // sprawdzenie czy kolejny element nie jest mniejszy
                vMinElement = MyArray[i][j]; // jesli tak to ustanawiamy nowa wartosc najmniejsza
}

/*
 * void mFindMaxElement()
 */
void cArrayTwoDimension::mFindMaxElement()
{
    vMaxElement = MyArray[0][0]; // ustanowienie poczatkowej wartosci najwiekszej
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich elementach w wierszu
            if (MyArray[i][j] > vMaxElement) // sprawdzenie czy kolejny element nie jest wiekszy
                vMaxElement = MyArray[i][j]; // jesli tak to ustanawiamy nowa wartosc najwieksza
}



/*
 * void mPrintRow(typeLoop aRows)
 */
void cArrayTwoDimension::mPrintRow(typeLoop aRows)
{
    for (typeLoop j = 0; j < conColumnsTable; j++) // przejscie po wszystkich elementach w wierszu
        mPrintElement(aRows, j); // wywolanie wypisania kolejnego elementu w wierszu
    std::cout << "\n"; // przejscie do nowej linii
}

/*
 * void mPrintArray()
 */
void cArrayTwoDimension::mPrintArray()
{
    for (typeLoop i = 0; i < conRowsTable; i++) // przejscie po wszystkich wierszach
        mPrintRow(i); // wywolanie wypisania kolejnego wiersza
}

/********** PUBLIC: END **********/
























/* carraytwodimension.cpp */
/********** END_OF_FILE **********/
