/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectoronedimension.h
 */

#ifndef CVECTORONEDIMENSION_H
#define CVECTORONEDIMENSION_H

#include "constantsandtypes.h"
#include <vector>

using namespace std;

/*
 * cVectorOneDimension() - klasa modelujaca tablice
 * jednowymiarowa (wektor) z wykorzystaniem szablonu
 * <vector>.
 */
class cVectorOneDimension
{
/********** PRIVATE: BEGIN **********/

    /*
     * vector <typeData> VectorElements - wektor
     * przechowujacy elementy typu TypeData.
     */
    vector <typeData> VectorElements;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow wektora.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:
    cVectorOneDimension();

/********** PUBLIC: END **********/
};

#endif // CVECTORONEDIMENSION_H

/* cvectoronedimension.h */
/********** END_OF_FILE **********/
