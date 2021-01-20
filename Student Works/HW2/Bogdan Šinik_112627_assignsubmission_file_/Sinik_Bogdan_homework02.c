/* The author of the code: Bogdan Sinik
    ID: 89201023
*/

#include<stdio.h>
#include <math.h>
int main(){
    //declaration of the variabes
    int dT, dN, dK, dCtr1, dCtr2;
    double lfNFact, lfKFact, lfNFactSquare, lfMod;
    
    //promt the user for integer T
    printf("\n Please insert number T, which represents number of test cases you want to run: ");
    scanf("%d", &dT);
    
    //check if T is in requested range
    if(dT>=1 && dT <= 200000){
        //1st for loop
        for(dCtr1 = 1; dCtr1 <= dT; dCtr1++){
             //promt the user for integer N
            printf("\n Please enter positive integer N: ");
            scanf("%d", &dN);

            //check if N is in requested range
            if( dN >= 1 && dN <= 200000){
                
                //set factorials to 1 every time we enter the for loop
                lfKFact = 1;
                lfNFact = 1;
                
                //getting factorial for N
                //2nd for loop
                for( dCtr2 = 1; dCtr2 <= dN; dCtr2++ ){
                    lfNFact*=dCtr2;
                }//end 2nd for loop
                
                //getting square of factorial of N
                lfNFactSquare = lfNFact * lfNFact;;
                
                //getting factorial for K
                //3rd for loop which will go until our if statement is not satistfied
                for( dK = 1; ; dK++){
                    lfKFact = lfKFact* dK;
                    
                    //checking if factorial of K is really multiple of factorial of N (we need to see if remainder is 0)
                    lfMod = fmod(lfKFact,lfNFactSquare);
                    if(lfMod == 0){
                        
                        //if it is, we print K because that is the value we were looking for
                        printf("\n The smallest integer value K which factorial is multiple of square of factorial of N is %d",dK);

                        //we use break to exit the loop
                        break;
                    } //end if
                    
                }//end 3rd for loop

            }//end if 
            
            //else (when N is not ok)
            else{
                printf("\n You need to choose N in range from 1 to 200000!");
            }// end else
        
        }//end 1st for
       
    }//end if
    //else
    else{
        printf("\n You need to choose T in range from 1 to 200000!");
    }//end else
    return 0;
}//end main