/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.cpp
 */

#include "cdynamiconedimensiontable.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable()
{
    //tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy
    tabElements = new typeData[1]; // utworzenie nowej tablicy
    //vLengthTable = 1; // ustanowienie dlugosci tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    tabElements[0] = vDrawingRange; // przypisanie wartosci jej jedynego elementu
    vLengthTable = 0; // ustanowienie dlugosci tablicy
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable)
{
    tabElements = new typeData[1]; // utworzenie nowej tablicy
    vDrawingRange = 0; // ustanowienie maksymalnej wartosci w tablicy
    //for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
    //    tabElements[i] = vDrawingRange; // przypisanie wartosci elementu
    mDrawElements(aLengthTable); // wywolanie losowania i dodawania elementow
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    vMinElement = tabElements[0]; // ustanowienie wartosci najmniejszej
    vMaxElement = tabElements[0]; // ustanowienie wartosci najwiekszej
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
{
    tabElements = new typeData[1]; // utworzenie nowej tablicy
    vDrawingRange = aDrawingRange; // ustanowienie maksymalnej wartosci w tablicy
    mDrawElements(aLengthTable); // wylosowanie wartosci elementow tablicy
    vLengthTable = aLengthTable; // ustanowienie dlugosci tablicy
    mFindMinElement(); // znalezienie najmniejszego elementu w tablicy
    mFindMaxElement(); // znalezienie najwiekszego elementu w tablicy
}

/*
 * ~cDynamicOneDimensionTable()
 */
cDynamicOneDimensionTable::~cDynamicOneDimensionTable()
{
    delete[]tabElements; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getElement()
 */
typeData cDynamicOneDimensionTable::getElement()
{
    if (vLengthTable > 0) // sprawdzamy czy wektor nie jest pusty
        return tabElements[vLengthTable - 1]; // jesli nie to zwracamy ostatni element
    else // wektor jest pusty
        return NULL; // jesli tak to nie mamy co zwracac

}

/*
 * typeData getElement(typeLoop aIndex)
 */
typeData cDynamicOneDimensionTable::getElement(typeLoop aIndex)
{
    if (vLengthTable > 0) // sprawdzamy czy wektor nie jest pusty
    {
        if (aIndex >= vLengthTable) // sprawdzamy czy nie wychodzimy poza zakres wektora
            return NULL; // jesli tak to nie mamy co zwracac
        else // indeks miesci sie w zakresie wektora
            return tabElements[aIndex]; // zwracamy odpowiednia wartosc
    }
    else // jesli jest
        return NULL; // nie mamy co zwracac

}



/*
 * void mAddElement(typeData aElement)
 */
void cDynamicOneDimensionTable::mAddElement(typeData aElement)
{
    if (vLengthTable == 0) // sprawdzamy czy tablica jest pusta
    {
        vLengthTable++; // zwiekszamy rozmiar tablicy
        tabElements[0] = aElement; // jesli tak to dodany element jest jedynym
    }
    else // jesli w tablicy juz cos jest
    {
            vLengthTable++; // zwiekszamy rozmiar tablicy
            typeData* tabElementsAux; // deklarujemy wskaznik do tablicy pomocniczej
            tabElementsAux = new typeData[vLengthTable]; // tworzymy nowa tablice pomocnicza
            for (typeLoop i = 0; i < (vLengthTable - 1); i++) // przechodziy po wszystkich elementach tablicy elementow
                tabElementsAux[i] = tabElements[i]; // kopiujemy elementy do tablicy pomocniczej
            tabElementsAux[vLengthTable - 1] = aElement; // skopiowanie dodatkowego elementu
            delete[] tabElements; // zwolnienie zasobow przydzielanych dynamicznie
            tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy elementow
            for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach tablicy
                tabElements[i] = tabElementsAux[i]; // skopiowanie kolejnych elementow
            delete[]tabElementsAux; // zwalnianie zasobow przydzielanych dynamicznie
            mPrintTable();
    }
/*    vLengthTable++; // zwiekszamy rozmiar tablicy
    typeData* tabElementsAux; // deklarujemy wskaznik do tablicy pomocniczej
    tabElementsAux = new typeData[vLengthTable]; // tworzymy nowa tablice pomocnicza
    for (typeLoop i = 0; i < (vLengthTable - 1); i++) // przechodziy po wszystkich elementach tablicy elementow
        tabElementsAux[i] = tabElements[i]; // kopiujemy elementy do tablicy pomocniczej
    tabElementsAux[vLengthTable - 1] = aElement; // skopiowanie dodatkowego elementu
    delete[] tabElements; // zwolnienie zasobow przydzielanych dynamicznie
    tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy elementow
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach tablicy
        tabElements[i] = tabElementsAux[i]; // skopiowanie kolejnych elementow
    delete[]tabElementsAux; // zwalnianie zasobow przydzielanych dynamicznie
    mPrintTable();
    mCheckTableIsEmpty(); // wywolanie sprawdzenia czy tablica jest pusta*/
}

/*
 * bool mRemoveElement()
 */
bool cDynamicOneDimensionTable::mRemoveElement()
{
    if (vLengthTable == 0) // sprawdzamy czy tablica jest pusta
    {
        mPrintTable();
        return false; // jesli tak to nie mamhy co usuwac
    }
    else // jesli tablica nie jest pusta
    {
        if (vLengthTable == 1)
        {
            tabElements[0] = NULL; // wyzerowanie jedynego elementu
            vLengthTable--; // zmniejszamy rozmiar tablicy
        }
        else
        {
            vLengthTable--; // zmniejszamy rozmiar tablicy
            typeData* tabElementsAux; // deklarujemy wskaznik do tablicy pomocniczej
            tabElementsAux = new typeData[vLengthTable]; // tworzymy nowa tablice pomocnicza
            for (typeLoop i = 0; i < (vLengthTable - 1); i++) // przechodziy po wszystkich elementach tablicy elementow
                tabElementsAux[i] = tabElements[i]; // kopiujemy elementy do tablicy pomocniczej
            delete[] tabElements; // zwolnienie zasobow przydzielanych dynamicznie
            tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy elementow
            for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach tablicy
                tabElements[i] = tabElementsAux[i]; // skopiowanie kolejnych elementow
            delete[]tabElementsAux; // zwalnianie zasobow przydzielanych dynamicznie
        }
        mPrintTable();
        return true;
    }
}


/*
 * void mDrawElements(typeLoop aSize)
 */
void cDynamicOneDimensionTable::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
    {
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu na koniec tablicy
        //tabElements[i] = rand() % vDrawingRange; // wylosowanie i przypisanie wartosci
        mPrintTable();
    }
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
    if (vLengthTable > 0) // sprawdzamy czy tablica nie jest pusta
        std::cout << tabElements[vLengthTable - 1] << std::endl; // wypisujemy ostatni element
    else // Tablica jest pusta
        std::cout << "    Tablica jest pusta!" << std::endl; // jesli tablica jest pusta to zwracamy komunikat o tej sytuacji
}

/*
 * void mPrintElement(typeLoop aIndex)
 */
void cDynamicOneDimensionTable::mPrintElement(typeLoop aIndex)
{
    if (vLengthTable > 0) // sprawdzamy czy tablica nie jest pusta
    {
        if (aIndex >= vLengthTable) // sprawdzamy czy nie wychodzimy poza zakres tablicy
            std::cout << "    Brak elementu o wskazanym indeksie!" << std::endl;
        else // miescimy sie w zakresie tablicy
            std::cout << tabElements[aIndex] << std::endl; // wypisujemy wskazany element
    }
    else // tablica jest pusta
        std::cout << "    Tablica jest pusta!" << std::endl; // jesli tablica jest pusta to zwracamy komunikat o tej sytuacji
}

/*
 * void mPrintTable()
 */
void cDynamicOneDimensionTable::mPrintTable()
{
    if (vLengthTable > 0) // sprawdzamy czy tablica nie jest pusta
    {
        for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
            std::cout << tabElements[i] << " "; // wypisanie kolejnego elementu
        std::cout << "\n"; // przejscie do nowej linii
    }
    else // tablica jest pusta
        std::cout << "    Tablica jest pusta!\n"; // jesli tablica jest pusta to zwracamy komunikat o tej sytuacji
}

/********** PUBLIC: END **********/

/* cdynamiconedimensiontable.cpp */
/********** END_OF_FILE **********/
