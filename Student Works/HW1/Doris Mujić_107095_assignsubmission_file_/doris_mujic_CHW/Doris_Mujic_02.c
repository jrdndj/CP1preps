#include<stdio.h>

int main(){

	//declare and initialize variable 
	int a=0;

	//user input
	printf("\nHow many rows do you want\n");
	scanf("%d",&a);
	
	//1st loop is for lines i
	for(int i=1; i<=a; i++){
		//2nd loop is for the number of spaces
		for(int j=0; j<=i-1; j++){
			printf(" ");
		}
		//3rd loop is for the number of stars 
		for(int z=1; z<=(a-i)+1; z++){
		printf("*");
		}
	//at the end of the first loop print a new line and then repeat the loop until condition is met 
	printf("\n");
	}

return 0;
}//end main