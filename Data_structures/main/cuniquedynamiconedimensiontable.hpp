/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cuniquedynamiconedimensiontable.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>

class cUniqueDynamicOneDimensionTable
{
	/********** PUBLIC: BEGINNING **********/

public:

	/********** PUBLIC: END **********/

    /*
     * std::unique_ptr<typeData> tabElement - wskaznik do 
     * tablicy elementow.
     */
    std::unique_ptr<typeData> tabElement;

    /*
     * typeLoop vLengthTable - liczba elementow tablicy.
     */
    typeLoop vLengthTable;

    /*
     * typeData vDrawingRange - maksymalna liczba jaka mozemy
     * wylosowac (zakres od 0 do vDarwingRange).
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - najmniejszy element tablicy.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - najwiekszy element tablicy.
     */
    typeData vMaxElement;


	/********** PRIVATE: BEGINNING **********/

private:

	/********** PRIVATE: END **********/

};

/* cuniquedynamiconedimensiontable.hpp */
/********** END_OF_FILE **********/
