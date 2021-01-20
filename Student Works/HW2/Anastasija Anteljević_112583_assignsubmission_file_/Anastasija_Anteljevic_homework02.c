// Anastasija_Anteljevic_homework02.c.cpp : 
// This code is createt by Anastasija Anteljevic, student ID: 89201235

#include <stdio.h>
#include <limits.h>



long long unsigned Factorial(long long unsigned lluInpt) {

    long long unsigned lluResult = 1;
    for (long long unsigned dCnt = 1; dCnt <= lluInpt; dCnt++) {
        lluResult *= dCnt; 
        // In this step we want to calculate the factorial of the number and doing that by multiplying it with the number smaller by1
    }

    return lluResult;
    // Now we want to returne the factorial of the input number
}

long long unsigned FactorialSquared(long long unsigned lluInpt) {

    long long unsigned lluResult = 1;
    for (long long unsigned dCnt = 1; dCnt <= lluInpt; dCnt++) {
        lluResult *= dCnt;
        //I am just applying the same method as the above
    }

    lluResult *= lluResult;
    // We want to square the result to get the final output

    return lluResult;
    // Now returning the squared factorial of the input number
}




void printTests(int[], int);

int dLimit = 200000;

int main(int argc, char* argv[])
{
    int dLength;
    
    printf("How many numbers are to be tested? :");
    scanf("%d", &dLength);// by doing this the user enters how many numbers he desires to test

    if (dLength < 0 || dLength > dLimit) {
        printf("The Number should be between 1 and %d\n", dLimit);
        return 1;
    }
    
    int dTests[dLength];

    // In this step we want to fill out the test "Array" with numbers

    int dCounter = 0;

    while (dCounter < dLength) {

        printf("%d num :", dCounter + 1);
        scanf("%d", &dTests[dCounter]);
        if (dTests[dCounter]<0 || dTests[dCounter]>dLimit) {
            printf("The Number should be between 1 and %d\n", dLimit);
            continue;
        }

        dCounter++;
    }

    // As it was given in the exapmle You have posted we have :
    // int dTests[] = {4,5,7,11,24};
    // int dLength = size of dTests devided by size of dTests[0];

    printTests(dTests, dLength);

    return 0;

}

// Now we can create the desired output

void printTest (int arr[], int dLength) {

    printf("\nSample Input     Sample Output\n");
    printf("________________________________\n");

    for (int i = 0; i < dLength; i++) {
        if (arr[i] < 1 || arr[i] > 200000)
            continue;

        printf("\n| %-15d", arr[i]);
        printf("| %-10d |", Factorial(arr[i]));
    }

    printf("\n ____________________________\n");

}