#include <stdio.h>
#include<math.h>

int main () {
  int dNthPrime = 1001;
  int dCtr = 0;
  int dNum = 2;
  int dStart;
  int dResult = 0;

//where the magic happens :)
while (dCtr != dNthPrime) {
      
    int dCount = 0;
    
    for (dStart = 2; dStart <= sqrt (dNum); dStart++) {
        if (dNum % dStart == 0) {
            dCount++;
            break;
        }//end if
    }//end for
    
    if (dCount == 0) {
        dCtr++;
        dResult = dNum;
    }//end if
    
    dNum = dNum + 1;

}//end while 

    //print the result    
    printf ("%dth prime number is %d ",dNthPrime, dResult);
  
  return 0;
  
}//end main