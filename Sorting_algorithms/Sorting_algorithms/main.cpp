/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: main.cpp
 */

#include "ctable.h"
#include <iostream>

using namespace std;

int main()
{
    cTable T(10, 10, 10);
    T.mPrintTable();
    for (typeLoop i = 0; i < T.getLength(); i++)
        T.mBubbleSort(i);
    cout << endl;
    T.mPrintTable();

    return 0;
}

/* main.cpp */
/********** END_OF_FILE **********/
