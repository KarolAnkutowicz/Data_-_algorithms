/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cmaptemplate.cpp
 */

#include "cmaptemplate.hpp"

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cMapTemplate()
 */
cMapTemplate::cMapTemplate()
{
    vDrawingRangeValue = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cMapTemplate(typeLoop aSize)
 */
cMapTemplate::cMapTemplate(typeLoop aSize)
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
 * cMapTemplate(typeLoop aSize)
 */
cMapTemplate::cMapTemplate(typeLoop aSize, typeData aDrawingRangeValue)
{
    vDrawingRangeValue = aDrawingRangeValue; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * typeData getElement(typeKey aKey)
 */
typeData cMapTemplate::getElement(typeKey aKey)
{
    for (map<typeKey, typeData>::iterator it = MapTemplate.begin(); it != MapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
    {
        if ((it->first) == aKey) // sprawdzenie czy znajdujemy poszukiwany klucz
            return MapTemplate[aKey]; // w przypadku znalezienia - zwracamy wskazany element
    }
    return NULL; // w przypadku braku nie mamy co zwrocic
}



/*
 * bool mRemoveElement(typeKey aKey)
 */
bool cMapTemplate::mRemoveElement(typeKey aKey)
{
    for (map<typeKey, typeData>::iterator it = MapTemplate.begin(); it != MapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
    {
        if ((it->first) == aKey) // sprawdzenie czy znajdujemy poszukiwany klucz
        {
            MapTemplate.erase(it); // w przypadku znalezienia - usuwamy wskazany element
            return true; // zwracamy informacje o powodzeniu usuniecia elementu
        }
    }
    return false; // w przypadku braku elementu w mapie o wskazanym kluczu zwracamy informacje o niepowodzeniu usuniecia elementu
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cMapTemplate::mDrawElements(typeLoop aSize)
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
void cMapTemplate::mPrintAllElements()
{
    for (map<typeKey, typeData>::iterator it = MapTemplate.begin(); it != MapTemplate.end(); it++) // przejscie po wszystkich elementach mapy
        cout << "[" << it->first << "]=" << it->second << endl; // wypisanie kolejnego elementu
}

/********** PUBLIC: END **********/

/* cmaptemplate.cpp */
/********** END_OF_FILE **********/
