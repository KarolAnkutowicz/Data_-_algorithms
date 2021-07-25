/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clisttemplate.h
 */

#ifndef CLISTTEMPLATE_H
#define CLISTTEMPLATE_H

#include "constantsandtypes.h"
#include <list>

using namespace std;

/*
 * cListTemplate - klasa modelujaca liste w oparciu
 * o szablon <list>.
 */
class cListTemplate
{
/********** PRIVATE: BEGINNING **********/

    /*
     * list <typeData> ListTemplate - lista przechowujaca
     * elementy typu typeData.
     */
    list <typeData> ListTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:
    cListTemplate();

/********** PUBLIC: END **********/
};

#endif // CLISTTEMPLATE_H

/* clisttemplate.h */
/********** END_OF_FILE **********/
