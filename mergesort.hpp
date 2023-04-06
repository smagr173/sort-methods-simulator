#ifndef MERGESORT_H
#define MERGESORT_H

/**
 * The maximum size of the temporary array
 */

/** Merges two sorted array segments theArray[first..mid] and theArray
    [mid1..last] into one sorted array.
@pre first <= mid <= last. The subarrays theArray[first..mid] and theArray[        mid+1..last] are each sorted in increasing order.
@post theArray[first..last] is sorted
@param theArray The given array.
@param fist the index of the beginning of the first segment in theArray.
@param mid the index of the end of the first segement in theArray.
       mid +1 marks the beginning of the second segment.
@param last The index of the last element in the second segment in theArray.
@param count
@note This function merges the two subarrays into a temporary array and copies the result into the original array theArray.
*/




const int MAX_SIZE = 10000;


template<class ItemType>
void merge(ItemType theArray[], int first, int mid, int last, int& Count)
{
  ItemType tempArray[MAX_SIZE];
  int first1 = first;
  int last1 = mid;
  int first2 = mid + 1;
  int last2 = last;
  int index = first1;

  while ((first1 <= last1) && (first2 <= last2))
    {
      Count++;
      if(theArray[first1] <= theArray[first2])
	{
	  tempArray[index] = theArray[first1];
	  first1++;
	}
      else
	{
	  tempArray[index] = theArray[first2];
	  first2++;
	}
      index++;
    }

  while(first1 <= last1)
    {
      tempArray[index] = theArray[first1];
      first1++;
      index++;
    }

  while(first2 <= last2)
    {
      tempArray[index] = theArray[first2];
      first2++;
      index++;
    }

  for ( index = first; index <= last; index++)
    {
      theArray[index] = tempArray[index];
    }
}

/** Sorts the items in an array into ascending order.
@pre theArray[first..last] is an array.
@post theArray[first..last] is sorted in ascending order.
@param theArray the given array
@param first the index of the first element to consider in theArray
@param last the index of the last elemebt to consider in theArray
@return count
*/


template<class ItemType>
int mergeSort(ItemType theArray[], int first, int last) 
{

  int Count = 0;

  if(first<last)
    {
      int mid = first + (last - first) / 2;
      int one = mergeSort(theArray, first, mid);
      int two = mergeSort(theArray, mid + 1, last);
      merge(theArray, first, mid, last, Count);

      Count = one + two + Count;
    }

 return Count;
}

#endif

