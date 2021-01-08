#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 2 columns*/
   int arr5x2[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int nCtr1, nCtr2;
 
   /* output each array element's value */
   for ( nCtr1 = 0; nCtr1 < 5; nCtr1++ ) {

      for ( nCtr2 = 0; nCtr2 < 2; nCtr2++ ) {
         printf("arr5x2[%d][%d] = %d\n", nCtr1,nCtr2, arr5x2[nCtr1][nCtr2] );
      }
   }
   
   return 0;
}