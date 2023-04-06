#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H


/** finds the largest item in an array
@pre the size of the array is >= 1
@post the arguments are unchanged
@param theArray the given array
@param size the number of elements in theArray
@param count
@return index
*/


template<class ItemType>
int findIndexOfLargest(const ItemType theArray[], int size, int& count);

/**Sorts the items in an array into ascending order
@pre None
@post the array is sorted into ascending order; the size of the array is 
    unchanged
@param theArray the array to sort
@param n the size of theArray
@return count
*/

template<class ItemType>
int selectionsort(ItemType theArray[], int n) 
{
  int count = 0;

  for(int last = n-1; last >=1; last--)
    {
      int largest = findIndexOfLargest(theArray, last+1, count);
      std::swap(theArray[largest], theArray[last]);
    }

    return count;
}

template <class ItemType>
int findIndexOfLargest(const ItemType theArray[], int size, int& count)
{
  int indexSoFar = 0;
  for(int currentIndex = 1; currentIndex < size; currentIndex++)
    {
      count++;
      if(theArray[currentIndex] > theArray[indexSoFar])
	{
	  indexSoFar = currentIndex;
	}
    }
  return indexSoFar;
}


#endif

