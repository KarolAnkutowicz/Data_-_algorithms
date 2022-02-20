/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cheapbinary.cpp
 */

#include "cheapbinary.hpp"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cHeapBinary()
 */
cHeapBinary::cHeapBinary()
{
    HeapBinary = new typeData[1]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    HeapBinary[0] = NULL; // ustanowienie braku wartosci elementu
}

/*
 * cHeapBinary(typeLoop aSize)
 */
cHeapBinary::cHeapBinary(typeLoop aSize)
{
    HeapBinary = new typeData[aSize]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cHeapBinary(typeLoop aSize, typeData aDrawingRange)
 */
cHeapBinary::cHeapBinary(typeLoop aSize, typeData aDrawingRange)
{
    HeapBinary = new typeData[aSize]; // utworzenie nowej tablicy elementow
    vSize = 0; // ustanowienie rozmiaru kopca binarnego
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cHeapBinary()
 */
cHeapBinary::~cHeapBinary()
{
    delete[]HeapBinary; // zwalniania zasobow przydzielanych dynamicznie
}



/*
 * typeData getRootHeap()
 */
typeData cHeapBinary::getRootHeap()
{
    if (vSize != 0) // sprawdzamy czy kopiec boinarny nie jest pusty
        return HeapBinary[0]; // jesli nie jest to zwracamy pierwszy element
    else // jesli kopiec binarny jest pusty
        return NULL; // to nie mamy co zwracac
}

/*
 * typeData getLastElement()
 */
typeData cHeapBinary::getLastElement()
{
    if (vSize != 0) // sprawdzamy czy kopiec nie jest pusty
        return HeapBinary[vSize - 1]; // jesli nie jest to zwracamy ostatni element
    else // jesli kopiec jest pusty
        return NULL; // to nie mamy co zwracac
}



/*
 * typeLoop getParentIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getParentIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if (aIndex != 0) // sprawdzamy czy element nie jest korzeniem
            return (aIndex + 1) / 2 - 1; // jesli nie jest to zwracamy indeks rodzica
    }
    return NULL; // jesli kopiec binarny jest pusty lub element jest korzeniem to wowczas nie mamy co zwracac
}

/*
 * typeData getParentValue(typeLoop aIndex)
 */
typeData cHeapBinary::getParentValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if (aIndex != 0) // sprawdzamy czy element nie jest korzeniem
            return HeapBinary[(aIndex + 1) / 2 - 1]; // jesli nie jest to zwracamy wartosc rodzica
    }
    return NULL; // jesli kopiec binarny jest pusty lub element jest korzeniem to wowczas nie mamy co zwracac
}

/*
 * typeLoop getLeftKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getLeftKidIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 1) < vSize) // sprawdzamy czy element w ogole ma lewego potomka
            return (aIndex + 1) * 2 - 1; // jesli tak to zwracamy indeks lewego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma lewego potomka to wowczas nie mamy co zwracac
}

/*
 * typeData getLeftKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getLeftKidValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 1) < vSize) // sprawdzamy czy element w ogole ma lewego potomka
            return HeapBinary[(aIndex + 1) * 2 - 1]; // jesli tak to zwracamy wartosc lewego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma lewego potomka to wowczas nie mamy co zwracac
}

/*
 * typeLoop getRigthKidIndex(typeLoop aIndex)
 */
typeLoop cHeapBinary::getRigthKidIndex(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 2) < vSize) // sprawdzamy czy element w ogole ma prawego potomka
            return (aIndex + 1) * 2; // jesli tak to zwracamy indeks prawego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma prawego potomka to wowczas nie mamy co zwracac
}

/*
 * typeData getRigthKidValue(typeLoop aIndex)
 */
typeData cHeapBinary::getRigthKidValue(typeLoop aIndex)
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
    {
        if ((aIndex * 2 + 2) < vSize) // sprawdzamy czy element w ogole ma prawego potomka
            return HeapBinary[(aIndex + 1) * 2]; // jesli tak to zwracamy wartosc prawego potomka
    }
    return NULL; // jesli kopiec binarny jest pusty lub element nie ma prawego potomka to wowczas nie mamy co zwracac
}

/*
 * typeLoop getLevels()
 */
typeLoop cHeapBinary::getLevels()
{
    if (vSize != 0) // sprawdzamy czy kopiec binarny nie jest pusty
        return (typeLoop)log10(vSize); // zwracamy wyznaczona liczbe poziomow drzewa, lacznie z ewentualnym ostatnim, niepelnym
    return NULL; // jesli kopiec binarny jest pusty wowczas nie mamy co zwracac
}



/*
 * void mAddElementToRoot(typeData aElement)
 */
void cHeapBinary::mAddElementToRoot(typeData aElement)
{
    if (vSize == 0) // sprawdzenie czy kopiec binarny zawiera jakikolwiek element
    {
        HeapBinary[0] = aElement; // jesli nie to nowy element zostaje automatycznie korzeniem
        vSize++; // zwiekszamy rozmiar kopca binarnego
    }
    else // w przypadku kiedy w kopcu binarnym sa juz jakies elementy
    {
        typeData* HeapBinaryAux; // deklaracja wskaznika do tablicy pomocniczej
        HeapBinaryAux = new typeData[vSize + 1]; // utworzenie tablicy pomocniczej
        HeapBinaryAux[0] = aElement; // przypisanie nowego elementu do korzenia
        HeapBinaryAux[vSize] = HeapBinary[0]; // przypisanie elementu z korzenia na koniec
        for (typeLoop i = 1; i < vSize; i++) // przejscie przez wszystkie elementy oryginalnej tablicy oprocz pierwszego
            HeapBinaryAux[i] = HeapBinary[i]; // kopiowanie kolejnych elementow do tablicy pomocniczej
        delete[]HeapBinary; // zwalnianie zasobow przydzielanych dynamicznie
        vSize++; // zwiekszenie rozmiaru kopca binarnego
        HeapBinary = new typeData[vSize]; // utworzenie nowej oryginalnej tablicy
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
            HeapBinary[i] = HeapBinaryAux[i]; // kopiowanie kolejnych elementow do oryginalnej tablicy
        delete[]HeapBinaryAux; // zwalnianie zasobow przydzielanych dynamicznie
        mRepairHeapFromRoot(); // przywrocenie wlasciwosci kopca zaczynajac od korzenia
    }
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cHeapBinary::mAddElementToEnd(typeData aElement)
{
    cout << aElement << endl;
    if (vSize == 0) // sprawdzenie czy kopiec binarny zawiera jakikolwiek element
    {
        HeapBinary[0] = aElement; // jesli nie to nowy element zostaje automatycznie korzeniem
        vSize++; // zwiekszamy rozmiar kopca binarnego
    }
    else // w przypadku kiedy w kopcu binarnym sa juz jakies elementy
    {
        typeData* HeapBinaryAux; // deklaracja wskaznika do tablicy pomocniczej
        HeapBinaryAux = new typeData[vSize + 1]; // utworzenie tablicy pomocniczej
        HeapBinaryAux[vSize] = aElement; // przypisanie nowego elementu na koniec kop[ca binarnego
        for (typeLoop i = 0; i < vSize; i++) // przejscie przez wszystkie elementy oryginalnej tablicy
            HeapBinaryAux[i] = HeapBinary[i]; // kopiowanie kolejnych elementow do tablicy pomocniczej
        delete[]HeapBinary; // zwalnianie zasobow przydzielanych dynamicznie
        vSize++; // zwiekszenie rozmiaru kopca binarnego
        HeapBinary = new typeData[vSize]; // utworzenie nowej oryginalnej tablicy
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
            HeapBinary[i] = HeapBinaryAux[i]; // kopiowanie kolejnych elementow do oryginalnej tablicy
        delete[]HeapBinaryAux; // zwalnianie zasobow przydzielanych dynamicznie
        mRepairHeapFromEnd(); // przywrocenie wlasciwosci kopca zaczynajac od konca
    }
}

/*
 * bool mRemoveRootHeap()
 */
bool cHeapBinary::mRemoveRootHeap()
{
    if (vSize == 0) // sprawdzamy czy kopiec binarny jest pusty
        return false; // jesli jest pusty to zwracamy informacje, ze usuniecie elementu nie powiodlo sie
    else // jesli kopiec binarny zawiera cokolwiek
    {
        if (vSize == 1) // jesli kopiec binarny zawiera tylko jeden element
        {
            HeapBinary[0] = NULL; // zniszczenie wartosci jedynego elementu
            vSize--; // zmniejszenie rozmiaru kopca binarnego
        }
        else // jesli kopiec binarny zawiera wiecej niz jeden element
        {
            typeData* HeapBinaryAux; // zadeklarowanie wskaznika do tablicy pomocniczej
            HeapBinaryAux = new typeData[vSize - 1]; // utworzenie tablicy pomocniczej
            HeapBinaryAux[0] = HeapBinary[vSize - 1]; // przypisanie ostatniego elementu do korzenia
            for (typeLoop i = 1; i < vSize; i++) // przejscie po wszystkich elementach oprocz pierwszego
                HeapBinaryAux[i] = HeapBinary[i]; // kopiowanie kolejnych elementow do tablicy pomocniczej
            delete[]HeapBinary; // zwalnianie zasobiow przydzielanych dynamicznie
            vSize--; // zmniejszenie rozmiaru kopca binarnego
            HeapBinary = new typeData[vSize]; // utworzenie nowej oryginalnej tablicy
            for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                HeapBinary[i] = HeapBinaryAux[i]; // kopiowanie kolejnych elementow do oryginalnej tablicy
            delete[]HeapBinaryAux; // zwalnianie zasobow przydzielanych dynamicznie
            mRepairHeapFromRoot(); // przywrocenie wlasnosci kopca rozpoczynajac od korzenia
        }
        return true; // zwracamy informacje o tym, ze usuniecie elementu sie powiodlo
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cHeapBinary::mRemoveElementFromEnd()
{
    if (vSize == 0) // sprawdzamy czy kopiec binarny jest pusty
        return false; // jesli jest pusty to zwracamy informacje, ze usuniecie elementu nie powiodlo sie
    else // jesli kopiec binarny zawiera cokolwiek
    {
        if (vSize == 1) // jesli kopiec binarny zawiera tylko jeden element
        {
            HeapBinary[0] = NULL; // zniszczenie wartosci jedynego elementu
            vSize--; // zmniejszenie rozmiaru kopca binarnego
        }
        else // jesli kopiec binarny zawiera wiecej niz jeden element
        {
            typeData* HeapBinaryAux; // zadeklarowanie wskaznika do tablicy pomocniczej
            HeapBinaryAux = new typeData[vSize - 1]; // utworzenie tablicy pomocniczej
            for (typeLoop i = 1; i < (vSize - 1); i++) // przejscie po wszystkich elementach oprocz ostatniego
                HeapBinaryAux[i] = HeapBinary[i]; // kopiowanie kolejnych elementow do tablicy pomocniczej
            delete[]HeapBinary; // zwalnianie zasobiow przydzielanych dynamicznie
            vSize--; // zmniejszenie rozmiaru kopca binarnego
            HeapBinary = new typeData[vSize]; // utworzenie nowej oryginalnej tablicy
            for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
                HeapBinary[i] = HeapBinaryAux[i]; // kopiowanie kolejnych elementow do oryginalnej tablicy
            delete[]HeapBinaryAux; // zwalnianie zasobow przydzielanych dynamicznie
        }
        return true; // zwracamy informacje o tym, ze usuniecie elementu sie powiodlo
    }
}

/*
 * void mRepairHeapFromRoot()
 */
void cHeapBinary::mRepairHeapFromRoot()
{
    if (vSize > 1) // przywracanie wlasnosci kopca binarnego ma sens jesli jest na nim wiecej niz jeden element
    {
        bool vRepair = false; // tworzymy zmienna logiczna okreslajaca czy kopiec binarny jest juz naprawiony
        typeLoop vParentIndex = 0, vLeftKidIndex, vRigthKidIndex; // zmienne okreslajace indeks rodzica i indeksy potomka
        do
        {
            vLeftKidIndex = getLeftKidIndex(vParentIndex); // wyznaczenie indeksu lewego potomka
            vRigthKidIndex = getRigthKidIndex(vParentIndex); // wynzaczenie indeksu prawego potomka
            if ((vParentIndex > vLeftKidIndex) || (vParentIndex > vRigthKidIndex)) // zabezpieczenie w przypadku wyzerowania indeksow potomkow
            {
                vRepair = true; // naprawianie kopca binarnego zostalo zakonczone
                break; // wychodzimy z petli
            }
            typeData vElementAux; // zmienna pomocnicza wykorzystywana do zamiany elementow
            if ((vLeftKidIndex > (vSize - 1)) && (vRigthKidIndex > (vSize - 1))) // jesli lewy potomek ma za duzy indeks to powinien byc juz poza kopcem binarnym
                vRepair = true; // dotarlismy do konca kopca binarnego, zostal naprawiony            }
            else if ((vLeftKidIndex == (vSize - 1)) && (vRigthKidIndex == vSize)) // jesli istnieje tylko lewy potomek
            {
                if (HeapBinary[vParentIndex] < HeapBinary[vLeftKidIndex]) // jesli potomek ma wieksza wartosc niz rodzic
                {
                    vElementAux = HeapBinary[vParentIndex]; // zamiana miejscami wartosci rodzica i lewego potomka
                    HeapBinary[vParentIndex] = HeapBinary[vLeftKidIndex];
                    HeapBinary[vLeftKidIndex] = vElementAux;
                }
                vParentIndex = vLeftKidIndex; // lewy potomek staje sie rodzicem w nastepnym cyklu petli
            }
            else // jesli istnieja obaj potomkowie
            {
                if (HeapBinary[vLeftKidIndex] > HeapBinary[vRigthKidIndex]) // jesli wartosc lewego potomka jest wieksza niz prawego
                {
                    if (HeapBinary[vParentIndex] < HeapBinary[vLeftKidIndex]) // jesli potomek ma wieksza wartosc niz rodzic
                    {
                        vElementAux = HeapBinary[vParentIndex]; // zamiana miejscami wartosci rodzica i lewego potomka
                        HeapBinary[vParentIndex] = HeapBinary[vLeftKidIndex];
                        HeapBinary[vLeftKidIndex] = vElementAux;
                    }
                    vParentIndex = vLeftKidIndex; // lewy potomek staje sie rodzicem w nastepnym cyklu petli
                }
                else // jesli wartosc lewego potomka jest nie wieksza niz prawego
                {
                    if (HeapBinary[vParentIndex] < HeapBinary[vRigthKidIndex]) // jesli potomek ma wieksza wartosc niz rodzic
                    {
                        vElementAux = HeapBinary[vParentIndex]; // zamiana miejscami wartosci rodzica i prawego potomka
                        HeapBinary[vParentIndex] = HeapBinary[vRigthKidIndex];
                        HeapBinary[vRigthKidIndex] = vElementAux;
                    }
                    vParentIndex = vRigthKidIndex; // prawy potomek staje sie rodzicem w nastepnym cyklu petli
                }
            }

        } while (vRepair == false); // petla bedzie wykonywana dopoki kopiec binarny nie zostanie w calosci naprawiony
    }
}


/*
 * void mRepairHeapFromEnd()
 */
void cHeapBinary::mRepairHeapFromEnd()
{
    if (vSize > 1) // przywracanie wlasnosci kopca binarnego ma sens jesli jest na nim wiecej niz jeden element
    {
        bool vRepair = false; // tworzymy zmienna logiczna okreslajaca czy kopiec binarny jest juz naprawiony
        typeLoop vKidIndex = vSize - 1, vParentIndex; // zmienne okreslajace indeks potomka i indeks rodzica
        do
        {
            vParentIndex = getParentIndex(vKidIndex); // ustanawiamy indeks rodzica
            if (vKidIndex == 0) // jesli biezacy element jest korzeniem
                vRepair = true; // wowczas konczymy prace bo kopiec binarny zostal naprawiony
            else // jesli kopiec binarny zawiera wiecej niz jeden element
            {
                typeData vElementAux; // zmienna wykorzystywana do zamiany elementow
                if (HeapBinary[vParentIndex] < HeapBinary[vKidIndex]) // sprawdzamy czy wartosc potomka jest wieksza nic rodzica
                {
                    vElementAux = HeapBinary[vParentIndex]; // jesli tak to zamieniamy miejscami oba elementy
                    HeapBinary[vParentIndex] = HeapBinary[vKidIndex];
                    HeapBinary[vKidIndex] = vElementAux;
                }
                vKidIndex = getParentIndex(vKidIndex); // ustanawiamy nowy biezacy element na rodzica
            }
        } while (vRepair == false); // petla bedzie wykonywana dopoki kopiec binarny nie zostanie w calosci naprawiony
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cHeapBinary::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElementToEnd(rand() % vDrawingRange); // dodanie do kopca binarnego elementu o wylosowanej wartosci
}



/*
 * void mPrintRootHeap()
 */
void cHeapBinary::mPrintRootHeap()
{
    if (vSize != 0) // sprawdzenie czy kopiec binarny nie jest pusty
        cout << HeapBinary[0] << endl; // jesli nie jest to wypisujemy zawartosc korzenia
    else // jesli kopiec binarny jest pusty
        cout << "Kopiec binarny jest pusty!"; // wowczas wypisujemy odpowiedni komunikat
}

/*
 * void mPrintLastElement()
 */
void cHeapBinary::mPrintLastElement()
{
    if (vSize != 0) // sprawdzenie czy kopiec binarny nie jest pusty
        cout << HeapBinary[vSize - 1]; // jesli nie jest to wypisujemy ostatni element
    else // jesli kopiec binarny jest pusty
        cout << "Kopiec binarny jest pusty!"; // wowczas wypisujemy odpowiedni komunikat
}

/*
 * void mPrintAllElements()
 */
void cHeapBinary::mPrintAllElements()
{
    if (vSize != 0) // sprawdzenie czy kopiec binarny nie jest pusty
    {
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach
            cout << HeapBinary[i] << endl; // wypisanie kolejnych elementow
    }
    else // jesli kopiec binarny jest pusty
        cout << "Kopiec binarny jest pusty!"; // wowczas wypisujemy odpowiedni komunikat
}

/********** PUBLIC: END **********/

/* cheapbinary.cpp */
/********** END_OF_FILE **********/
