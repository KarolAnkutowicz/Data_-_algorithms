/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstacktmy.h
 */

#ifndef CSTACKMY_H
#define CSTACKMY_H

#include "constantsandtypes.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * cStackMy - klasa modelujaca strukture stosu
 * bez pomocy szablonu "stack".
 */
class cStackMy
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData *StackMy - tablica przechowujaca elementy
     * stosu typu typeData.
     */
    typeData *StackMy;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar stosu.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - zakres losowania elementow
     * stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    cStackMy();

/********** PUBLIC: END **********/
};

#endif // CSTACKMY_H

/* cstackmy.h */
/********** END_OF_FILE **********/
