/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.cpp
 */

#include "cdatahandling.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDataHandling()
 */
cDataHandling::cDataHandling()
{
    mMainMenu(); // wywolanie menu glownego
}



/*
 * void mPrintMenu()
 */
void cDataHandling::mPrintMainMenu()
{
    cout << endl << "Wybierz opcje:" << endl // menu glowne
//         << "(1) - dynamiczna tablica jednowymiarowa" << endl // opcja dla dynamicznej tablicy jednowymiarowej
//         << "(2) - dynamiczna tablica jednowymiarowa z wykorzystaniem <vector>" << endl // opcja dla dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
         //<< "(3) - statyczna tablica jednowymiarowa z wykorzystaniem <array>" << endl // opcja dla dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <array>
//         << "(4) - dynamiczna tablica dwuwymiarowa" << endl // opcja dla dynamicznej tablicy dwuwymiarowej
//         << "(5) - dynamiczna tablica dwuwymiarowa z wykorzystaniem <vector>" << endl // opcja dla dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
         //<< "(6) - statyczna tablica dwuwymiarowa z wykorzystaniem <array>" << endl // opcja dla dynamicznej tablicy dwywymiarowej z wykorzystaniem szablonu <array>
//         << "(7) - stos z wykorzystaniem szablonu <stack>" << endl // opcja dla stosu z wykorzystaniem <stack>
//         << "(8) - stos" << endl // opcja dla stosu bez wykorzystania <stack>
         //<< "(9) - lista jednokierunkowa z wykorzystaniem <forward_list>" << endl // opcja dla listy jednokierunkowej z wykorzystaniem szablonu <forward_list>
         //<< "(10) - lista jednokierunkowa" << endl // opcja dla listy jednokierunkowej bez wykorzystania szablonu <forward_list>
//         << "(11) - lista dwukierunkowa z wykorzystaniem szablonu <list>" << endl // opcja dla listy z wykorzystaniem <list>
         //<< "(12) - lista dwukierunkowa" << endl // opcja dla listy  bez wykorzystania <list>
//         << "(13) - kolejka jednokierunkowa z wykorzystaniem szablonu <queue>" << endl // opcja dla kolejki z wykorzystaniem szablonu <queue>
         //<< "(14) - kolejka jednokierunkowa" << endl // opcja dla kolejki bez wykorzystania szablonu <queue>
         << "(15) - kolejka dwukierunkowa z wykorzystaniem <deque>" << endl // opcja dla kolejki dwukierunkowej z wykorzystaniem szablonu <deque>
         //<< "(16) - kolejka dwukierunkowa" << endl // opcja dla kolejki dwukierunkowej bez wykorzystania szablonu <deque>
         //<< "(17) - kopiec binarny" << endl // opcja dla kopca binarnego
         << "(18) - mapa z wykorzystaniem szablonu <map>" << endl // opcja dla mapy z wykorzystaniem szablonu <map>
         //<< "(19) - mapa" << endl // opcja dla mapy bez wykorzystania szablonu <map>
         //<< "(20) - mapa nieuporzadkowana z wykorzystaniem szablonu <unordered_map>" << endl // opcja dla mapy nieuporzadkowanej z wykorzystaniem szablonu <unordered_map>
         //<< "(21) - mapa nieuporzadkowana" << endl // opcja dla mapy nieuporzadkowanej bez wykorzystania szablonu <unordered_map>
         << "(22) - zbior z wykorzystaniem szablonu <set>" << endl // opcja dla zbioru z wykorzystaniem szablonu <set>
         //<< "(23) - zbior" << endl // opcja dla zbioru bez wykorzystania szablonu <set>
         //<< "(24) - zbior nieuporzadkowany z wykorzystaniem szablonu <unordered_set>" << endl // opcja dla nieuporzadkowanego zbioru z wykorzystaniem szablonu <unordered_set>
         //<< "(25) - zbior nieuporzadkowany" << endl // opcja dla nieuporzadkowanego zbioru bez wykorzystania szablonu <unordered_set>
         << endl << "(0) - zakonczenie dzialania programu" << endl; // opcja dla wyjscia z programu
}

/*
 * void mMainMenu()
 */
void cDataHandling::mMainMenu()
{
    do
    {
        mPrintMainMenu(); // wypisanie glownego menu
        cin >> vOption; // wczytanie opcji
        switch(vOption) // wybor opcji
        {
            case 0 : break; // wybor zakonczenia dzialana programu
//            case 1 : mMenuDynamicOneDimensionTable(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej
//            case 2 : mMenuVectorOneDimension(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
            //case 3 : mMenuArrayOneDimension(); break; // wyborz dzialan na dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <array>
//            case 4 : mMenuDynamicTwoDimensionTable(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej
//            case 5 : mMenuVectorTwoDimension(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
            //case 6 : mMenuArrayTwoDimension(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <array>
//            case 7 : mMenuStackTemplate(); break; // wybor dzialan na stosie z wykorzystaniem szablonu <stack>
//            case 8 : mMenuStackMy(); break; // wybor dzialan na stosie bez wykorzystania szablonu <stack>
            //case 9 : mMenuForwardListTemplate(); break; // wybor dzialan na liscie jednokierunkowej z wykorzystaniem szablonu <forward_list>
            //case 10 : mMenuForwardListMy(); break; // wybor dzialan na liscie jednokierunkowej bez wykorzystania szablonu <forward_list>
//            case 11 : mMenuListTemplate(); break; // wybor dzialan na liscie z wykorzystaniem szablonu <list>
            //case 12 : mMenuListMy(); break; // wybor dzialan na liscie bez wykorzystania szablonu <list>
//            case 13 : mMenuQueueTemplate(); break; // wybor dzialan na kolejce z wykorzystaniem szablonu <queue>
            //case 14 : mMenuQueueMy(); break; // wybor dzialan na kolejce bez wykorzystania szablonu <queue>
            case 15 : mMenuDequeTemplate(); break; // wybor dzialan na kolejce dwustronnej z wykorzystaniem szablonu <deque>
            //case 16 : mMenuDequeMy(); break; // wybor dzialan na kolejce dwustronnej bez wykorzystania szablonu <deque>
            //case 17 : mMenuHeapBinary(); break; // wybor dzialan na kopcu binarnym
            case 18 : mMenuMapTemplate(); break; // wybor dzialan na mapie z wykorzystaniem szablonu <map>
            //case 19 : mMenuMapMy(); break; // wybor dzialan na mapie bez wykorzystania szablonu <map>
            //case 20 : mMenuUnorderedMapTemplate(); break; // wybor dzialan na mapie nieuporzadkowanej z wykorzystaniem szablonu <unordered_map>
            //case 21 : mMenuUnorderedMapMy(); break; // wybor dzialan na mapie nieuporzadkowanej bez wykorzystania szablonu <unordered_map>
            case 22 : mMenuSetTemplate(); break; // wybor dzialan na zbiorze z wykorzystaniem szablonu <set>
            //case 23 : mMenuSetMy(); break; // wybor dzialan na zbiorze bez wykorzystania szablonu <set>
            //case 24 : mMenuUnorderedSetTemplate(); break; // wybor dzialan na zbiorze nieuporzadkowanym z wykorzystaniem szablonu <unordered_set>
            //case 25 : mMenuUnorderedSetMy(); break; // wybor dzialan na zbiorze nieuporzadkowanym bez wykorzystania szablonu <unordered_set>
            //default : cout << "Nie ma takiej opcji!" << endl; mMainMenu(); break; // komunikat o braku opcji
        }
        if (vOption != 0) // dodatkowe przejscie do kolejnego wyboru menu po dzialaniu jednej ze struktur
        {
            cout << "    Nacisnij dowolny klawisz..." << endl; // chwilowe "wstrzymanie" wyswietlonych wynikow
            getch(); // wymuszenie nacisniecia dowolnego klawisza
        }
    } while (vOption != 0); // sprawdzenie czy nie chcemy wyjsc z programu
}

/*
 * void mMenuDynamicOneDimensionTable()
 */
void cDataHandling::mMenuDynamicOneDimensionTable()
{
    typeLoop vLengthTable; // zmienna okreslajaca liczbe elementow tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba elementow: ";
    cin >> vLengthTable; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicOneDimensionTable D(vLengthTable, vDrawingRange); //utworzenie obiektu
    cout << endl << "    Liczba elementow: " << D.getLenthtTable() << endl; // wypisanie rozmiaru tablicy
    cout << "    Podaj nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Usuwamy ostatni element..." << endl;
    D.mRemoveElement(); // usuwanie ostatniego elementu
    cout << "    Zawartosc tablicy: " << endl;
    D.mPrintTable(); // wypisanie zawartosci tablicy
    cout << endl << "    Liczba elementow: " << D.getLenthtTable() << endl // wypisanie rozmiaru tablicy
         << "    Minimum: " << D.getMinElement() << endl // wypisanie minimum tablicy
         << "    Maximum: " << D.getMaxElement() << endl; // wypisanie maximum tablicy
}

/*
 * void mMenuVectorOneDimension()
 */
void cDataHandling::mMenuVectorOneDimension()
{
    typeLoop vLengthVector; // zmienna okreslajaca liczbe elementow wektora
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry wektora:" << endl // wczytywanie parametrow
         << "    Liczba elementow: ";
    cin >> vLengthVector; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cVectorOneDimension V(vLengthVector, vDrawingRange); //utworzenie obiektu
    cout << endl << "    Liczba elementow: " << V.getVectorSize() << endl; // wypisanie rozmiaru wektora
    cout << "    Podaj nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    V.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    V.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Usuwamy ostatni element..." << endl;
    V.mRemoveElement(); // usuwanie ostatniego elementu
    cout << "    Zawartosc wektora: " << endl;
    V.mPrintAllElements(); // wypisanie zawartosci wektora
    cout << endl << "    Liczba elementow: " << V.getVectorSize() << endl // wypisanie rozmiaru wektora
         << "    Minimum: " << V.getMinElement() << endl // wypisanie minimum wektora
         << "    Maximum: " << V.getMaxElement() << endl; // wypisanie maximum wektora
}

/*
 * mMenuArrayOneDimension()
 */
void cDataHandling::mMenuArrayOneDimension()
{
    //
}

/*
 * void mMenuDynamicTwoDimensionTable()
 */
void cDataHandling::mMenuDynamicTwoDimensionTable()
{
    typeLoop vRows, vColumns; // zmienne okreslajaca rozmiar tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba wierszy: ";
    cin >> vRows; // wczytanie liczby wierszy;
    cout << "    Liczba kolumn: ";
    cin >> vColumns; // wczytanie liczby kolumn
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicTwoDimensionTable D(vRows, vColumns, vDrawingRange); // utworzenie obiektu
    cout << "    Zawartosc tablicy: " << endl;
    D.mPrintAllElements(); // wypisanie zawartosci tablicy
    cout << "    Minimum: " << D.getMinElement() << endl // wypisanie minimum tablicy
         << "    Maximum: " << D.getMaxElement() << endl; // wypisanie maximum tablicy
}

/*
 * void mMenuVectorTwoDimension()
 */
void cDataHandling::mMenuVectorTwoDimension()
{
    typeLoop vRows, vColumns; // zmienne okreslajaca rozmiar wektora wektorow
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry wektora:" << endl // wczytywanie parametrow
         << "    Liczba wierszy: ";
    cin >> vRows; // wczytanie liczby wierszy;
    cout << "    Liczba kolumn: ";
    cin >> vColumns; // wczytanie liczby kolumn
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cVectorTwoDimension V(vRows, vColumns, vDrawingRange); // utworzenie obiektu
    cout << "    Zawartosc wektorow: " << endl;
    V.mPrintAllElements(); // wypisanie zawartosci wektorow
    cout << "    Minimum: " << V.getMinElement() << endl // wypisanie minimum wektora wektorow
         << "    Maximum: " << V.getMaxElement() << endl; // wypisanie maximum wektora wektorow
}

/*
 * void mMenuArrayTwoDimension()
 */
void cDataHandling::mMenuArrayTwoDimension()
{
    //
}

/*
 * void mMenuStackTemplate()
 */
void cDataHandling::mMenuStackTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackTemplate S(vSize, vDrawingRange); // utworzenie obiektu
    cout << "    Podaj nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Usuwamy element..." << endl;
    S.mRemoveElement(); // usuwanie ostatniego elementu
    cout << endl << "    Liczba elementow: " << S.getStackSize() << endl; // wypisanie rozmiaru stosu
    cout << "    Zawartosc stosu: " << endl;
    S.mPrintAllElements(); // wypisanie zawartosci wektora
    cout << endl << "    Liczba elementow: " << S.getStackSize() << endl; // wypisanie rozmiaru stosu
}

/*
 * void mMenuStackMy()
 */
void cDataHandling::mMenuStackMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackMy S(vSize, vDrawingRange); // utworzenie obiektu
    cout << "    Podaj nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Usuwamy element..." << endl;
    S.mRemoveElement(); // usuwanie ostatniego elementu
    cout << endl << "    Liczba elementow: " << S.getStackSize() << endl; // wypisanie rozmiaru stosu
    cout << "    Zawartosc stosu: " << endl;
    S.mPrintAllElements(); // wypisanie zawartosci stosu
    cout << endl << "    Liczba elementow: " << S.getStackSize() << endl; // wypisanie rozmiaru stosu
}

/*
 * void mMenuForwardListTemplate()
 */
void cDataHandling::mMenuForwardListTemplate()
{
    //
}

/*
 * void mMenuForwardListMy()
 */
void cDataHandling::mMenuForwardListMy()
{
    //
}

/*
 * void mMenuListTemplate()
 */
void cDataHandling::mMenuListTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry listy" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cListTemplate L(vSize, vDrawingRange); // utworzenie obiektu
    cout << endl << "    Liczba elementow: " << L.getListSize() << endl; // wypisanie rozmiaru listy
    cout << "    Podaj nowy element do dodania na koniec listy: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element do dodania na koniec listy: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    cout << "    Usuwamy pierwszy element..." << endl;
    L.mRemoveElementFromBegin() ; // usuwanie pierwszego elementu
    cout << endl << "    Liczba elementow: " << L.getListSize() << endl; // wypisanie rozmiaru listy
    cout << "    Zawartosc listy: " << endl;
    L.mPrintAllElements(); // wypisanie zawartosci listy
    cout << endl << "    Liczba elementow: " << L.getListSize() << endl; // wypisanie rozmiaru listy
}

/*
 * void mMenuListMy()
 */
void cDataHandling::mMenuListMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry listy" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cListMy L(vSize, vDrawingRange); // utworzenie obiektu
    /*L.mPrintFirstElement();
    cout << endl;
    L.mPrintLastElement();
    cout << endl;*/
    cout << "Liczba elementow listy: " << L.getListSize() << endl
         << "Zakres losowania elementow " << L.getDrawingRange() << endl;
}

/*
 * void mMenuQueueTemplate()
 */
void cDataHandling::mMenuQueueTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry kolejki" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cQueueTemplate Q(vSize, vDrawingRange); // utworzenie obiektu
    cout << endl << "    Liczba elementow: " << Q.getQueueSize() << endl; // wypisanie rozmiaru kolejki
    cout << "    Podaj nowy element do dodania do kolejki: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element do dodania do kolejki: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Usuwamy element..." << endl;
    Q.mRemoveElement(); // usuniecie elementu z kolejki
    cout << endl << "    Liczba elementow: " << Q.getQueueSize() << endl; // wypisanie rozmiaru kolejki
    cout << "    Zawartosc kolejki: " << endl;
    Q.mPrintAllElements(); // wypisanie zawartosci kolejki
    cout << endl << "    Liczba elementow: " << Q.getQueueSize() << endl; // wypisanie rozmiaru kolejki
}

/*
 * void mMenuQueueMy()
 */
void cDataHandling::mMenuQueueMy()
{
    //
}

/*
 * void mMenuDequeTemplate()
 */
void cDataHandling::mMenuDequeTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki dwustronnej
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry kolejki dwustronnej" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDequeTemplate D(vSize, vDrawingRange); // utworzenie obiektu
    cout << endl << "    Liczba elementow: " << D.getDequeSize() << endl; // wypisanie rozmiaru kolejki dwustronnej
    cout << "    Podaj nowy element do dodania na koniec kolejki dwustronnej: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element do dodania na koniec kolejki dwustronnej: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    cout << "    Usuwamy ostatni element..." << endl;
    D.mRemoveElementFromEnd(); // usuniecie elementu z kolejki dwustronnej
    cout << endl << "    Liczba elementow: " << D.getDequeSize() << endl; // wypisanie rozmiaru kolejki dwustronnej
    cout << "    Zawartosc kolejki dwustronnej: " << endl;
    D.mPrintAllElements(); // wypisanie zawartosci kolejki dwustronnej
    cout << endl << "    Liczba elementow: " << D.getDequeSize() << endl; // wypisanie rozmiaru kolejki dwustronnej
}

/*
 * void mMenuDequeMy()
 */
void cDataHandling::mMenuDequeMy()
{
    //
}

/*
 * void mMenuHeapBinary()
 */
void cDataHandling::mMenuHeapBinary()
{
    //
}

/*
 * void mMenuMapTemplate()
 */
void cDataHandling::mMenuMapTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow mapy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry mapy" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres wartosci od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cMapTemplate M(vSize, vDrawingRange); // utworzenie obiektu
    cout << endl << "    Liczba elementow: " << M.getMapSize() << endl; // wypisanie rozmiaru mapy
    cout << "    Podaj nowy element do dodania do mapy (klucz domyslny): ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(97 + vSize), vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element do dodania do mapy (klucz domyslny): ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(98 + vSize), vElement); // dodanie nowego elementu
    cout << "    Usuwamy element z najmniejszym kluczem..." << endl;
    M.mRemoveElement((char)97); // usuniecie elementu z mapy
    cout << endl << "    Liczba elementow: " << M.getMapSize() << endl; // wypisanie rozmiaru mapy
    cout << "    Zawartosc mapy: " << endl;
    M.mPrintAllElements(); // wypisanie zawartosci mapy
}

/*
 * void mMenuMapMy()
 */
void cDataHandling::mMenuMapMy()
{
    //
}

/*
 * void mMenuUnorderedMapTemplate()
 */
void cDataHandling::mMenuUnorderedMapTemplate()
{
    //
}

/*
 * void mMenuUnorderedMapMy()
 */
void cDataHandling::mMenuUnorderedMapMy()
{
    //
}

/*
 * void mMenuSetTemplate()
 */
void cDataHandling::mMenuSetTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow zbioru
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry zbioru" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vSize; // wczytanie liczby elementow
    cout << "    Zakres wartosci od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cSetTemplate S(vSize, vDrawingRange); // utworzenie obiektu
    cout << endl << "    Liczba elementow: " << S.getSetSize() << endl; // wypisanie rozmiaru zbioru
    cout << "    Podaj nowy element do dodania do zbioru: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << "    Podaj jeszcze jeden nowy element do dodania do zbioru: ";
    cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    cout << endl << "    Liczb elementow: " << S.getSetSize() << endl; // wypisanie rozmiaru zbioru
    cout << "    Zawartosc zbioru: " << endl;
    S.mPrintAllElements(); // wypisanie zawartosci zbioru
}

/*
 * void mMenuSetMy()
 */
void cDataHandling::mMenuSetMy()
{
    //
}

/*
 * void mMenuUnorderedSetTemplate()
 */
void cDataHandling::mMenuUnorderedSetTemplate()
{
    //
}

/*
 * void mMenuUnorderedSetMy()
 */
void cDataHandling::mMenuUnorderedSetMy()
{
    //
}

/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
