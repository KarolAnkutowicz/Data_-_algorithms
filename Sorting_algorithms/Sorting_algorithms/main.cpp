/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: main.cpp
 */

#include "ctable.h"
//#include <iostream>

using namespace std;

int main()
{
    //clock_t vTime;
    cTable T(10, 10, 10); // utworzenie obiektu
    //T.mPrintSeries(0);
    T.mPrintTable(); // wypisanie tablicy
    //vTime = clock();
    for (typeLoop i = 0; i < T.getLength(); i++) // przejscie po wszystkich seriach
        T.mHeapsort(i); // wywolanie sortowania przez kopcowanie dla danej serii
        //T.mCombSort(i); // wywolanie sortowania grzebieniowego dla danej serii
        //T.mSelectionSort(i); // wywolanie sortowania przez wybieranie dla danej serii
        //T.mCountingSort(i); // wywolanie sortowania przez zliczanie dla danej serii
        //T.mInsertionSort(i); // wywolanie sortowania przez wstawianie dla danej serii
        //T.mBubbleSort(i); // wywolanie sortowania babelkowego dla danej serii
    //vTime = clock() - vTime;
    cout << endl;
    //T.mPrintSeries(0);
    T.mPrintTable(); // wypisanie posortowanych serii
    //cout << setprecision(5) << /*double(*/vTime/*/CLOCKS_PER_SEC)*/ << endl;

    return 0;
}

/* main.cpp */
/********** END_OF_FILE **********/
