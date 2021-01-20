/*
    Program written by Etian Križman [89201173] for CP's second
    homework. 
    ()
*/

#include<stdio.h>

        //a method that computes the factorial of *a*
    int factorial(int a){
        int fact = 1;
        for(int i = 1; i <= a; ++i){
            fact *= i;
        } //credit for inspiration: https://www.programiz.com/c-programming/examples/factorial
        
        //printf("%d", fact);
        return fact;
    }
            
    
int main(){

        //defining var for user input
    int dUserInput; // number of test cases
    

        //asking for user input
    printf("Please enter the number (positive integer) of test cases \n");
    scanf("%d", &dUserInput);

        //declaring the array to store the test cases
    int dInputCases[dUserInput];
    
        //Checking wether the the user input is fulfilling the criteria ( 0 < T < 200000)
    if( dUserInput < 1){
        printf("Error: the number you entered is not positive.\nPlease restart the program.");
        return 0;
    } else if( dUserInput > 200000){
        printf("Error: the entered number is too big.\nPlease restart the program.");
        return 0;
    } else

        //Reading the test cases
    printf("Please enter the test cases:\n");
    for(int i = 0; i < dUserInput; i++){
        scanf("%d", &dInputCases[i]);
    }
   
   
        //Loop to check if the input has been stored
    /*
    for(int j = 0; j < dUserInput; j++){
        printf("%d\n", dInputCases[j]);
    }
    */
        //checking if method works
    //printf("120 * 120 = %d", factorial(5)*factorial(5));



        //formula N!^2 = K! * k
    for(int i = 0; i < dUserInput; i++){
       printf("%d = K! * k",factorial(dInputCases[i]) * factorial(dInputCases[i]), factorial(K), dMultiple);  
    }
    


    return 0;
}