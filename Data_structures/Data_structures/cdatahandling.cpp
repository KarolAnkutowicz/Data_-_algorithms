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
    mMainMenu();
}

/*
 * void mMainMenu()
 */
void cDataHandling::mMainMenu()
{
    cout << "Wybierz opcje:" << endl
         << "(0) - dynamiczna tablica jednowymiarowa" << endl;
    cin >> vOption;
    switch(vOption)
    {
    case 0 : mMenuDynamicOneDimensionTable(); break;
    default : cout << "Nie ma takiej opcji!" << endl; mMainMenu(); break;
    }
}

/*
 * void mMenuDynamicOneDimensionTable()
 */
void cDataHandling::mMenuDynamicOneDimensionTable()
{
    typeLoop vLengthTable;
    typeData vDrawingRange;
    cout << "Okresl parametry tablicy:" << endl
         << "    Liczba elementow: ";
    cin >> vLengthTable;
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange;
    cDynamicOneDimensionTable D(vLengthTable, vDrawingRange);
}



/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
