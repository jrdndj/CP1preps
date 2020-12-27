#include<stdio.h>


int main() {

    //declare variable
    int dSize;
    int dCountEven = 0;
    int dCountOdd = 0;
    
    //ask the user for size of array
    printf("Input the size of an array: \n");
    scanf("%d", &dSize);

    //declare array
    int aEvenOdd[dSize];


    //ask the user to enter the elements of the array
    printf("Insert the elements of the array: \n");

    //inputs the array
    for(int dCtr=0; dCtr<dSize; dCtr++) {
        scanf("%d", &aEvenOdd[dCtr]);
    }//end for

    //counts the even elements
    for(int dCtr=0; dCtr<dSize; dCtr++) {

            if(aEvenOdd[dCtr] % 2 == 0) {
            dCountEven++;

            }//end if
    }//end for

    //declare array
    int aEven[dCountEven];
    
    //counts the odd elements
    for(int dCtr=0; dCtr<dSize; dCtr++) {

            if(aEvenOdd[dCtr] % 2 != 0) {
                dCountOdd++;
            }//end if

    }//end for

    //declare array
    int aOdd[dCountOdd];
    
    int dNE=0;
    //fill even array
    for(int dCtr=0; dCtr<dSize; dCtr++) {

            if(aEvenOdd[dCtr] % 2 == 0) {
                aEven[dNE] = aEvenOdd[dCtr];
                dNE++;
                
            }//end if

    }//end for
    
    int dNO=0;
    //fill odd array
    for(int dCtr=0; dCtr<dSize; dCtr++) {

            if(aEvenOdd[dCtr] % 2 != 0) {
                aOdd[dNO] = aEvenOdd[dCtr];
                dNO++;
                
            }//end if

    }//end for


    //prints the even elements
    printf("\nArray of the even elements: ");
    for(int dCtr=0; dCtr<dCountEven; dCtr++) {
 
            printf("%d ", aEven[dCtr]);
            
    }//end for
    
    //prints the odd elements
    printf("\nArray of the odd elements: ");
    for(int dCtr=0; dCtr<dCountOdd; dCtr++) {
 
            printf("%d ", aOdd[dCtr]);
            
    }//end for


}//end main