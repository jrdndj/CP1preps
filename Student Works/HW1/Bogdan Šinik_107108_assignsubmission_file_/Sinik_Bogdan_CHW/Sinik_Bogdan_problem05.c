#include<stdio.h>
int main(){

//declaring variables 
int dInput;
//promt the user
printf("\n Please insert a number: ");
scanf("%d", &dInput);
//for loop
for(int i=1; i<=dInput; i++) {
			//inner for loop
			for(int j=1; j<=i; j++) {
				printf("*");
				
			}
			printf("\n");
		}//end for loop
		
		
		//outer for loop
		for(int i=dInput-1; i>=1; i--) {
			//inner for loop
			for(int j=1; j<=i; j++) {
				printf("*");
				
			}//end inner for loop
			printf("\n");
			}//end outer for loop
    return 0;
}