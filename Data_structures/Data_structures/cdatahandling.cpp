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
         << "(1) - dynamiczna tablica jednowymiarowa" << endl // opcja dla dynamicznej tablicy jednowymiarowej
         << "(2) - dynamiczna tablica dwuwymiarowa" << endl // opcja dla dynamicznej tablicy dwuwymiarowej
         << "(3) - stos w oparciu o szablon <stack>" << endl // opcja dla stosu z wykorzystaniem <stack>
         << "(4) - stos bez wykorzystania szablonu <stack>" << endl // opcja dla stosu bez wykorzystania <stack>
         << "(5) - lista z wykorzystaniem szblonu <list>" << endl // opcja dla listy z wykorzystaniem <list>
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
            case 1 : mMenuDynamicOneDimensionTable(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej
            case 2 : mMenuDynamicTwoDimensionTable(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej
            case 3 : mMenuStackTemplate(); break; // wybor dzialan na stosie w oparciu o szablon <stack>
            case 4 : mMenuStackMy(); break; // wybor dzialan na stosie bez wykorzystania szablonu <stack>
            case 5 : mMenuListTemplate(); break; // wybor dzialan na stosie z wykorzystaniem szablonu <list>
            default : cout << "Nie ma takiej opcji!" << endl; mMainMenu(); break; // komunikat o braku opcji
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
    typeLoop vColumns, vRows; // zmienne okreslajace wymiary tablicy
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

/*
 * void mMenuStackTemplate()
 */
void cDataHandling::mMenuStackTemplate()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackTemplate S(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuStackMy()
 */
void cDataHandling::mMenuStackMy()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackMy S(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuListTemplate()
 */
void cDataHandling::mMenuListTemplate()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres elementow
    cout << "Okresl parametry listy" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cListTemplate L(vElements, vDrawingRange); // utworzenie obiektu
}


/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
