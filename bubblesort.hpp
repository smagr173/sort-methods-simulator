#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <algorithm>

/** Sorts the items in an array into ascending order.
@pre None
@post theArray is sorted into ascending order; n is unchanged.
@param theArray The given array
@param n the size of theArray
@return the count
*/

template<class ItemType>
int bubbleSort(ItemType theArray[], int n) {

  int count = 0;
  bool sorted = false;
  int pass = 1;

  while (!sorted && (pass <n))
    {
      sorted = true;
      for(int index = 0; index < n - pass; index++)
	{
	  int nextIndex = index + 1;
	  count++;
	  if(theArray[index] > theArray[nextIndex])
	    {
	      std::swap(theArray[index], theArray[nextIndex]);
	      sorted = false;
	    }
	}
      pass++;
    }
    return count;
}

#endif
