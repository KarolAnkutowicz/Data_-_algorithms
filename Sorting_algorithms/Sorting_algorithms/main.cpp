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
    T.mPrintTable(); // wypisanie tablicy
    //vTime = clock();
    for (typeLoop i = 0; i < T.getLength(); i++) // przejscie po wszystkich seriach
        T.mInsertionSort(i); // wywolania sortowania przez wstawianie dla danej serii
        //T.mBubbleSort(i); // wywolanie sortowania babelkowego dla danej serii
    //vTime = clock() - vTime;
    cout << endl;
    T.mPrintTable(); // wypisanie posortowanych serii
    //cout << setprecision(5) << /*double(*/vTime/*/CLOCKS_PER_SEC)*/ << endl;

    return 0;
}

/* main.cpp */
/********** END_OF_FILE **********/
