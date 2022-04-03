/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedsettemplate.cpp
 */

#include "cunorderedsettemplate.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cUnorderedSetTemplate()
 */
cUnorderedSetTemplate::cUnorderedSetTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cUnorderedSetTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cUnorderedSetTemplate::cUnorderedSetTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * bool mRemoveElement(typeData aValue)
 */
bool cUnorderedSetTemplate::mRemoveElement(typeData aValue)
{
    for (std::unordered_set<int>::iterator it = UnorderedSetTemplate.begin(); it != UnorderedSetTemplate.end(); it++) // przejscie po wszystkich elememntach zbioru
    {
        if (*it == aValue) // sprawdzenie czy wartosc jest ta wskazana
        {
            UnorderedSetTemplate.erase(it); // usuniecie elementu
            return true; // zwrocenie informacji o powodzeniu usuniecia elementu
        }
    }
    return false; // zwrocenie informacji o niepowodzeniu usuniecia elementu
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cUnorderedSetTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintAllElements()
 */
void cUnorderedSetTemplate::mPrintAllElements()
{
    for (std::unordered_set<int>::iterator it = UnorderedSetTemplate.begin(); it != UnorderedSetTemplate.end(); it++) // przejscie po wszystkich elememntach zbioru
        std::cout << *it << " "; // wypisanie elementu
    std::cout << "\n"; // przejscie do nowej linii
}

/********** PUBLIC: END **********/

/* cunorderedsettemplate.cpp */
/********** END_OF_FILE **********/
