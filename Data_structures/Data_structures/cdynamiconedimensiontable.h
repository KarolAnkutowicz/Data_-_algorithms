/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdynamiconedimensiontable.h
 */

#ifndef CDYNAMICONEDIMENSIONTABLE_H
#define CDYNAMICONEDIMENSIONTABLE_H

#include "constantsandtypes.h"

using namespace std;

/*
 *
 */
class cDynamicOneDimensionTable
{
/********** PRIVATE: BEGINNING **********/

    /*
     *
     */
    typeData *tabElements;

    /*
     *
     */
    typeLoop vLengthTable;

    /*
     *
     */
    typeData vDrawingRange;

    /*
     *
     */
    typeData vMinElement;

    /*
     *
     */
    typeData vMaxElement;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGINNING **********/
public:

    /*
     *
     */
    cDynamicOneDimensionTable();

    /*
     *
     */
    cDynamicOneDimensionTable(typeLoop aLengthTable);

    /*
     *
     */
    cDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange);



    /*
     *
     */
    typeData getElement(typeLoop aIndex);

    /*
     *
     */
    typeLoop getLenthtTable();

    /*
     *
     */
    typeData getDrawingRange();

    /*
     *
     */
    typeData getMinElement();

    /*
     *
     */
    typeData getMaxElement();



    /*
     *
     */
    void mDrawElements();

    /*
     *
     */
    void mFindMinElement();

    /*
     *
     */
    void mFindMaxElement();

    /*
     *
     */
    void mPrintTable();
    /********** PUBLIC: END **********/
};

#endif // CDYNAMICONEDIMENSIONTABLE_H

/* cdynamiconedimensiontable.h */
/********** END_OF_FILE **********/
