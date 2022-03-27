/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cforwardlisttemplate.cpp
 */

#include "cforwardlisttemplate.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cForwardListTemplate()
 */
cForwardListTemplate::cForwardListTemplate()
{
	vDrawingRange = 0; // ustanowienie zakresu losowania elementow
	vSize = 0; // ustanowienie liczby elementow listy jednokierunkowej
}

/*
 * cForwardListTemplate(typeLoop aSize)
 */
cForwardListTemplate::cForwardListTemplate(typeLoop aSize)
{
	vDrawingRange = 0; // ustanowienie zakresu losowania elementow
	vSize = 0; // ustanowienie liczby elementow listy jednokierunkowej
	mDrawElements(aSize); // wywolanie losowania elementow
}

/*
 * cForwardListTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cForwardListTemplate::cForwardListTemplate(typeLoop aSize, typeData aDrawingRange)
{
	vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
	vSize = 0; // ustanowienie liczby elementow listy jednokierunkowej
	mDrawElements(aSize); // wywolanie losowania elementow
}



/*
 * void mAddElement(typeData aElement)
 */
void cForwardListTemplate::mAddElement(typeData aElement)
{
	ForwardListTemplate.push_front(aElement); // dodanie elementu na poczatek listy jednokierunkowej
	vSize++; // zwiekszenie rozmiaru listy jednokierunkowej
}

/*
 * bool mRemoveElement()
 */
bool cForwardListTemplate::mRemoveElement()
{
	if (getListIsEmpty() == true) // jesli lista jest pusta
		return false; // to nie mamy co usuwac
	else // jesli na liscie jest cokolwiek
	{
		ForwardListTemplate.pop_front(); // usuniecie elementu z poczatku listy
		vSize--; // zmniejszenie rozmiaru listy jednokierunkowej
		return true; // zwrocenie informacji o powodzeniu usuniecia elementu
	}
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cForwardListTemplate::mDrawElements(typeLoop aSize)
{
	srand(time_t(NULL)); // ustanowienie zmiennej losowej
	for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
		mAddElement(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintFirstElement()
 */
void cForwardListTemplate::mPrintFirstElement()
{
	if (getListIsEmpty() == true) // jesli lista jest pusta
		std::cout << "Lista jest pusta!\n"; // wypisanie odpowiedniego komunikatu
	else // jesli na liscie jest cokolwiek
		std::cout << ForwardListTemplate.front() << "\n"; // wypisujemy pierwszy element
}

/*
 * void mPrintAllElements()
 */
void cForwardListTemplate::mPrintAllElements()
{
	if (getListIsEmpty() == true) // jesli lista jest pusta
		std::cout << "Lista jest pusta!\n"; // wypisanie odpowiedniego komunikatu
	else // jesli na liscie jest cokolwiek
	{
		for (typeData& x : ForwardListTemplate) // przejscie po wszystkich elementach
			std::cout << x << " "; // wypisanie kolejnego elementu
		std::cout << "\n"; // przejscie do nowej linii po wypisaniu zawartosci listy jednokierunkowej
	}
}

/********** PUBLIC: END **********/

/* cforwardlisttemplate.cpp */
/********** END_OF_FILE **********/
