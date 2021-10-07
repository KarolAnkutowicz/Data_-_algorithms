/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmy.cpp
 */

#include "clistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cListMy()
 */
cListMy::cListMy()
{
    *ListMyBegin = NULL; // brak pierwszego elementu
    *ListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{

}

/*
 * cListMy(typeLoop aSize, typeData aDrawingRange)
 */
cListMy::cListMy(typeLoop aSize, typeData aDrawingRange)
{

}



/*
 * typeData getFirstElement()
 */
typeData cListMy::getFirstElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return ListMyBegin->getValue(); // zwracamy wartosc pierwszego elementu
}

/*
 * typeData getLastElement()
 */
typeData cListMy::getLastElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return ListMyEnd->getValue(); // zwracamy wartosc ostatniego elementu
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cListMy::mAddElementToBegin(typeData aElement)
{

}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{

}

/*
 * bool mRemoveElementFromBegin()
 */
bool cListMy::mRemoveElementFromBegin()
{

}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListMy::mRemoveElementFromEnd()
{

}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListMy::mDrawElements(typeLoop aSize)
{

}



/*
 * void mPrintFirstElement()
 */
void cListMy::mPrintFirstElement()
{

}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{

}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{

}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
