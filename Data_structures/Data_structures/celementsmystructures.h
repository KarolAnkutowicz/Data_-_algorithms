/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: celementmystructures.h
 */

#ifndef CELEMENTSMYSTRUCTURES_H
#define CELEMENTSMYSTRUCTURES_H

#include "constantsandtypes.h"

using namespace std;

class cElementListAndDeque
{
    typeData vValue;
    cElementListAndDeque *vPrevious;
    cElementListAndDeque *vNext;
public:
    cElementListAndDeque(typeData aValue);
    typeData getValue();
    cElementListAndDeque * getPrevious();
    cElementListAndDeque * getNext();
};

class cElementForwardListAndQueue
{
    typeData vValue;
    cElementListAndDeque *vNext;
public:
    cElementListAndDeque(typeData aValue);
    typeData getValue();
    cElementListAndDeque * getNext();
};

class cElementMapAndSet
{
    typeKey vKey;
    typeData vValue;
public:
    cElementMapAndSet(typeKey aKey, typeData aValue);
    typeData getValue(typeKey aKey);
};


#endif // CELEMENTSMYSTRUCTURES_H

/* celementmystructures.h */
/********** END_OF_FILE **********/
