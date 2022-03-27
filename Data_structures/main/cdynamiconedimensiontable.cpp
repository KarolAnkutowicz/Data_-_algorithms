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
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    tabElements = new typeData[1]; // utworzenie tablicy elementow
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    tabElements[0] = NULL; // nadanie wartosci potencjalnemu elementowi tablicy
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable)
{
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie tablicy elementow
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aLengthTable); // wywolanie metody losujacej dodawane elementy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu
}

/*
 * cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
 */
cDynamicOneDimensionTable::cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
{
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    tabElements = new typeData[aLengthTable]; // utworzenie tablicy elementow
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aLengthTable); // wywolanie metody losujacej dodawane elementy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu
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
    if (vLengthTable == 0) // jesli tablica jest pusta
        return NULL; // wowczas nie mamy co zwracac
    else // jesli tablica nie jest pusta
        return tabElements[vLengthTable - 1]; // domyslnie zwracamy ostatni element
}

/*
 * typeData getElement(typeLoop aIndex)
 */
typeData cDynamicOneDimensionTable::getElement(typeLoop aIndex)
{
    if (vLengthTable == 0) // jesli tablica jest pusta
        return NULL; // wowczas nie mamy co zwracac
    else // jesli w tablicy jest cokolwiek
    {
        if (aIndex > vLengthTable) // jesli indeks jest wiekszy niz rozmiar tablicy
            return NULL; // wowczas nie mamy co zwracac
        else // jesli indeks jest prawidlowa
            return tabElements[aIndex]; // zwrocenie wartosci wskazanego elementu
    }
}



/*
 * void mAddElement(typeData aElement)
 */
void cDynamicOneDimensionTable::mAddElement(typeData aElement)
{
    if (vLengthTable == 0) // jesli tablica jest pusta
    {
        vLengthTable++; // zwiekszenie rozmiaru tablicy
        tabElements[0] = aElement; // wstawienie elementu
    }
    else // jesli w tablicy juz cos jest
    {
        typeData* tabElementsAux; // utworzenie wskaznika do tablicy pomocniczej
        tabElementsAux = new typeData[vLengthTable]; // utworzenie tablicy pomocniczej
        for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
            tabElementsAux[i] = tabElements[i]; // kopiowanie kolejnych elementow
        delete[]tabElements; // zwalnianie zasobow przydzielanych dynamicznie
        vLengthTable++; // zwiekszenie rozmiaru tablicy
        tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy elementow
        for (typeLoop i = 0; i < (vLengthTable - 1); i++) // przejscie po wszystkich elementach z wyjatkiem ostatniego
            tabElements[i] = tabElementsAux[i]; // kopiowanie kolejnych elementow
        tabElements[vLengthTable - 1] = aElement; // dopisanie nowego elementu w wolne miejsce
        delete[]tabElementsAux; // zwalnianie zasobow przydzielanych dynamicznie
    }
}

/*
 * bool mRemoveElement()
 */
bool cDynamicOneDimensionTable::mRemoveElement()
{
    if (vLengthTable == 0) // sprawdzamy czy tablica jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else // jesli w tablicy jest cokolwiek
    {
        if (vLengthTable == 1) // jesli rozmiar tablicy jest rowny 1
        {
            vLengthTable--; // zmniejszenie rozmiaru tablicy
            tabElements[0] = NULL; // wyzerowanie jedynego elementu
        }
        else // jesli rozmiar tablicy jest wiekszy niz 1
        {
            vLengthTable--; // zmniejszenie rozmiaru tablicy
            typeData* tabElementsAux; // utworzenie wskaznika do tablicy pomocniczej
            tabElementsAux = new typeData[vLengthTable]; // utworzenie tablicy pomocniczej
            for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
                tabElementsAux[i] = tabElements[i]; // kopiowanie kolejnych elementow
            delete[]tabElements; // zwalnianie zasobow przydzielanych dynamicznie
            tabElements = new typeData[vLengthTable]; // utworzenie nowej tablicy elementow
            for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
                tabElements[i] = tabElementsAux[i]; // kopiowanie kolejnych elementow
            delete[]tabElementsAux; // zwalnianie zasobow przydzielanych dynamicznie
        }
        return true; // zwrocenie informacji o powodzeniu usuniecia elementu
    }
}



/*
 * void mDrawElements(typeLoop aSize)
 */
void cDynamicOneDimensionTable::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu na koniec tablicy
}

/*
 * void mFindMinElement()
 */
void cDynamicOneDimensionTable::mFindMinElement()
{
    if (vLengthTable == 0) // sprawdzenie czy w tablicy jest cokolwiek
        vMinElement = NULL; // jesli nie to nie ma najmniejszego elementu
    else // jesli w tablicy jest cokolwiek
    {
        vMinElement = tabElements[0]; // ustanowienie najmniejszego elementu na pierwszy element tablicy
        for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich pozostalych elementach
            if (tabElements[i] < vMinElement) // sprawdzenie czy element z tablicy jest mniejszy niz aktualny najmniejszy element
                vMinElement = tabElements[i]; // jesli tak to ustanawiamy nowy najmniejszy element
    }
}

/*
 * void mFindMaxElement()
 */
void cDynamicOneDimensionTable::mFindMaxElement()
{
    if (vLengthTable == 0) // sprawdzenie czy w tablicy jest cokolwiek
        vMinElement = NULL; // jesli nie to nie ma najwiekszego elementu
    else // jesli w tablicy jest cokolwiek
    {
        vMaxElement = tabElements[0]; // ustanowienie najwiekszego elementu na pierwszy element tablicy
        for (typeLoop i = 1; i < vLengthTable; i++) // przejscie po wszystkich pozostalych elementach
            if (tabElements[i] > vMaxElement) // sprawdzenie czy element z tablicy jest wiekszy niz aktualny najwiekszy element
                vMaxElement = tabElements[i]; // jesli tak to ustanawiamy nowy najwiekszy element
    }
}



/*
 * void mPrintElement()
 */
void cDynamicOneDimensionTable::mPrintElement()
{
    if (vLengthTable == 0) // sprawdzamy czy tablic jest pusta
        std::cout << "Tablica jest pusta!\n"; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli w tablicy jest cokolwiek
        std::cout << tabElements[vLengthTable - 1]; // wypisujemy ostatni element
}

/*
 * void mPrintElement(typeLoop aIndex)
 */
void cDynamicOneDimensionTable::mPrintElement(typeLoop aIndex)
{
    if (vLengthTable == 0) // sprawdzamy czy tablic jest pusta
        std::cout << "Tablica jest pusta!\n"; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli w tablicy jest cokolwiek
    {
        if (aIndex > vLengthTable) // sprawdzamy czy nie wychodzimy poza zakres tablicy
            std::cout << "Brak elementu o wskazanym indeksie!\n"; // jesli tak to wypisujemy odpowiedni komunikat
        else // jesli indeks jest prawidlowy
            std::cout << tabElements[vLengthTable - 1]; // wypisujemy ostatni element
    }
}

/*
 * void mPrintTable()
 */
void cDynamicOneDimensionTable::mPrintTable()
{
    if (vLengthTable == 0) // sprawdzamy czy tablic jest pusta
        std::cout << "Tablica jest pusta!\n"; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli w tablicy jest cokolwiek
    {
        for (typeLoop i = 0; i < vLengthTable; i++) // przejscie po wszystkich elementach
            std::cout << tabElements[i] << " "; // wypisanie wartosci kolejnego elementu
        std::cout << "\n"; // przejscie do nowej linii po wypisaniu calej zawartosci tablicy
    }
}

/********** PUBLIC: END **********/

/* cdynamiconedimensiontable.cpp */
/********** END_OF_FILE **********/
