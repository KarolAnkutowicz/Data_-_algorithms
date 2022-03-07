/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cgraphalgorithmsedges.hpp
 */

#pragma once
#include "graphelements.hpp"
#include <list>
/*
 * cGraphAlgorithmsEdges - klasa modelujaca
 * algorytmy grafowe na liscie krawedzi.
 */
class cGraphAlgorithmsEdges
{
/********** PUBLIC: BEGINNING **********/

public:

	/*
	 * cGraphAlgorithmsEdges() - konstruktor wywolywany
	 * bez parametrow.
	 * PRE:
	 * - brak;
	 * POST:
	 * - utworzenie obiektu klasy cGraphAlgorithmsEdges.
	 */
	cGraphAlgorithmsEdges();



	/*
	 * void mKruskalEdges() - metoda realizujaca
	 * algorytm Kruskala - znajdowanie minimalnego
	 * drzewa rozpinajacego dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mKruskalEdges();

	/*
	 * void mPrimEdges() - metoda realizujaca
	 * algorytm POrima - znajdowanie minimalnego
	 * drzewa rozpinajacego dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mPrimEdges();

	/*
	 * void mDijkstraEdges() - metoda realizujaca
	 * algorytm Dijkstry - znajdowanie najkrotszej
	 * sciezki z jednym zrodlem dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mDijkstraEdges();

	/*
	 * void mBellmanFordEdges() - metoda realizujaca
	 * algorytm Bellmana-Forda - znajdowanie najkrotszej
	 * sciezki z jednym zrodlem dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mBellmanFordEdges();

	/*
	 * void mFloydWarshallEdges() - metoda realizujaca
	 * algorytm Floyda-Warshalla - znajdowanie najkrotszej
	 * sciezki miedzy wszystkimi parami wierzcholkow
	 * dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mFloydWarshallEdges();

	/*
	 * void mJohnsonEdges() - metoda realizujaca
	 * algorytm Johnsona - znajdowanie najkrotszej
	 * sciezki miedzy wszystkimi parami wierzcholkow
	 * dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mJohnsonEdges();

	/*
	 * void mFordFulkersonlEdges() - metoda realizujaca
	 * algorytm Forda-Fulkersona - znajdowanie maksymalnego
	 * przeplywu dla listy krawedzi.
	 * PRE:
	 * - brak;
	 * POST:
	 * - brak.
	 */
	void mFordFulkersonEdges();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

private:

	/*
	 * std::list<cEdge> Edges - lista krawedzi grafu.
	 */
	std::list<cEdge> Edges;

	/*
	 * bool vGraphDirected - pole przechowujace
	 * informacje o tym czy graf jest skierowany.
	 */
	bool vGraphDirected;

/********** PRIVATE: END **********/
};

/* cgraphalgorithmsedges.hpp */
/********** END_OF_FILE **********/
