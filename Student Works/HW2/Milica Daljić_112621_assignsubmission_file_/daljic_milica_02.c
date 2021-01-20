#include <stdio.h>
	int returnFactorial();
	int main(){
		//variables declaration
		int dUserInput; 
		int dFactorialOfUserInput;
		int dSquareOfFactorialNumber;
		//asking for user input
		printf("Please, insert one number: ");
		scanf("%d", &dUserInput);
		//factorial of number that is inserted
		dFactorialOfUserInput = returnFactorial(dUserInput); 
		//square of computed factorial
		dSquareOfFactorialNumber = dFactorialOfUserInput * dFactorialOfUserInput; 
		printf("Factorial of number that You have inserted is: %d\n", dFactorialOfUserInput);
		printf("Square of factorial of number that You have inserted is: %d\n", dSquareOfFactorialNumber);
		printf("I do not understand what should I do untill the end of the program, so this is something, at least :D\n");
		return 0;
	}
		int returnFactorial(int dNumber){
			
			int dFactorial = 1;
			
			 for(int i=1; i <= dNumber; i++){    
	      		dFactorial=dFactorial*i;    
	  		}//end if 
	  		
	  		return dFactorial;
		}//end method returnFactorial