/* Second C Homework
   Written by Marina */

#include <stdio.h>

int main()
{
    //declaring variables
    int dCaseNum = 0;
    int aCases[dCaseNum];
    int dCtr = 0;
    int dCtrTwo = 0;
    int dCtrThree = 0;
    int dCounter = 0;
    int dLoop = 0;
    int aFact[dCaseNum];
    int aSq[dCaseNum];
        
    
    //asking the user for input (Number of cases)
    printf("Hello user, please input number of test cases: ");
    scanf("%d", &dCaseNum);
    
    //checking the constraints
    if ( 1 <= dCaseNum && dCaseNum <= 200000) {
        
        //asking the user for input (Cases)
        printf("Please input your test cases\n");
        
        for(dCtr = 0; dCtr < dCaseNum; dCtr++) {
            
                scanf("%d", &aCases[dCtr]);
                
        }//end for
        
         //factorializing the test cases
        for(dCtrTwo = 0; dCtrTwo < dCaseNum; dCtrTwo++) {
                
                for (dLoop = 0; dLoop < aCases[dCtrTwo]; dLoop++) {
                    
                    aFact[dCtrTwo] = aCases[dCtrTwo] * dLoop;
                    
                }//end inner for
                
            }//end for
    
         //square-ing the test cases
        for(dCtrThree = 0; dCtrThree < dCaseNum; dCtrThree++) {
                
                for (dLoop = 0; dLoop < aCases[dCtrThree]; dLoop++) {
                    
                    aSq[dCtrThree] = aFact[dCtrThree] * aFact[dCtrThree];
                    
                }//end inner for
                
            }//end for
    
    }//end big if
    
    else {
        
        printf("Unfortunately your number doesn't meet our constraints");
        
    }//end else
    
    //printing the result
    for (dCounter = 0; dCounter < dCaseNum; dCounter++) {
        
        printf("%d\n", aSq[dCounter]);
    }

    return 0;

}//end main