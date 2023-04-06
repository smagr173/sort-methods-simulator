#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

/** Sorts the items in an array into ascending order.
@pre None.
@post theArray is sorted into ascending order; n is unchanged.
@param theArray The given array.
@param n The size of theArray
@return the count 
*/


template<class ItemType>
int insertionSort(ItemType theArray[], int n) {

  int Count = 0;
  for(int unsorted = 1; unsorted < n; unsorted++)
    {
      ItemType nextItem = theArray[unsorted];
      int loc = unsorted;

      if(loc > 0)
	{
	  Count++;
	}

      while((loc>0) && (theArray[loc - 1] > nextItem))
	{
	  theArray[loc] = theArray[loc - 1];
	  loc--;
	  if(loc > 0) 
	    {
	  Count++;
	    }	
	}
      theArray[loc] = nextItem;
    }

    return Count;
}

#endif
