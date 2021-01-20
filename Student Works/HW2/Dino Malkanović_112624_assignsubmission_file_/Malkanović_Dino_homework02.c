//Dino Malkanović 89201214

#include<stdio.h>

long long unsigned Factorial(long long unsigned lluInput) { //method for calculating factorial of a number
    long long unsigned dFactorial=1;
    for (int i=1 ; i<=lluInput ; i++) {
        dFactorial*=i;
    }
    return dFactorial; 
}

long long unsigned main() {
    
    /*declaring variables*/
    /*we use long long unsigned for integer overflow*/
    long long unsigned lluNumberOfTestCases; //number of elements user inputs and wants to test
    long long unsigned lluTestCases[lluNumberOfTestCases]; //array of elements user inputs
    long long unsigned lluSqrFactArr[lluNumberOfTestCases]; //array with squared factorial of dTestCases array
    long long unsigned lluResult; //final results
    long long unsigned lluResultArray[lluNumberOfTestCases]; //array of final results

    printf("Number of numbers you want to test: "); //user inputs number of elements in array 
    scanf("%llu", &lluNumberOfTestCases);
    
    if (lluNumberOfTestCases<=1 || lluNumberOfTestCases>=20000) { //if user inputs invalid number he will get an error 
        printf("ERROR\nYour number must be between 1 and 20000");
    }
    
    else { //if the number given by user is valid 
        
        printf("Enter your numbers: "); // for loop taking numbers from user and putting them in the array
        for (int i=0 ; i<lluNumberOfTestCases ; i++ ) {
            scanf("%llu", &lluTestCases[i]);
        }
        
        printf("Number given by user are: "); //printing given numbers back
        for (int i=0 ; i<lluNumberOfTestCases ; i++ ) {
            if (lluNumberOfTestCases-1==i) {
                printf("%llu", lluTestCases[i]);
            }    
            else {
                printf("%llu", lluTestCases[i]);
            }
        }
        
        for (int i=0 ; i<lluNumberOfTestCases ; i++ ) { //for loop adding values of squared factorials of numbers from dTestCases array
            lluSqrFactArr[i]=Factorial(lluTestCases[i])*Factorial(lluTestCases[i]);
        }
        
        for (int i=0 ; i<lluNumberOfTestCases ; i++) {
            for (int j=0 ; j<20000 ; j++) { //for loop going through every number , calcuating and checking if we found the coorect number
                lluResult=Factorial(j);
                if (lluResult%lluSqrFactArr[i]==0) {
                    lluResultArray[i]=j;
                    break;
                }   
            }
        }

        printf("Results: ");
        for (int i=0 ; i<lluNumberOfTestCases ; i++ ) { //for loop printing results
            if (lluNumberOfTestCases-1==i) {
                printf("%llu", lluResultArray[i]);
            }    
            else {
                printf("%llu", lluResultArray[i]);
            }
        }

    } //close else
    
    return 0;

} //close main