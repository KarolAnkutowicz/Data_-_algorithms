/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.cpp
 */

#include "cdatahandling.hpp"

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
    std::cout << "\nWybierz opcje:\n" // menu glowne
        << "TABLICE I WEKTORY:\n"
        << "    (10) - statyczna tablica jednowymiarowa\n" // opcja dla statycznej tablicy jednowymiarowej
        << "    (11) - statyczna tablica jednowymiarowa z wykorzystaniem <array>\n" // opcja dla dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <array>
        << "    (12) - statyczna tablica dwuwymiarowa\n" // opcja dla statycznej tablicy jednowymiarowej
        << "    (13) - statyczna tablica dwuwymiarowa z wykorzystaniem <array>\n" // opcja dla dynamicznej tablicy dwywymiarowej z wykorzystaniem szablonu <array>
        << "    (14) - dynamiczna tablica jednowymiarowa\n" // opcja dla dynamicznej tablicy jednowymiarowej
        << "    (15) - dynamiczna tablica jednowymiarowa z wykorzystaniem <vector>\n" // opcja dla dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
        << "    (16) - dynamiczna tablica dwuwymiarowa\n" // opcja dla dynamicznej tablicy dwuwymiarowej
        << "    (17) - dynamiczna tablica dwuwymiarowa z wykorzystaniem <vector>\n" // opcja dla dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
        << "LISTY i KOLEJKI:\n"
        << "    (20) - lista jednokierunkowa\n" // opcja dla listy jednokierunkowej bez wykorzystania szablonu <forward_list>
        << "    (21) - lista jednokierunkowa z wykorzystaniem <forward_list>\n" // opcja dla listy jednokierunkowej z wykorzystaniem szablonu <forward_list>
        << "    (22) - lista dwukierunkowa\n" // opcja dla listy  bez wykorzystania <list>
        << "    (23) - lista dwukierunkowa z wykorzystaniem szablonu <list>\n" // opcja dla listy z wykorzystaniem <list>
        << "    (24) - kolejka jednokierunkowa\n" // opcja dla kolejki bez wykorzystania szablonu <queue>
        << "    (25) - kolejka jednokierunkowa z wykorzystaniem szablonu <queue>\n" // opcja dla kolejki z wykorzystaniem szablonu <queue>
        << "    (26) - kolejka dwukierunkowa\n" // opcja dla kolejki dwukierunkowej bez wykorzystania szablonu <deque>
        << "    (27) - kolejka dwukierunkowa z wykorzystaniem <deque>\n" // opcja dla kolejki dwukierunkowej z wykorzystaniem szablonu <deque>
        << "STOSY I KOPCE:\n"
        << "    (30) - stos\n" // opcja dla stosu bez wykorzystania <stack>
        << "    (31) - stos z wykorzystaniem szablonu <stack>\n" // opcja dla stosu z wykorzystaniem <stack>
        << "    (32) - kopiec binarny\n" // opcja dla kopca binarnego
        << "MAPY:\n"
        << "    (40) - mapa\n" // opcja dla mapy bez wykorzystania szablonu <map>
        << "    (41) - mapa z wykorzystaniem szablonu <map>\n" // opcja dla mapy z wykorzystaniem szablonu <map>
        << "    (42) - mapa nieuporzadkowana\n" // opcja dla mapy nieuporzadkowanej bez wykorzystania szablonu <unordered_map>
        << "    (43) - mapa nieuporzadkowana z wykorzystaniem szablonu <unordered_map>\n" // opcja dla mapy nieuporzadkowanej z wykorzystaniem szablonu <unordered_map>
        << "ZBIORY:\n"
        << "    (50) - zbior\n" // opcja dla zbioru bez wykorzystania szablonu <set>
        << "    (51) - zbior z wykorzystaniem szablonu <set>\n" // opcja dla zbioru z wykorzystaniem szablonu <set>
        << "    (52) - zbior nieuporzadkowany\n" // opcja dla nieuporzadkowanego zbioru bez wykorzystania szablonu <unordered_set>
        << "    (53) - zbior nieuporzadkowany z wykorzystaniem szablonu <unordered_set>\n" // opcja dla nieuporzadkowanego zbioru z wykorzystaniem szablonu <unordered_set>
        << "\n(0) - zakonczenie dzialania programu\n"; // opcja dla wyjscia z programu
}

/*
 * void mMainMenu()
 */
void cDataHandling::mMainMenu()
{
    do
    {
        mPrintMainMenu(); // wypisanie glownego menu
        std::cin >> vOption; // wczytanie opcji
        switch (vOption) // wybor opcji
        {
        case 0: break; // wybor zakonczenia dzialana programu
        // TABLICE I WEKTORY
        case 10: mMenuStaticOneDimensionTable(); break; // wybor dzialan na statycznej tablicy jednowymiarowej
        case 11: mMenuArrayOneDimension(); break; // wyborz dzialan na dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <array>
        case 12: mMenuStaticTwoDimensionTable(); break; // wybor dzialan dla statycznej tablicy dwuwymiarowej
        case 13: mMenuArrayTwoDimension(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <array>
        case 14: mMenuDynamicOneDimensionTable(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej
        case 15: mMenuVectorOneDimension(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
        case 16: mMenuDynamicTwoDimensionTable(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej
        case 17: mMenuVectorTwoDimension(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
        // LISTY I KOLEJKI
        case 20: mMenuForwardListMy(); break; // wybor dzialan na liscie jednokierunkowej bez wykorzystania szablonu <forward_list>
        case 21: mMenuForwardListTemplate(); break; // wybor dzialan na liscie jednokierunkowej z wykorzystaniem szablonu <forward_list>
        case 22: mMenuListMy(); break; // wybor dzialan na liscie bez wykorzystania szablonu <list>
        case 23: mMenuListTemplate(); break; // wybor dzialan na liscie z wykorzystaniem szablonu <list>
        case 24: mMenuQueueMy(); break; // wybor dzialan na kolejce bez wykorzystania szablonu <queue>
        case 25: mMenuQueueTemplate(); break; // wybor dzialan na kolejce z wykorzystaniem szablonu <queue>
        case 26: mMenuDequeMy(); break; // wybor dzialan na kolejce dwustronnej bez wykorzystania szablonu <deque>
        case 27: mMenuDequeTemplate(); break; // wybor dzialan na kolejce dwustronnej z wykorzystaniem szablonu <deque>
        // STOSY I KOPCE
        case 30: mMenuStackMy(); break; // wybor dzialan na stosie bez wykorzystania szablonu <stack>
        case 31: mMenuStackTemplate(); break; // wybor dzialan na stosie z wykorzystaniem szablonu <stack>
        case 32: mMenuHeapBinary(); break; // wybor dzialan na kopcu binarnym
        // MAPY
        case 40: mMenuMapMy(); break; // wybor dzialan na mapie bez wykorzystania szablonu <map>
        case 41: mMenuMapTemplate(); break; // wybor dzialan na mapie z wykorzystaniem szablonu <map>
        case 42: mMenuUnorderedMapMy(); break; // wybor dzialan na mapie nieuporzadkowanej bez wykorzystania szablonu <unordered_map>
        case 43: mMenuUnorderedMapTemplate(); break; // wybor dzialan na mapie nieuporzadkowanej z wykorzystaniem szablonu <unordered_map>
        // ZBIORY
        case 50: mMenuSetMy(); break; // wybor dzialan na zbiorze bez wykorzystania szablonu <set>
        case 51: mMenuSetTemplate(); break; // wybor dzialan na zbiorze z wykorzystaniem szablonu <set>
        case 52: mMenuUnorderedSetMy(); break; // wybor dzialan na zbiorze nieuporzadkowanym bez wykorzystania szablonu <unordered_set>
        case 53: mMenuUnorderedSetTemplate(); break; // wybor dzialan na zbiorze nieuporzadkowanym z wykorzystaniem szablonu <unordered_set>
        // OPERACJA DOMYSLNA
        default: std::cout << "Nie ma takiej opcji!\n"; mMainMenu(); break; // komunikat o braku opcji
        }
        if (vOption != 0) // dodatkowe przejscie do kolejnego wyboru menu po dzialaniu jednej ze struktur
        {
            std::cout << "    Czy kontynuowac? (Wpisz cokolwiek i zatwierdz klawiszem Enter)\n"; // chwilowe "wstrzymanie" wyswietlonych wynikow
            std::cin >> vOption; // wczytanie nowej opcji
        }
    } while (vOption != 0); // sprawdzenie czy nie chcemy wyjsc z programu
}



/*
 * void mMenuStaticOneDimensionTable()
 */
void cDataHandling::mMenuStaticOneDimensionTable()
{
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry tablicy:\n"; // wczytywanie parametrow
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cStaticOneDimensionTable S(vDrawingRange); //utworzenie obiektu
    std::cout << "    Zawartosc tablicy:\n";
    S.mPrintTable(); // wypisanie zawartosci tablicy
    std::cout << "\n    Liczba elementow: " << S.getLengthTable() // wypisanie rozmiaru tablicy
        << "\n    Najmniejszy element: " << S.getMinElement() // wypisanie najmniejszego elementu tablicy
        << "\n    Najwiekszy element: " << S.getMaxElement() << "\n"; // wypisanie najwiekszego elementu tablicy
}

/*
 * mMenuArrayOneDimension()
 */
void cDataHandling::mMenuArrayOneDimension()
{
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry tablicy:" << "\n"; // wczytywanie parametrow
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cArrayOneDimension A(vDrawingRange); // utworzenie obiektu
    A.mPrintArray(); // wypisanie zawartosci tablicy
    std::cout << "\n    Liczba elementow: " << A.getLengthTable() // wypisanie rozmiaru tablicy
        << "\n    Najmniejszy element: " << A.getMinElement() // wypisanie najmniejszego elementu tablicy
        << "\n    Najwiekszy element: " << A.getMaxElement() << "\n"; // wypisanie najwiekszego elementu tablicy
}

/*
 * void mMenuStaticTwoDimensionTable()
 */
void cDataHandling::mMenuStaticTwoDimensionTable()
{
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry tablicy:\n" // wczytywanie parametrow
        << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cStaticTwoDimensionTable S(vDrawingRange); //utworzenie obiektu
    std::cout << "    Zawartosc tablicy: \n";
    S.mPrintTable(); // wypisanie zawartosci tablicy
    std::cout << "\n    Liczba wierszy: " << S.getRows() << "\n" // wypisanie liczby wierszy
        << "    Liczba kolumn: " << S.getColumns() << "\n" // wypisanie liczby kolumn
        << "    Najmniejszy element: " << S.getMinElement() << "\n" // wypisanie najmniejszego elementu tablicy
        << "    Najwiekszy element: " << S.getMaxElement() << "\n"; // wypisanie najwiekszego elementu tablicy
}

/*
 * void mMenuArrayTwoDimension()
 */
void cDataHandling::mMenuArrayTwoDimension()
{
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry tablicy:\n" // wczytywanie parametrow
        << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cArrayTwoDimension A(vDrawingRange); //utworzenie obiektu
    std::cout << "    Zawartosc tablicy: " << "\n";
    A.mPrintArray(); // wypisanie zawartosci tablicy
    std::cout << "\n    Liczba wierszy: " << A.getRows() << "\n" // wypisanie liczby wierszy
        << "    Liczba kolumn: " << A.getColumns() << "\n" // wypisanie liczby kolumn
        << "    Najmniejszy element: " << A.getMinElement() << "\n" // wypisanie najmniejszego elementu tablicy
        << "    Najwiekszy element: " << A.getMaxElement() << "\n"; // wypisanie najwiekszego elementu tablicy
}

/*
 * void mMenuDynamicOneDimensionTable()
 */
void cDataHandling::mMenuDynamicOneDimensionTable()
{
    typeLoop vLengthTable; // zmienna okreslajaca liczbe elementow tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry tablicy:\n" // wczytywanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vLengthTable; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicOneDimensionTable D(vLengthTable, vDrawingRange); //utworzenie obiektu
    std::cout << "\n    Liczba elementow: " << D.getLenthtTable() << "\n"; // wypisanie rozmiaru tablicy
    std::cout << "    Podaj nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy ostatni element...\n";
    D.mRemoveElement(); // usuwanie ostatniego elementu
    std::cout << "    Zawartosc tablicy: \n";
    D.mPrintTable(); // wypisanie zawartosci tablicy
    std::cout << "\n    Liczba elementow: " << D.getLenthtTable() << "\n" // wypisanie rozmiaru tablicy
        << "    Minimum: " << D.getMinElement() << "\n" // wypisanie minimum tablicy
        << "    Maximum: " << D.getMaxElement() << "\n"; // wypisanie maximum tablicy
}

/*
 * void mMenuVectorOneDimension()
 */
void cDataHandling::mMenuVectorOneDimension()
{
    typeLoop vLengthVector; // zmienna okreslajaca liczbe elementow wektora
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry wektora:\n" // wczytywanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vLengthVector; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cVectorOneDimension V(vLengthVector, vDrawingRange); //utworzenie obiektu
    std::cout << "\n    Liczba elementow: " << V.getVectorSize() << "\n"; // wypisanie rozmiaru wektora
    std::cout << "    Podaj nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    V.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    V.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy ostatni element...\n";
    V.mRemoveElement(); // usuwanie ostatniego elementu
    std::cout << "    Zawartosc wektora:\n";
    V.mPrintAllElements(); // wypisanie zawartosci wektora
    std::cout << "\n    Liczba elementow: " << V.getVectorSize() << "\n" // wypisanie rozmiaru wektora
        << "    Minimum: " << V.getMinElement() << "\n" // wypisanie minimum wektora
        << "    Maximum: " << V.getMaxElement() << "\n"; // wypisanie maximum wektora
}

/*
 * void mMenuDynamicTwoDimensionTable()
 */
void cDataHandling::mMenuDynamicTwoDimensionTable()
{
    typeLoop vRows, vColumns; // zmienne okreslajaca rozmiar tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry tablicy:\n" // wczytywanie parametrow
        << "    Liczba wierszy: ";
    std::cin >> vRows; // wczytanie liczby wierszy;
    std::cout << "    Liczba kolumn: ";
    std::cin >> vColumns; // wczytanie liczby kolumn
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicTwoDimensionTable D(vRows, vColumns, vDrawingRange); // utworzenie obiektu
    std::cout << "    Zawartosc tablicy:\n";
    D.mPrintAllElements(); // wypisanie zawartosci tablicy
    std::cout << "    Minimum: " << D.getMinElement() << "\n" // wypisanie minimum tablicy
        << "    Maximum: " << D.getMaxElement() << "\n"; // wypisanie maximum tablicy
}

/*
 * void mMenuVectorTwoDimension()
 */
void cDataHandling::mMenuVectorTwoDimension()
{
    typeLoop vRows, vColumns; // zmienne okreslajaca rozmiar wektora wektorow
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    std::cout << "Okresl parametry wektora:\n" // wczytywanie parametrow
        << "    Liczba wierszy: ";
    std::cin >> vRows; // wczytanie liczby wierszy;
    std::cout << "    Liczba kolumn: ";
    std::cin >> vColumns; // wczytanie liczby kolumn
    std::cout << "    Zakres liczb od 0 do...: ";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cVectorTwoDimension V(vRows, vColumns, vDrawingRange); // utworzenie obiektu
    std::cout << "    Zawartosc wektorow:\n";
    V.mPrintAllElements(); // wypisanie zawartosci wektorow
    std::cout << "    Minimum: " << V.getMinElement() << "\n" // wypisanie minimum wektora wektorow
        << "    Maximum: " << V.getMaxElement() << "\n"; // wypisanie maximum wektora wektorow
}



/*
 * void mMenuForwardListMy()
 */
void cDataHandling::mMenuForwardListMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow listy jednokierunkowej
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    //typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry listy jednokierunkowej\n" // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cForwardListMy F/*(vSize, vDrawingRange)*/; // utworzenie obiektu
    //std::cout << "    Podaj nowy element do dodania na koniec listy jednokierunkowej: ";
    //std::cin >> vElement; // wczytanie wartosci nowego elementu
    //F.mAddElementToEnd(vElement); // dodanie nowego elementu
    //std::cout << "    Podaj jeszcze jeden nowy element do dodania na koniec listy jednokierunkowej: ";
    //std::cin >> vElement; // wczytanie wartosci nowego elementu
    //F.mAddElementToEnd(vElement); // dodanie nowego elementu
    //std::cout << "    Usuwamy element z poczatku...\n";
    //F.mRemoveElementFromBegin(); // usuwanie pierwszego elementu
    //std::cout << "    Usuwamy element z konca...\n";
    //F.mRemoveElementFromEnd(); // usuwanie ostatniego elementu
    std::cout << "\n    Liczba elementow: " << F.getListSize() << "\n"; // wypisanie rozmiaru listy jednokierunkowej
    std::cout << "    Zawartosc listy jednokierunkowej:\n";
    F.mPrintAllElements(); // wypisanie zawartosci listy jednokierunkowej
}

/*
 * void mMenuForwardListTemplate()
 */
void cDataHandling::mMenuForwardListTemplate()
{
    //
}

/*
 * void mMenuListMy()
 */
void cDataHandling::mMenuListMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry listy" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cListMy L(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
    std::cout << "    Podaj nowy element do dodania na koniec listy: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania na koniec listy: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    std::cout << "    Usuwamy pierwszy element..." << std::endl;
    L.mRemoveElementFromBegin(); // usuwanie pierwszego elementu
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
    std::cout << "    Zawartosc listy: " << std::endl;
    L.mPrintAllElements(); // wypisanie zawartosci listy
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
}

/*
 * void mMenuListTemplate()
 */
void cDataHandling::mMenuListTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry listy" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cListTemplate L(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
    std::cout << "    Podaj nowy element do dodania na koniec listy: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania na koniec listy: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    L.mAddElementToEnd(vElement); ; // dodanie nowego elementu
    std::cout << "    Usuwamy pierwszy element..." << std::endl;
    L.mRemoveElementFromBegin(); // usuwanie pierwszego elementu
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
    std::cout << "    Zawartosc listy: " << std::endl;
    L.mPrintAllElements(); // wypisanie zawartosci listy
    std::cout << std::endl << "    Liczba elementow: " << L.getListSize() << std::endl; // wypisanie rozmiaru listy
}

/*
 * void mMenuQueueMy()
 */
void cDataHandling::mMenuQueueMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry kolejki" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cQueueMy Q(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
    std::cout << "    Podaj nowy element do dodania do kolejki: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do kolejki: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element..." << std::endl;
    Q.mRemoveElement(); // usuniecie elementu z kolejki
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
    std::cout << "    Zawartosc kolejki: " << std::endl;
    Q.mPrintAllElements(); // wypisanie zawartosci kolejki
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
}

/*
 * void mMenuQueueTemplate()
 */
void cDataHandling::mMenuQueueTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry kolejki" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cQueueTemplate Q(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
    std::cout << "    Podaj nowy element do dodania do kolejki: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do kolejki: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    Q.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element..." << std::endl;
    Q.mRemoveElement(); // usuniecie elementu z kolejki
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
    std::cout << "    Zawartosc kolejki: " << std::endl;
    Q.mPrintAllElements(); // wypisanie zawartosci kolejki
    std::cout << std::endl << "    Liczba elementow: " << Q.getQueueSize() << std::endl; // wypisanie rozmiaru kolejki
}

/*
 * void mMenuDequeMy()
 */
void cDataHandling::mMenuDequeMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki dwukierunkowej
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry kolejki dwukierunkowej" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cDequeMy D(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
    std::cout << "    Podaj nowy element do dodania na koniec kolejki dwukierunkowej: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania na koniec kolejki dwukierunkowej: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy ostatni element..." << std::endl;
    D.mRemoveElementFromEnd(); // usuniecie elementu z kolejki dwukierunkowej
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
    std::cout << "    Zawartosc kolejki dwukierunkowej: " << std::endl;
    D.mPrintAllElements(); // wypisanie zawartosci kolejki dwukierunkowej
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
}

/*
 * void mMenuDequeTemplate()
 */
void cDataHandling::mMenuDequeTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kolejki dwukierunkowej
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry kolejki dwukierunkowej" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cDequeTemplate D(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
    std::cout << "    Podaj nowy element do dodania na koniec kolejki dwukierunkowej: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania na koniec kolejki dwukierunkowej: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    D.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy ostatni element..." << std::endl;
    D.mRemoveElementFromEnd(); // usuniecie elementu z kolejki dwukierunkowej
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
    std::cout << "    Zawartosc kolejki dwukierunkowej: " << std::endl;
    D.mPrintAllElements(); // wypisanie zawartosci kolejki dwukierunkowej
    std::cout << std::endl << "    Liczba elementow: " << D.getDequeSize() << std::endl; // wypisanie rozmiaru kolejki dwukierunkowej
}



/*
 * void mMenuStackMy()
 */
void cDataHandling::mMenuStackMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry stosu" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackMy S(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << "    Podaj nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element..." << std::endl;
    S.mRemoveElement(); // usuwanie ostatniego elementu
    std::cout << std::endl << "    Liczba elementow: " << S.getStackSize() << std::endl; // wypisanie rozmiaru stosu
    std::cout << "    Zawartosc stosu: " << std::endl;
    S.mPrintAllElements(); // wypisanie zawartosci stosu
    std::cout << std::endl << "    Liczba elementow: " << S.getStackSize() << std::endl; // wypisanie rozmiaru stosu
}

/*
 * void mMenuStackTemplate()
 */
void cDataHandling::mMenuStackTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry stosu" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres liczb od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackTemplate S(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << "    Podaj nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element..." << std::endl;
    S.mRemoveElement(); // usuwanie ostatniego elementu
    std::cout << std::endl << "    Liczba elementow: " << S.getStackSize() << std::endl; // wypisanie rozmiaru stosu
    std::cout << "    Zawartosc stosu: " << std::endl;
    S.mPrintAllElements(); // wypisanie zawartosci wektora
    std::cout << std::endl << "    Liczba elementow: " << S.getStackSize() << std::endl; // wypisanie rozmiaru stosu
}

/*
 * void mMenuHeapBinary()
 */
void cDataHandling::mMenuHeapBinary()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow kopca binarnego
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry kopca binarnego" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres wartosci od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cHeapBinary H(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << H.getHeapSize() << std::endl; // wypisanie rozmiaru kopca binarnego
    std::cout << "    Podaj nowy element do dodania na koncu kopca binarnego: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    H.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania na koncu kopca binarnego: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    H.mAddElementToEnd(vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element z korzenia..." << std::endl;
    H.mRemoveRootHeap(); // usuniecie elementu z kopca binarnego
    std::cout << std::endl << "    Liczba elementow: " << H.getHeapSize() << std::endl; // wypisanie rozmiaru kopca binarnego
    std::cout << "    Zawartosc kopca binarnego: " << std::endl;
    H.mPrintAllElements(); // wypisanie zawartosci kopca binarnego
}



/*
 * void mMenuMapMy()
 */
void cDataHandling::mMenuMapMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow mapy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry mapy" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres wartosci od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cMapMy M(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << M.getMapSize() << std::endl; // wypisanie rozmiaru mapy
    std::cout << "    Podaj nowy element do dodania do mapy (klucz domyslny): ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(97 + vSize), vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do mapy (klucz domyslny): ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(98 + vSize), vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element z najmniejszym kluczem..." << std::endl;
    M.mRemoveElement((char)97); // usuniecie elementu z mapy
    std::cout << std::endl << "    Liczba elementow: " << M.getMapSize() << std::endl; // wypisanie rozmiaru mapy
    std::cout << "    Zawartosc mapy: " << std::endl;
    M.mPrintAllElements(); // wypisanie zawartosci mapy
}

/*
 * void mMenuMapTemplate()
 */
void cDataHandling::mMenuMapTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow mapy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry mapy" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres wartosci od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cMapTemplate M(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << M.getMapSize() << std::endl; // wypisanie rozmiaru mapy
    std::cout << "    Podaj nowy element do dodania do mapy (klucz domyslny): ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(97 + vSize), vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do mapy (klucz domyslny): ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    M.mAddElement((char)(98 + vSize), vElement); // dodanie nowego elementu
    std::cout << "    Usuwamy element z najmniejszym kluczem..." << std::endl;
    M.mRemoveElement((char)97); // usuniecie elementu z mapy
    std::cout << std::endl << "    Liczba elementow: " << M.getMapSize() << std::endl; // wypisanie rozmiaru mapy
    std::cout << "    Zawartosc mapy: " << std::endl;
    M.mPrintAllElements(); // wypisanie zawartosci mapy
}

/*
 * void mMenuUnorderedMapMy()
 */
void cDataHandling::mMenuUnorderedMapMy()
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
 * void mMenuSetMy()
 */
void cDataHandling::mMenuSetMy()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow zbioru
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry zbioru" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres wartosci od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cSetMy S(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << S.getSetSize() << std::endl; // wypisanie rozmiaru zbioru
    std::cout << "    Podaj nowy element do dodania do zbioru: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do zbioru: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << std::endl << "    Liczb elementow: " << S.getSetSize() << std::endl; // wypisanie rozmiaru zbioru
    std::cout << "    Zawartosc zbioru: " << std::endl;
    S.mPrintAllElements(); // wypisanie zawartosci zbioru
}

/*
 * void mMenuSetTemplate()
 */
void cDataHandling::mMenuSetTemplate()
{
    typeLoop vSize; // zmienna okreslajaca liczbe elementow zbioru
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    std::cout << "Okresl parametry zbioru" << std::endl // wczytanie parametrow
        << "    Liczba elementow: ";
    std::cin >> vSize; // wczytanie liczby elementow
    std::cout << "    Zakres wartosci od 0 do...";
    std::cin >> vDrawingRange; // wczytanie granicy zakresu
    cSetTemplate S(vSize, vDrawingRange); // utworzenie obiektu
    std::cout << std::endl << "    Liczba elementow: " << S.getSetSize() << std::endl; // wypisanie rozmiaru zbioru
    std::cout << "    Podaj nowy element do dodania do zbioru: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << "    Podaj jeszcze jeden nowy element do dodania do zbioru: ";
    std::cin >> vElement; // wczytanie wartosci nowego elementu
    S.mAddElement(vElement); // dodanie nowego elementu
    std::cout << std::endl << "    Liczb elementow: " << S.getSetSize() << std::endl; // wypisanie rozmiaru zbioru
    std::cout << "    Zawartosc zbioru: " << std::endl;
    S.mPrintAllElements(); // wypisanie zawartosci zbioru
}

/*
 * void mMenuUnorderedSetMy()
 */
void cDataHandling::mMenuUnorderedSetMy()
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

/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
