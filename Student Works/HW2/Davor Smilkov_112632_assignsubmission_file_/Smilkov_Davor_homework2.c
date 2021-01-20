#include <stdio.h>
#include <math.h>

int main(){

    //declaration of the variables
    int dT, dN, dK, dCtr1, dCtr2;
    double lfNFact, lfKFact, lfNFactSquare, lfMod;

    // promt the user for integer T
    printf("\n Please insert number T, which represents number of test cases you want to run: ");
    scanf("%d", &dT);

    //check if T is in requested range
    if(dT>=1 && dT <=200000){
        //1st for loop
        for (dCtr1 = 1; dCtr1 <= dT; dCtr1++)
        {
            //promt  the user for integer N
            printf("\n please enter positive integer N: ");
            scanf("%d", &dN);

            //check if N is in the range
            if(dN >= && dN <= 200000){
                
                //set factorials to 1 every time
                lfKFact = 1;
                lfNFact = 1;

                //getting factorial for N
                //2nd for loop
                for(dCtr2 = 1; dCtr2 <= dN; dCtr2++){
                    lfNFact*=dCtr2;
                }//end 2nd for loop

                //square of factorial of N
                lfNFactSquare = lfNFact * lfNFact;

                //getiing factorial for K
                //3rd for loop
                for(dK= 1; dK++){

                    lfKFact = lfKFact*dK;

                    //check if factorial of K is really mulitple of factorial of N (we need to see if remainder is 0)
                    lfMod = fmod(lfKFact, lfNFactSquare);
                    if (lfMod == 0){

                        printf("\n The minimum positive integer K which factorial is multiple of square of factorial of is %d", dK);
                    }
                }
            }
        }
        
    }


    return 0;
}