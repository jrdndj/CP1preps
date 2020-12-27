#include<stdio.h>


int main(){
	
	//initalize and declare the variable 
	int a=0;
		
	//user input
	printf("\n How many asterisks do you want your pyramid to have?\n");
	scanf("%d",&a);

	//printing the first half of the pyramid, until the program reaches 5 stars 
	for(int i=1; i<=a; i++){
		//printing spaces 
		for(int j=1; j=i-i; j++){
			printf(" ");
		}
	//printing stars 
		for(int z=1; z<=i; z++){
			printf("*");
		}
	//printing a new line after each row of stars
	printf("\n");
	}
	
	//printing the lower half by subtracting 1 from the user's input so it would not start with ie 5 but with 4
	for(int i=1; i<=a-1; i++){
		for(int j=1; j=i*0; j++){
			printf(" ");
		}
		for(int z=1; z<=a-i; z++){
			printf("*");
		}
	printf("\n");
	}


return 0;
}//end main