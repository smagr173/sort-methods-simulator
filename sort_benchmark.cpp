#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

#include "bubblesort.hpp"
#include "insertionsort.hpp"
#include "selectionsort.hpp"
#include "mergesort.hpp"
#include "quicksort.hpp"


/**
 * Generate an array of random integers
 * @param n the size of the array
 * @param seed the seed for the random number generator
 * @return a pointer to a new array
 * @note the client is responsible for deleting the array with delete[]
 */
int* makeRandomArray(int n, int seed) {
    srand(seed);
    int * a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }
    return a;
}

int main() {
    const int seed = 536;

    int n = 10;
    cout << "Bubble Sort:    ";
    while(n <= 10000) 
      {     
	int* a = makeRandomArray(n, seed);
	int countBubble = bubbleSort(a, n);
	delete [] a;
	cout<<left<<setw(6)<<""<<countBubble;
	n*= 10;
      }
    cout<<endl;

    int h = 10;
    cout << "Insertion Sort: ";
    while(h <= 10000)
      {
	int* a = makeRandomArray(h, seed);
	int insertion = insertionSort(a, h);
	delete[] a;
	cout << left << setw(6) << "" << insertion;
	h *= 10;
      }
    cout<<endl;

    int s = 10;
    cout << "Selection Sort: ";
    while(s <= 10000)
      {
	int* a = makeRandomArray(s, seed);
	int selection = selectionsort(a, s);
	delete[] a;
	cout << left << setw(6) << "" << selection;
	s *= 10;
      }
    cout << endl;

    int m = 10;
    cout << "Merge Sort:     ";
    while(m <= 10000)
      {
	int* a = makeRandomArray(m, seed);
	int merge = mergeSort(a, 0, m-1);
	delete[] a;
       	cout << left << setw(6) << "" << merge;
	cout << " ";
	m *= 10;
      }
    cout << endl;



    return 0;
}
