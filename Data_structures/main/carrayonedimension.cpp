/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: carrayonedimension.cpp
 */

#include "carrayonedimension.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cArrayOneDimension() - konstruktor wywolywany
 */
cArrayOneDimension::cArrayOneDimension()
{
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // losowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}

/*
 * cArrayOneDimension(typeData aDrawingRange)
 */
cArrayOneDimension::cArrayOneDimension(typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(); // losowanie wartosci elementow tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}



/*
 * void mDrawElements()
 */
void cArrayOneDimension::mDrawElements()
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < conLengthArray; i++) // przejscie po wszystkich elementach
        MyArray[i] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
}

/*
 * void mFindMinElement()
 */
void cArrayOneDimension::mFindMinElement()
{
    vMinElement = MyArray[0]; // ustanowienie poczatkowej wartosci najmniejszej
    for (typeLoop i = 1; i < conLengthArray; i++) // przejscie po wszystkich pozostalych elementach
    {
        if (MyArray[i] < vMinElement) // sprawdzenie czy kolejny element nie jest mniejszy
            vMinElement = MyArray[i]; // jesli tak to ustanawiamy nowa wartosc najmniejsza
    }
}

/*
 * void mFindMaxElement()
 */
void cArrayOneDimension::mFindMaxElement()
{
    vMaxElement = MyArray[0]; // ustanowienie poczatkowej wartosci najwiejszej
    for (typeLoop i = 1; i < conLengthArray; i++) // przejscie po wszystkich pozostalych elementach
    {
        if (MyArray[i] > vMaxElement) // sprawdzenie czy kolejny element nie jest wiekszy
            vMaxElement = MyArray[i]; // jesli tak to ustanawiamy nowa wartosc najwiejsza
    }

}



/*
 * void mPrintElement(typeLoop aIndex)
 */
void cArrayOneDimension::mPrintElement(typeLoop aIndex)
{
    if (conLengthArray != 0) // sprawdzamy czy tablica nie jest pusta
    {
        if (aIndex >= conLengthArray) // sprawdzamy czy nie wychodzimy poza zakres tablicy
            std::cout << "    Brak elementu o wskazanym indeksie!\n";
        else // miescimy sie w zakresie tablicy
            std::cout << MyArray[aIndex] << " "; // wypisujemy wskazany element
    }
    else // tablica jest pusta
        std::cout << "    Tablica jest pusta!\n"; // jesli tablica jest pusta to zwracamy komunikat o tej sytuacji
}

/*
 * void mPrintArray()
 */
void cArrayOneDimension::mPrintArray()
{
    if (conLengthArray != 0) // sprawdzamy czy tablica nie jest pusta
    {
        for (typeLoop i = 0; i < conLengthArray; i++) // przejscie po wszystkich elementach
            mPrintElement(i); // wywolanie wypisania kolejnego elementu
        std::cout << "\n"; // przejscie do nowej linii
    }
    else // tablica jest pusta
        std::cout << "    Tablica jest pusta!\n"; // jesli tablica jest pusta to zwracamy komunikat o tej sytuacji
}

/********** PUBLIC: END **********/

/* carrayonedimension.cpp */
/********** END_OF_FILE **********/
