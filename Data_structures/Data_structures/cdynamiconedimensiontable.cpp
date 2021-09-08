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
    mPrintTable(); // wypisanie zawartosci tablicy
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
    mPrintTable(); // wypisanie zawartosci tablicy
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
    mPrintTable(); // wypisanie zawartosci tablicy
}

/*
 * ~cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::~cDynamicOneDimensionTable()
{
    delete []tabElements; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement()
 */
typeData cDynamicOneDimensionTable::getElement()
{

}

/*
 * typeData getElement(typeLoop aIndex)
 */
typeData cDynamicOneDimensionTable::getElement(typeLoop aIndex)
{

}

/*
 * bool getTableIsEmpty()
 */
bool cDynamicOneDimensionTable::getTableIsEmpty()
{

}



/*
 * void mAddElement(typeData aElement)
 */
void cDynamicOneDimensionTable::mAddElement(typeData aElement)
{

}

/*
 * bool mRemoveElement()
 */
bool cDynamicOneDimensionTable::mRemoveElement()
{

}



/*
 * void mDrawElements()
 */
void cDynamicOneDimensionTable::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        tabElements[i] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
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
        if (tabElements[i] > vMaxElement) // sprawdzenie czy kolejny element nie jest wiekszy
            vMaxElement = tabElements[i]; // jesli tak to ustanawiamy nowa wartosc najwiejsza
    }
}



/*
 * void mPrintElement()
 */
void cDynamicOneDimensionTable::mPrintElement()
{

}

/*
 * void mPrintElement(typeLoop aIndex)
 */
void cDynamicOneDimensionTable::mPrintElement(typeLoop aIndex)
{

}

/*
 * void mPrintTable()
 */
void cDynamicOneDimensionTable::mPrintTable()
{
    cout << "    Zawartosc tablicy: " << endl;
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
        cout << tabElements[i] << " "; // wypisanie kolejnego elementu
    cout << endl; // przejscie do nowej linii
}

/********** PUBLIC: END **********/

/* cdynamiconedimensiontable.cpp */
/********** END_OF_FILE **********/
