/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.cpp
 */

#include "cdynamiconedimensiontable.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable()
{
    vLengthTable = 1; // ustanowienie dlugosci tablicy
    tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    tabElements[0] = vDrawingRange; // przypisanie wartosci jej jedynego elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
    mPrintResults(); // wypisanie rezultatow
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable)
{
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        tabElements[i] = vDrawingRange; // przypisanie wartosci elementu
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
    mPrintResults(); // wypisanie rezultatow
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
{
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie nowej tablicy
    vDrawingRange = aDrawingRange; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // wylosowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
    mPrintResults(); // wypisanie rezultatow
}

/*
 * ~cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::~cDynamicOneDimensionTable()
{
    delete []tabElements; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * void mDrawElements()
 */
void cDynamicOneDimensionTable::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        tabElements[i] = rand() % vDrawingRange; // wylosowanie i przypisanie liczby
}

/*
 * void mFindMinElement()
 */
void cDynamicOneDimensionTable::mFindMinElement()
{
    vMinElement = tabElements[0]; // ustanowienie poczatkowej wartosci najmniejszej
    for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich pozostalych elementach
    {
        if (tabElements[i] < vMinElement) // sprawdzenie czy kolejny element nie jest mniejszy
            vMinElement = tabElements[i]; // jesli tak to ustanawiamy nowa wartosc najmniejsza
    }
}

/*
 * void mFindMaxElement()
 */
void cDynamicOneDimensionTable::mFindMaxElement()
{
    vMaxElement = tabElements[0]; // ustanowienie poczatkowej wartosci najwiejszej
    for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich pozostalych elementach
    {
        if (tabElements[i] > vMinElement) // sprawdzenie czy kolejny element nie jest wiekszy
            vMaxElement = tabElements[i]; // jesli tak to ustanawiamy nowa wartosc najwiejsza
    }
}

/*
 * void mPrintTable()
 */
void cDynamicOneDimensionTable::mPrintTable()
{
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        cout << tabElements[i] << " "; // wypisanie kolejnego elementu
}

/*
 * void mPrintResults()
 */
void cDynamicOneDimensionTable::mPrintResults()
{
    cout << "    Liczba elementow tablicy: " << getLenthtTable() << endl // wypisanie liczby elementow
         << "    Wartosc najmniejsza: " << getMinElement() << endl // wypisanie najmniejszej wartosci
         << "    Wartosc najwieksza: " << getMaxElement() << endl; // wypisanie nawiekszej wartosci
}


/********** PUBLIC: END **********/

/* cdynamiconedimensiontable.cpp */
/********** END_OF_FILE **********/
