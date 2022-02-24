/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstaticonedimensiontable.cpp
 */

#include "cstaticonedimensiontable.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cStaticOneDimensionTable()
 */
cStaticOneDimensionTable::cStaticOneDimensionTable()
{
    //vLengthTable = 10; // ustanowienie dlugosci tablicy
    vDrawingRange = 0; // ustanowienie zakresu losowania wartosci elementow
    mDrawElements(); // wywolanie losowania wartosci elementow
    mFindMinElement(); // znajdujemy element najmniejszy
    mFindMaxElement(); // znajdujemy element najwiekszy
}

/*
 * cStaticOneDimensionTable(typeData aDrawingRange)
 */
cStaticOneDimensionTable::cStaticOneDimensionTable(typeData aDrawingRange)
{
    //vLengthTable = 10; // ustanowienie dlugosci tablicy
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania wartosci elementow
    mDrawElements(); // wywolanie losowania wartosci elementow
    mFindMinElement(); // znajdujemy element najmniejszy
    mFindMaxElement(); // znajdujemy element najwiekszy
}



/*
 * void mReplaceElement(typeData aElement)
 */
void cStaticOneDimensionTable::mReplaceElement(typeLoop aIndex, typeData aElement)
{
    tabElements[aIndex] = aElement; // przypisujemy wskazanemu elementowi nowa wartosc
    mFindMinElement(); // weryfikujemy element najmniejszy
    mFindMaxElement(); // weryfikujemy element najwiekszy
}

/*
 * void mRemoveElement()
 */
void cStaticOneDimensionTable::mClearElement(typeLoop aIndex)
{
    tabElements[aIndex] = NULL; // czyscimy zawartosc wskazanego elementu
    mFindMinElement(); // weryfikujemy element najmniejszy
    mFindMaxElement(); // weryfikujemy element najwiekszy
}



/*
 * void mDrawElements()
 */
void cStaticOneDimensionTable::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        tabElements[i] = (rand() % vDrawingRange); // zmiana wartosci wskazanego elementu
}

/*
 * void mFindMinElement()
 */
void cStaticOneDimensionTable::mFindMinElement()
{
    vMinElement = tabElements[0]; // nadanie poczatkowej wartosci najmniejszej
    for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich elementach z wyjatkiem pierwszego
        if (tabElements[i] < vMinElement) // sprawdzenie czy nowy element jest mniejszy od aktualnego najmniejszego elementu
            vMinElement = tabElements[i]; // jezeli tak to ustanawiamy nowy element najmniejszy
}

/*
 * void mFindMaxElement()
 */
void cStaticOneDimensionTable::mFindMaxElement()
{
    vMaxElement = tabElements[0]; // nadanie poczatkowej wartosci najwiekszej
    for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich elementach z wyjatkiem pierwszego
        if (tabElements[i] > vMaxElement) // sprawdzenie czy nowy element jest wiekszy od aktualnego najwiekszego elementu
            vMaxElement = tabElements[i]; // jezeli tak to ustanawiamy nowy najwiekszy element
}



/*
 * void mPrintTable()
 */
void cStaticOneDimensionTable::mPrintTable()
{
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        mPrintElement(i); // wywolanie wypisania wskazanego elementu
}

/********** PUBLIC: END **********/

/* cstaticonedimensiontable.cpp */
/********** END_OF_FILE **********/
