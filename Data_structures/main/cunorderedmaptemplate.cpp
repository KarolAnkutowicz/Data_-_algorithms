/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cunorderedmaptemplate.cpp
 */

#include "cunorderedmaptemplate.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cUnorderedMapTemplate()
 */
cUnorderedMapTemplate::cUnorderedMapTemplate()
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cUnorderedMapTemplate()
 */
cUnorderedMapTemplate::cUnorderedMapTemplate(typeLoop aSize)
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
    typeLoop vChar; // utworzenie zmiennej wykorzystywanej do tworzenia kluczy
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
    {
        vChar = i + 97; // przesuniecie wartosci na male litery w tablicy kodow ASCII
        mAddElement((char)vChar, 0); // dodanie nowego elementu
    }
}

/*
 * cUnorderedMapTemplate()
 */
cUnorderedMapTemplate::cUnorderedMapTemplate(typeLoop aSize, typeData aDrawingRangeValue)
{
    vDrawingRangeValue = aDrawingRangeValue; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cUnorderedMapTemplate::getElement(typeKey aKey)
{
    for (std::unordered_map<typeKey, typeData>::iterator it = UnorderedMapTemplate.begin(); it != UnorderedMapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
    {
        if ((it->first) == aKey) // sprawdzenie czy znajdujemy poszukiwany klucz
            return UnorderedMapTemplate[aKey]; // w przypadku znalezienia - zwracamy wskazany element
    }
    return NULL; // w przypadku braku nie mamy co zwrocic
}



/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cUnorderedMapTemplate::mRemoveElement(typeKey aKey)
{
    for (std::unordered_map<typeKey, typeData>::iterator it = UnorderedMapTemplate.begin(); it != UnorderedMapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
    {
        if ((it->first) == aKey) // sprawdzenie czy znajdujemy poszukiwany klucz
        {
            UnorderedMapTemplate.erase(it); // w przypadku znalezienia - usuwamy wskazany element
            return true; // zwracamy informacje o powodzeniu usuniecia elementu
        }
    }
    return false; // w przypadku braku elementu w mapie o wskazanym kluczu zwracamy informacje o niepowodzeniu usuniecia elementu
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cUnorderedMapTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    typeLoop vChar; // utworzenie zmiennej wykorzystywanej do tworzenia kluczy
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
    {
        vChar = i + 97; // przesuniecie wartosci na male litery w tablicy kodow ASCII
        mAddElement((char)vChar, rand() % vDrawingRangeValue); // dodanie nowego elementu
    }
}



/*
 * void mPrintAllElements()
 */
void cUnorderedMapTemplate::mPrintAllElements()
{
    for (std::unordered_map<typeKey, typeData>::iterator it = UnorderedMapTemplate.begin(); it != UnorderedMapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
        std::cout << "[" << it->first << "]=" << it->second << "\n"; // wypisanie kolejnego elementu
}

/********** PUBLIC: END **********/

/* cunorderedmaptemplate.cpp */
/********** END_OF_FILE **********/
