#include<stdio.h>

int main ()

{
   
    int dArray[10]; //declaring array with 10 elements
    
    printf("Enter 10 numbers: "); //user input for elements

    for (int i=0 ; i<10; i++) { //user input into array
        scanf("%d", &dArray[i]); } 

    printf("Even numbers are: "); //for loop searching for even numbers by diving them by 2, if theres no reminder its a even number
        for (int i=0 ; i<10; i++) {
            if (dArray[i]%2==0) {
                printf("%d ", dArray[i]);
        }
    }
    
    printf("\nOdd numbers are: "); //for loop searching for odd numbers by diving them by 2, if theres a reminder its a odd number
        for(int i=0; i<10; i++) {
            if (dArray[i]%2!=0) { 
                printf("%d ", dArray[i]);
        }
    }
  
  return 0;
  
}