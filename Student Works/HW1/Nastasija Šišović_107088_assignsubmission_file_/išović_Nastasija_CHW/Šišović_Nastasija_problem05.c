#include<stdio.h>

    /*Allow the user to enter a number. This number will determine the maximum number of asterisks
    in a row. Print a left-based triangle that will have the user’s input number as the maximum
    number. For example, if the user inputs the number 5, the output should be as displayed below:
    */

    int main(){

       //Declare variables
        int n;
    //User input
    printf("Please enter number n: ");
     scanf("%d",&n);
		// For-loop
		for (int i=1; i<=n; i++) {
			//Inner for-loop
			for(int j=1; j<=i; j++) {
				printf("*");
			}//Endfor-loop
			//next line
			printf("\n");
		}//Endfor1
			for (int i=1; i<=n; i++) {
			//Inner for-loop
			for(int j=1; j<=n-i+1; j++) {
				printf("*");
	}//Endfor-loop1
			printf("\n");
		}//Endfor2

return 0;
    }//End
