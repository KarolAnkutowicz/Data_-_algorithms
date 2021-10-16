/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: celementmy.cpp
 */

#include "celementmy.h"

using namespace std;

/********** PUBLICE: BEGINNING **********/

/*
 * cElementMy()
 */
cElementMy::cElementMy()
{
    vValue = 0; // ustanowienie wartosci elementu
    vNext = NULL; // ustanawiamy brak wskazania na nastepny element
}

/*
 * cElementMy(typeData aValue)
 */
cElementMy::cElementMy(typeData aValue)
{
    vValue = aValue; // ustanowienie wartosci elementu
    vNext = NULL; // ustanawiamy brak wskazania na nastepny element
}

/*
 * cElementMy(typeData aValue, cElementMy *aNext)
 */
cElementMy::cElementMy(typeData aValue, cElementMy *aNext)
{
    vValue = aValue; // ustanowienie wartosci elementu
    vNext = aNext; // ustanawiamy wskaznik na nastepny element
}

/*
 * ~cElementMy() - destruktor klasy cElementMy
 */
cElementMy::~cElementMy()
{
    vNext = NULL; // zniszczenie powiazania z nastepnym elementem
    delete vNext; // zwalnianie zasobow
}

/********** PUBLIC: END **********/

/* celementmy.cpp */
/********** END_OF_FILE **********/
