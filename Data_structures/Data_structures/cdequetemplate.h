/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdequetemplate.h
 */

#ifndef CDEQUETEMPLATE_H
#define CDEQUETEMPLATE_H

#include <deque>
#include "constantsandtypes.h"

using namespace std;

/*
 * cDequeTemplate - klasa modelujaca kolejke
 * dwukierunkowa z wykorzystaniem szablonu
 * <deque>.
 */
class cDequeTemplate
{
/********** PRIVATE: BEGIN **********/

    /*
     * deque <typeData> DequeTemplate - kolejka dwukierunkowa
     * elementow typu typeData.
     */
    deque <typeData> DequeTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow kolejki dwukierunkowej.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/

public:

    /*
     * cDequeTemplate() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cDequeTemplate.
     */
    cDequeTemplate();

    /*
     * cQueueTemplate(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy dodac
     * do kolejki dwukierunkowej (domyslnie na jej koniec).
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cDequeTemplate.
     */
    cDequeTemplate(typeLoop aSize);

    /*
     * cDequeTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do kolejki dwukierunkowej
     * oraz zakresem z jakiego mamy te elementy losowac
     * (domyslnie dodajemy na koniec kolejki).
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cDequeTemplate.
     */
    cDequeTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z kolejki dwukierunkowej
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z kolejki dwukierunkowej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z kolejki dwukierunkowej
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getQueueSize() - zwrocenie rozmiaru kolejki.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru kolejki dwukierunkowej (typ: typeLoop).
     */
    inline typeLoop getDequeSize()
    {
        return DequeTemplate.size();
    }

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeLoop).
     */
    inline typeLoop getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * bool getDequeIsEmpty() - metoda zawracajaca
     * informacje o tym czy kolejka dwukierunkowa jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy kolejka dwukierunkowa
     * jest pusta (typ: bool).
     */
    inline bool getDequeIsEmpty()
    {
        return DequeTemplate.empty();
    }



    /*
     * void mAddElementToBegin(typeData aElement) - metoda
     * dopisujaca element na poczatek kolejki dwustronnej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElementToBegin(typeData aElement)
    {
        DequeTemplate.push_front(aElement);
    }

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na koniec kolejki dwustronnej.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElement(typeData aElement)
    {
        DequeTemplate.push_back(aElement);
    }

    /*
     * bool mRemoveElementFromBegin() - metoda usuwajaca
     * element z poczatku kolejki dwustronnej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromBegin();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca kolejki dwustronnej (o ile
     * kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy kolejki dwustronnej
     * PRE:
     * - podanie liczby elementow (typ: typeData);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element kolejki dwustronnej (o ile kolejka
     * nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element kolejki dwustronnej (o ile kolejka
     * nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc kolejki dwustronnej (o ile kolejka
     * nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CDEQUETEMPLATE_H

/* cdequetemplate.h */
/********** END_OF_FILE **********/
