/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectortwodimension.cpp
 */

#include "cvectortwodimension.h"

using namespace std;

/********** PUBLIC: BEGIN **********/

#include "cvectortwodimension.h"

/*
 * cVectorTwoDimension()
 */
cVectorTwoDimension::cVectorTwoDimension()
{

}

/*
 * cVectorTwoDimension(typeLoop aSize)
 */
cVectorTwoDimension::cVectorTwoDimension(typeLoop aSize)
{

}

/*
 * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns)
 */
cVectorTwoDimension::cVectorTwoDimension(typeLoop aRows, typeLoop aColumns)
{

}

/*
 * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange)
 */
cVectorTwoDimension::cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange)
{

}



/*
 * void mAddElement(typeLoop aRows,typeData aElement)
 */
void cVectorTwoDimension::mAddElement(typeLoop aRows,typeData aElement)
{
    VectorElements[aRows].push_back(aElement); // dodanie elementu do wskazanego wektora
}

/*
 * bool mRemoveElement(typeLoop aRows)
 */
bool cVectorTwoDimension::cVectorTwoDimension::mRemoveElement(typeLoop aRows)
{
    if (VectorElements[aRows].empty() == true) // sprawdzamy czy wskazany wektor jest pusty
        return false; // jesli tak to zwracamy informacje, ze nie mozemy usunac elementu
    else // w przeciwnym przypadku
    {
        VectorElements[aRows].pop_back(); // usuwamy ostatni element we wskazanym wektorze
        return true; // zwracamy informacje, ze operacja sie powiodla
    }
}



/*
 * void mDrawElements(typeLoop aRows, typeLoop aColumns)
 */
void cVectorTwoDimension::cVectorTwoDimension::mDrawElements(typeLoop aRows, typeLoop aColumns)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < VectorElements.size(); i++) // przejscie po wszystkich wektorach
        for (typeLoop j = 0; j < VectorElements[0].size(); j++) // przejscie po wszystkich elementach w wektorze
            VectorElements[aRows][aColumns] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
}

/*
 * void mFindMinElement()
 */
void cVectorTwoDimension::mFindMinElement()
{
    vMinElement = VectorElements[0][0]; // nadanie poczatkowej wartosci najmniejszej
    for (typeLoop i = 0; i < VectorElements.size(); i++) // przejscie po wszystkich wektorach
    {
        for (typeLoop j = 0; j < VectorElements[0].size(); j++) // przejscie po wszystkich elementach w danym wektorze
        {
            if (VectorElements[i][j] < vMinElement) // sprawdzamy czy nowa wartosc jest mniejsza niz aktualne minimum
                vMinElement = VectorElements[i][j]; // jesli tak to mamy nowe minimum
        }
    }
}

/*
 * void mFindMaxElement()
 */
void cVectorTwoDimension::mFindMaxElement()
{
    vMaxElement = VectorElements[0][0]; // nadanie poczatkowej wartosci najwiekszej
    for (typeLoop i = 0; i < VectorElements.size(); i++) // przejscie po wszystkich wektorach
    {
        for (typeLoop j = 0; j < VectorElements[0].size(); j++) // przejscie po wszystkich elementach w danym wektorze
        {
            if (VectorElements[i][j] > vMaxElement) // sprawdzamy czy nowa wartosc jest wieksza niz aktualne maksimum
                vMaxElement = VectorElements[i][j]; // jesli tak to mamy nowe maksimum
        }
    }
}



/*
 * void mPrintElement(typeLoop aRows, typeLoop aColumns)
 */
void cVectorTwoDimension::mPrintElement(typeLoop aRows, typeLoop aColumns)
{
    cout << VectorElements[aRows][aColumns] << " "; // wypisanie zawartosci wskazanego elementu
}

/*
 * void mPrintVector(typeLoop aRows)
 */
void cVectorTwoDimension::mPrintVector(typeLoop aRows)
{
    for (typeLoop i = 0; i < VectorElements[0].size(); i++) // przejscie po wszystkich elementach wektora
        mPrintElement(aRows, i); // wywolanie wypisania wskazanego elementu
}

/*
 * void mPrintAllElements()
 */
void cVectorTwoDimension::mPrintAllElements()
{
    for (typeLoop i = 0; i < VectorElements.size(); i++) // przejscie po wszystkich wektorach
    {
        mPrintVector(i); // wywolanie wypisania wskazanego wektora
        cout << endl; // przejscie do nowej linii
    }
}

/********** PUBLIC: END **********/

/* cvectortwodimension.cpp */
/********** END_OF_FILE **********/
