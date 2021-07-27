/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuetemplate.h
 */

#ifndef CQUEUETEMPLATE_H
#define CQUEUETEMPLATE_H

#include "constantsandtypes.h"
#include <queue>

using namespace std;

/*
 * class cQueueTemplate - klasa modelujaca kolejke
 * z wykorzystaniem szablonu <queue>.
 */
class cQueueTemplate
{
/********** PRIVATE: BEGIN **********/

    /*
     * queue <typeData> QueueTemplate - kolejka
     * elementow typu typeData.
     */
    queue <typeData> QueueTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow kolejki.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:
    cQueueTemplate();

/********** PUBLIC: END **********/
};

#endif // CQUEUETEMPLATE_H

/* cqueuetemplate.h */
/********** END_OF_FILE **********/
