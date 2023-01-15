/*      Ask the user to enter 10 integers in an array (5 even, 5 odd). Print the contents
        of the array. All even numbers in the array should be sorted in ascending order (in the first
        "half" of the array). Then all odd numbers should be sorted in descending order (in the second
        "half" od the array).
*/
#include <stdio.h>

//Main function
int main(){
//declare variables
int dArr[10], dEvenArr[5], dOddArr[5], dA, dCtr, dCtr1=0, dCtr2=0;

//ask the user for an input
for(int dCtr = 0; dCtr < 10; dCtr++){
        printf("\n Enter numbers for slot %d: ", dCtr);
        scanf("%d", &dArr[dCtr]);
}
printf("\n");

//Print the input
printf("\n Elements of array:  ");
for (dCtr = 0; dCtr < 10; dCtr++){
        printf("%d", dArr[dCtr]);
}

//Sort array into to other arrays
for (int dCtr = 0; dCtr < 10; dCtr++){
        //for all even numbers
        if ( dArr[dCtr]%2==0 ){
                //printf("\n value of even arr: %d", dArr[dCtr]);
                dEvenArr[dCtr1]=dArr[dCtr];
                dCtr1++;
                //printf("\n value of even stored arr: %d", dEvenArr[dCtr1]);
        }
        //for all odd numbers
        else{
                //printf("\n value of odd arr: %d", dArr[dCtr]);
                dOddArr[dCtr2]=dArr[dCtr];
                dCtr2++;
                //printf("\n value of odd stored arr: %d", dOddArr[dCtr2]);
        }
}
printf("\n");
//Print the even array, just to see
printf("\n dEvenArr:  ");
for (dCtr = 0; dCtr < 5; dCtr++){
        printf("%d", dEvenArr[dCtr]);
}
printf("\n");
//Print the odd array, just to see
printf("\n dOddArr:  ");
for (dCtr = 0; dCtr < 5; dCtr++){
        printf("%d", dOddArr[dCtr]);
}
printf("\n");

//Now sort even numbers in ascending order
for(int dCtr=0; dCtr<5; dCtr++){
        for(int dCtr1=dCtr+1;dCtr1<5;dCtr1++){
                if(dEvenArr[dCtr]>dEvenArr[dCtr1]){//if number is bigger then next one, change their placement
                        dA=dEvenArr[dCtr];
                        dEvenArr[dCtr]=dEvenArr[dCtr1];
                        dEvenArr[dCtr1]=dA;
                }
        }

}
printf("\n");
printf("\n Even-ascending + odd-descending numbers from your input:\n");
//Print what we got   
for (int dCtr = 0; dCtr < 5; dCtr++) {     
       printf("%d", dEvenArr[dCtr]);    
}  
//Now sort odd numbers in descending order
for(int dCtr=0; dCtr<5; dCtr++){
        for(int dCtr1=dCtr+1; dCtr1<5; dCtr1++){
                if(dOddArr[dCtr]<dOddArr[dCtr1]){//if number is less then next one, change their placement
                        dA=dOddArr[dCtr];
                        dOddArr[dCtr]=dOddArr[dCtr1];
                        dOddArr[dCtr1]=dA;
                }
        }
}
//Print what we got without \n, so that it addes to previous line with even in ascending order
for (int dCtr = 0; dCtr < 5; dCtr++) {     
        printf("%d", dOddArr[dCtr]);    
} 
printf("\n"); 
printf("\n"); 
return 0;
}//endOfMain