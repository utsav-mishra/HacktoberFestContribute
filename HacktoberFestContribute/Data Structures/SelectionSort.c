//The algorithm maintains two subarrays in a given array.

//1) The subarray which is already sorted.
//2) Remaining subarray which is unsorted.

//In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.


#include <stdio.h>
 
int main()
{
   int a[100], n, i, j, pos, swap;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
 
   for (i=0 ; i<n ; i++ )
      scanf("%d", &a[i]);
 
   for ( i= 0 ; i<( n - 1 ) ; i++ )
   {
      pos = i;
 
      for ( j=i+1 ; j<n ; j++ )
      {
         if ( a[pos] > a[j] )
            pos = j;
      }
      if ( pos != i )
      {
         swap = a[i];
         a[i] = a[pos];
         a[pos] = swap;
      }
   }
 
   printf("Sorted list in ascending order:\n");
 
   for ( i=0 ; i<n ; i++ )
      printf("%d ", a[i]);
 
   return 0;
}
