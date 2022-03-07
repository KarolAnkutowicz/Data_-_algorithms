/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cgraphalgorithmsmatrix.hpp
 */

#pragma once
#include <vector>

/*
 * cGraphAlgorithmsMatrix - klasa modelujaca
 * algorytmy grafowe na macierzy wag.
 */
class cGraphAlgorithmsMatrix
{
/********** PUBLIC: BEGINNING **********/

public:

	/*
	 * cGraphAlgorithmsMatrix() - konstruktor wywolywany
	 * bez parametrow.
	 * PRE:
	 * - brak;
	 * POST:
	 * - utworzenie obiektu klasy cGraphAlgorithmsMatrix.
	 */
	cGraphAlgorithmsMatrix();

	/*
	 * void mKruskalMatrix() - metoda realizujaca
	 * algorytm Kruskala - znajdowanie minimalnego
	 * drzewa rozpinajacego dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mKruskalMatrix();

	/*
	 * void mPrimMatrix() - metoda realizujaca
	 * algorytm POrima - znajdowanie minimalnego
	 * drzewa rozpinajacego dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mPrimMatrix();

	/*
	 * void mDijkstraMatrix() - metoda realizujaca
	 * algorytm Dijkstry - znajdowanie najkrotszej
	 * sciezki z jednym zrodlem dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mDijkstraMatrix();

	/*
	 * void mBellmanFordMatrix() - metoda realizujaca
	 * algorytm Bellmana-Forda - znajdowanie najkrotszej
	 * sciezki z jednym zrodlem dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mBellmanFordMatrix();

	/*
	 * void mFloydWarshallMatrix() - metoda realizujaca
	 * algorytm Floyda-Warshalla - znajdowanie najkrotszej
	 * sciezki miedzy wszystkimi parami wierzcholkow
	 * dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mFloydWarshallMatrix();

	/*
	 * void mJohnsonMatrix() - metoda realizujaca
	 * algorytm Johnsona - znajdowanie najkrotszej
	 * sciezki miedzy wszystkimi parami wierzcholkow
	 * dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mJohnsonMatrix();

	/*
	 * void mFordFulkersonlMatrix() - metoda realizujaca
	 * algorytm Forda-Fulkersona - znajdowanie maksymalnego
	 * przeplywu dla macierzy.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mFordFulkersonMatrix();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

private:

	/*
	 * std::vector<std::vector<int> > MatrixWeights -
	 * macierz wag grafu.
	 */
	std::vector<std::vector<int> > MatrixWeights;

	/*
	 * bool vGraphDirected - pole przechowujace
	 * informacje o tym czy graf jest skierowany.
	 */
	bool vGraphDirected;

/********** PRIVATE: END **********/
};

/* cgraphalgorithmsmatrix.hpp */
/********** END_OF_FILE **********/
