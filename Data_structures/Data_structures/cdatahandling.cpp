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
 * void mMainMenu()
 */
void cDataHandling::mMainMenu()
{
    cout << endl << "Wybierz opcje:" << endl // menu glowne
         << "(0) - dynamiczna tablica jednowymiarowa" << endl // opcja dla dynamicznej tablicy jednowymiarowej
         << "(1) - dynamiczna tablica dwuwymiarowa" << endl; // opcja dla dynamicznej tablicy dwuwymiarowej
    cin >> vOption; // wczytanie opcji
    switch(vOption) // wybor opcji
    {
        case 0 : mMenuDynamicOneDimensionTable(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej
        case 1 : mMenuDynamicTwoDimensionTable(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej
        default : cout << "Nie ma takiej opcji!" << endl; mMainMenu(); break; // komunikat o braku opcji
    }
}

/*
 * void mMenuDynamicOneDimensionTable()
 */
void cDataHandling::mMenuDynamicOneDimensionTable()
{
    typeLoop vLengthTable; // zmienna okreslajaca dlugosc tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba elementow: ";
    cin >> vLengthTable; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicOneDimensionTable D(vLengthTable, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuDynamicTwoDimensionTable()
 */
void cDataHandling::mMenuDynamicTwoDimensionTable()
{
    typeLoop vColumns, vRows; // zmiennei okreslajace wymiary tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba kolumn: ";
    cin >> vColumns; // wczytanie liczby kolumn
    cout << "    Liczba wierszy: ";
    cin >> vRows; // wczytanie liczby wierszy
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicTwoDimensionTable D(vColumns, vRows, vDrawingRange); // utworzenie obiektu
}



/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
