/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmyelement.h
 */

#include "clistmyelement.h"

using namespace std;

/********** PUBLICE: BEGINNING **********/

/*
 * cListMyElement()
 */
cListMyElement::cListMyElement()
{
    vValue = 0; // ustanowienie wartosci elementu
    vNext = NULL; // ustanawiamy brak wskazania na nastepny element
}

/*
 * cListMyElement()
 */
cListMyElement::cListMyElement(typeData aValue)
{
    vValue = aValue; // ustanowienie wartosci elementu
    vNext = NULL; // ustanawiamy brak wskazania na nastepny element
}

/*
 * ~cListMyElement()
 */
cListMyElement::~cListMyElement()
{
    vNext = NULL; // zniszczenie powiazania z nastepnym elementem
    delete vNext; // zwalnianie zasobow
}



/********** PUBLIC: END **********/

/* clistmyelement.h */
/********** END_OF_FILE **********/
