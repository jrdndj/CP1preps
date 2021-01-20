//
//  main.c
//  C_HW_02_V2.0
//
//  Created by Andrej Perkovic on 12. 1. 2021..
//
//  A lot is going on in here
//
/*
    The general flow of the program is:
    - number is iputed as integer and converted to string of digit characters
    - variable for enumerating natural number is initiated with the same value (it' is charge of finding K)
    - after that, string representations are manupulated (by multiplication) to find the desired K
 
    - one challenge was finding a way to determine divisibility with number in this format, so I went with the option of looking for k by good ol' enumarating of naturals from 1... (k here refers to b = a * k, where b is a multiple of a)
    - this way of determening requires a lot of computations, but I tried reducing redundant ones as much as possible
    - BOTTLENECKS:
        - current limits are theoretically set by string size for the "big value" that should be the multiple on N!, currently at 300 digits (not mentioning of course physical limitations of machines)

 
 
    OPTIMIZATIONS

    1) when calculating the divisibility of K! over N! ^ 2, we can see there are numbers that can be "eliminated"
        for exmple, 24! / (12! ^ 2) will be calculated as follows will acually be 24 * 23 * ... * 13 / 12 * 11 * ... * 1
    2) when checking for divisibiliti, instead of enumerating k from 1 till forever and checking for every possible value, we calculate the range of number of digits k can have and start from there
 
    remarke: i letf some printf statement not necessary for the "user", that i used for debugging and testing. i lef them because i thought they mught help you get a clearer picture of what i wnated to do and where did i go wrong etc.
 */
//
//
//
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int multStr(char* sFirst, char* sSecond, char* sDestination);
int redFactStr(char* sNumber, char* sBoundary, char* sDestination);
int factStr(char* sNumber, char* sDestination);

int isMultipleOf(char* sBigOne, char* sSmallOne);

void numberToString(int dNumber, char* sDestination);
void longLongToString(unsigned long long int , char*);



int main(int argc, const char * argv[]) {
    
    //ALL RIGTHY, BUCKEL UP!
    
    int dInput;

    printf("Insert N: ");
    scanf("%d", &dInput);
    
    int dEnumerator = dInput + 1; //initializing to the value of fInput since it has to be bigger
    
    char sInput[50], sInputFac[100];
    
    numberToString(dInput, sInput);
    redFactStr(sInput, "1", sInputFac);
    
    
    char sRedEnumFac[300]; //"reduced" ie "optimized" enumerator factorial
    char sPrevRedEnumFac[300]; //previous "reduced" enumerator factor, for storing the old value and shortening the calc of the next value
    char sEnumerator[50];
    
    numberToString(dEnumerator, sEnumerator);
    redFactStr(sEnumerator, sInput, sRedEnumFac);
    
    int dFlag = 0; //for marking the value that satisfies the condition
 
    
    do {
        
        dFlag = isMultipleOf(sRedEnumFac, sInputFac); //for seeing if multiple of
        
        if(dFlag) {
            printf("\n\nBingo!!! For %s, it's %s\n\n", sInput, sEnumerator);
            break;
        }
        
        //storing current value as "previous"
        strcpy(sPrevRedEnumFac, sRedEnumFac);
        
        //updating variables
        dEnumerator++;
        numberToString(dEnumerator, sEnumerator);
        
        //multiplying the "previous" "big number" with incremented dEnumerator to reduce unnecessary calcs
        multStr(sPrevRedEnumFac, sEnumerator, sRedEnumFac);
        
        printf("\n----- %s -> %s\n\n---------------------------------\n", sEnumerator, sRedEnumFac);
        
    } while(!dFlag);
    
    return 0;
}

double redFact(double fNumber, double fBoundary) {
    //in case the number is smaller, we will put an exit strategy
    if(fNumber < fBoundary) return 1;
    
    double fResult = 1;
    
    while(fNumber > fBoundary) fResult *= fNumber--;
    
    return fResult;
}

double fact(double fNumber) {
    
    double fResult = 1.0, fEnumer = 1.0;
    
    while(fEnumer <= fNumber) fResult *= fEnumer++;
        
    return fResult;
}


int multStr(char* sFirst, char* sSecond, char* sDestination) {
    
    int dLen1 = 0, dLen2 = 0;
    dLen1 = (int)strlen(sFirst);
    dLen2 = (int)strlen(sSecond);
    
    printf("hello from multStr\n %s\n%s\n\n", sFirst, sSecond);
    
    
    //in case empty strings
    if(dLen1 == 0 || dLen2 == 0) return 0;
    
    //initializing to the max possible size
    int dInitialLen = dLen1 + dLen2; //storing the sum in a separate variable, cause the compiler be complainin' if I put the summation in the square brackets
    int dResult[dInitialLen];
    memset(dResult, 0, dInitialLen * sizeof(int)); //initializing to 0's with memset because C99 won't allow initializing variable-sized objects
    
    //initialing variables for keeping track of indices so the "chunks" of calculations are stored at appropriate "locations" in the array
    int dIndex1 = 0, dIndex2 = 0;
    
    
    
    //going from right to left in sFirst
    for(int i = dLen1 - 1; i >= 0; i--) {
        
        int dPassOver = 0;
        int dDigit1 = sFirst[i] - '0'; //for "converting" from character number to integer number
        
        //updating the index before every iteration, so it's on the left
        dIndex2 = 0;
        
        for(int j = dLen2 - 1; j >= 0; j--) {
            
            //current digit in second number
            int dDigit2 = sSecond[j] - '0'; //for "converting" from character number to integer number
            
            //calculating the product and adding it on the
            int dTmp = dDigit1 * dDigit2 + dResult[dIndex1 + dIndex2] + dPassOver;
            
            //updating for caryying "leftover" for next calculation
            dPassOver = dTmp / 10;
            
            //storing the 10^0 digit only
            dResult[dIndex1 + dIndex2] = dTmp % 10;
            
            //updating index tracker for second number, since done with this iteration
            dIndex2++;
            
        }
        
        //storing the resulte "passed over" into the next position
        //it will surely be less than 10, so we're safe
        if(dPassOver > 0) dResult[dIndex1 + dIndex2] += dPassOver;
        
        //updating the tracking index for first number, since we completed the calculations for it
        dIndex1++;
        
    }
    
    
    //skiping trailing 0's, which are actually leading 0's, since it is in reverse order
    int dFinalLen = dLen1 + dLen2;
    while(dResult[dFinalLen - 1] == 0) dFinalLen--;
    
    
    char sResult[dFinalLen];
    int dIndexTracker = dFinalLen - 1;
    while(dIndexTracker >= 0) {

        sResult[dFinalLen - 1 - dIndexTracker] = dResult[dIndexTracker] + '0';//switching back to charachters
        
        dIndexTracker--;
    }
    
    sResult[dFinalLen] = '\0'; //to prevent any crazy s*** going on
    
    strcpy(sDestination, sResult); //copying the result into the destination location supplied

    
    return strcmp(sDestination, sResult) == 0 ? 1 : 0; //returning 1 if copying successful, else 0
}


//optimized calculation; performed with strings
int redFactStr(char* sNumber, char* sBoundary, char* sDestination) {
    //in case the number is smaller, we will put an exit strategy
    //the numbers will be some cute little ints for now, so we can do comparison in ints
    
    int dNumber = atoi(sNumber), dBoundary = atoi(sBoundary);
    
    if(dNumber < dBoundary) return 1;
    
    char sResult[300];
    
    //"initializing" to 1, simlar to setting value of int variable to 1 when doing iterative multiplication
    strcpy(sResult, "1");
    
    //multiplying until appropriate number reached
    while(dNumber > dBoundary) {

        char sTmpNum[100], sTmpRes[200]; //for storing current number and current product
        
        numberToString(dNumber, sTmpNum);
        //for checking
        printf("\ncurrent res in while in rFS: %s\n", sResult);
        printf("%s should be %d\n", sTmpNum, dNumber);
        
        //sending to multiplication function
        multStr(sTmpNum, sResult, sTmpRes);
        
        //for checking
        printf("\nafter multiplying: %s * %s = %s", sTmpNum, sResult, sTmpRes);
        
        strcpy(sResult, sTmpRes);
        dNumber--;
    }
    
    strcpy(sDestination, sResult);

    return 1;
}

void numberToString(int dNumber, char* sDestination) {
    char sTmp[100]; //this doesn't have to be big because we will have int here for conversion
    int i = 0; //index
    
    while(dNumber != 0) {
        sTmp[i++] = (dNumber % 10) + '0'; //converting to ascii
        dNumber /= 10;
    }
    sTmp[i] = '\0'; //to prevent trouble
    
    //reversing
    int dLen = (int)strlen(sTmp);
    
    char sReverse[dLen];
    i = 0; //resetting
    
    while(i < dLen) {
        sReverse[i] = sTmp[dLen - 1 - i];
        i++;
    }
    
    strcpy(sDestination, sReverse);
}

int isMultipleOf(char* sBigOne, char* sSmallOne) {
   
    //will use k as long long, for simplicity now, should do the trick for solid number of numbers
    
    int dDiff = (int)strlen(sBigOne) - (int)strlen(sSmallOne); //difference in number of digits, will need this later
    if(dDiff < 0) return 0; //in case sBigOne is smaller
    
    //we will optimize the search in the following way
    //if the sBigOne has N1 digits and sSmallOne has N2, than sK can have either N1 - N2 or N1 - N2 + 1, se that where we start and end the search
    //that will be easy check,  because they are in string format
    
    unsigned long long int k = pow(10, dDiff); //initializing to the least possible value

    char sK[dDiff];
    longLongToString(k, sK);
    
    //aditional approximation of k
    
    int dQuo = ((sBigOne[0] - '0') * 10 + sBigOne[1]) / (sSmallOne[0] - '0');
    k = dQuo * pow(10, dDiff - 2); //cause we put "*10" in line 360, so we might get something like 90 / 1, so first two digits in k will then be 90

    longLongToString(k, sK);
    char sInterRes[300]; //for storing intermediate result

    
    while(strlen(sK) + strlen(sSmallOne) <= strlen(sBigOne) + 1 && strcmp(sInterRes, sBigOne) != 0){
        
       
       //multiplying appropriately
       multStr(sSmallOne, sK, sInterRes);
        printf("\nCurrent intermediate res: %s\n\n", sInterRes);
        
        k++;
        longLongToString(k, sK);
        printf("\ncurrent k : %s\n", sK);
        printf("trying to make it work for %s and %s\n\n", sSmallOne, sBigOne);
        
    }
    
    return strcmp(sInterRes, sBigOne) == 0 ? 1 : 0;
}


void longLongToString(unsigned long long int dNumber, char* sDestination) {
    char sTmp[100]; //this doesn't have to be big because we will have int here for conversion
    int i = 0; //index
    
    while(dNumber != 0) {
        sTmp[i++] = (dNumber % 10) + '0'; //converting to ascii
        dNumber /= 10;
    }
    sTmp[i] = '\0'; //to prevent trouble
    
    //reversing
    int dLen = (int)strlen(sTmp);
    
    char sReverse[dLen];
    i = 0; //resetting
    
    while(i < dLen) {
        sReverse[i] = sTmp[dLen - 1 - i];
        i++;
    }
    
    strcpy(sDestination, sReverse);
}
