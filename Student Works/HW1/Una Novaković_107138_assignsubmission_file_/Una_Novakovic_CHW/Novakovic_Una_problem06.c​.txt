#include <stdio.h>
#include <stdlib.h>



int main()
{
  //declaring the variables
  int numbers[10];
  int i;

  //interactive input
  printf("Please, insert 10 integers: ");
   for(i=0; i<10; i++)
    {
	    printf("element -> %d : ",i);
        scanf("%d", &numbers[i]);
    }
    
    //finding the minimum value
    int min=numbers[0];

    for(i=1;i<10;i++) {

    //if first element in the list is not the smallest, check for other elements
    if(numbers[i]<min) {
        min=numbers[i];
    }
  
  }

    printf("\nThe smallest number from your list is: %d ", min);





}//endmain