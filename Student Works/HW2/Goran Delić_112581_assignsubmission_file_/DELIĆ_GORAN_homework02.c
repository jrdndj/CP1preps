// GORAN DELIĆ 89201217
// 2nd C Homework

//The idea of the task: We have A which is the entry that the user inputs and B that our program writes out. (A!)^2 divides B! without leftovers and voila, we have a solution :)
//After some discussion with other colleagues and the internet, I got some needed help and added some changes to my code, I also figured that unsigned long is best used here because of the overflow as it will always "wrap around" and because of the bigger value availabillity.


#include <stdio.h>
#include <limits.h>
    long long unsigned Fact(long long unsigned lluEntry){   // a method for calculating the factorial of each entry 
    
    long long unsigned lluRes=1;
    for(long long unsigned dCount=1;dCount<=lluEntry;dCount++){
        lluRes*=dCount; 
    }
    return lluRes;
}
long long unsigned FactSqrd(long long unsigned lluEntry){ // a method for calculating the square of the factorials
    long long unsigned lluRes=1;
       for(long long unsigned dCount=1;dCount<=lluEntry;dCount++){
        lluRes*=dCount;
    }
    
    lluRes*=lluRes;
    return lluRes;
    
}
int main(){


    int dSize; // number of elements
    
    printf("\nHow many elements do you want to process?\n");  //entering the number of elements
    scanf("%d",&dSize);
    
    if(dSize<200000){
        long long unsigned lluInputArr[dSize]; // set of elements that will be processed
        
        long long unsigned lluInputSqr[dSize]; // set of squared factorials of the elements that will be processed
        
        long long unsigned lluResFact; // factorial of results
        
        long long unsigned lluResArr[dSize]; // set of end results
      

        for(int dCount=0;dCount<dSize;dCount++){   // entries go into the set of values
            printf("\nPlease enter the values: ");
            scanf("%llu",&lluInputArr[dCount]);
        }
        for(int dCount=0;dCount<dSize;dCount++){  // Here we check if the constraint is satisfied
            if(lluInputArr[dCount]>=200000){
              printf("Please enter a smaller value.");
            }
        }
        for(int dCount=0;dCount<dSize;dCount++){ // putting the squared factorial values into a set
            lluInputSqr[dCount]=FactSqrd(lluInputArr[dCount]);
        }

        for(int dCount=0;dCount<dSize;dCount++){  // going through the set
            for(int dResVal=1;dResVal<200000;dResVal++){// Checking if the constraint is satisfied
                lluResFact=Fact(dResVal);  // factorial of the value we need to print

                if(lluResFact%lluInputSqr[dCount]==0){ // the loop goes until it gets the proper number
                    lluResArr[dCount]=dResVal;
                    break;
                }
            }
        }
        for(int dCount=0;dCount<dSize;dCount++){                 // print of the end result
            printf("\nInput: %llu  ---  Result: %llu",lluInputArr[dCount],lluResArr[dCount]); 
        }

    }
    else{
       printf("\n Incorrect value!");
    }

}




