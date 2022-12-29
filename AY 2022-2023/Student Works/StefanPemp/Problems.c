//00.c
#include <stdio.h>
#include <string.h>
int main(){
	char sWord[10];
	int dLen=0;
	printf("\nEnter a name of an animal: D or d - dog, C or c - cat, B or b - bird, R or r - reptile: \n");
	scanf("\n%s", sWord);
	dLen = strlen(sWord);
	for(int i=0; i<dLen; i++){
	switch(sWord[i]){
		case 'd':
		case 'D': 
			printf("A dog that has been neutered costs $50\n");
			printf("A dog that has not been neutered costs $80\n");
			break;  
		case 'c':
		case 'C':
			printf("A cat that has been neutered costs $40\n");
			printf("A cat that has not been neutered costs $40\n");
			break;
		case 'b':
		case 'B':
			printf("Rent free"); 
		case 'r':
		case 'R':
			printf("Rent free!");
		default:
			printf("No animal under that initial.");
		 break;
		}
	}
	return 0;
}

#include <stdio.h>
int main(){
	//Problem 01.c
	int dNum;
	printf("Enter a number: ");
	scanf("%d", &dNum);
	for (int i=0; i<dNum; i++){
		for (int j=0; j<i; j++){
			printf(" ");
		}
		for (int k=i; k<dNum; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}//end main

#include <stdio.h>
int main(){
	//Problem 04.c
	int dNum2;
	printf("Enter a number: ");
	scanf("%d", &dNum2);
	for (int i=0; i<dNum2; i++){
		for (int j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	for (int i=0; i<dNum2; i++){
		for (int j=i; j<dNum2; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}//end main

#include <stdio.h>
int main(){
	int dArr[10];
for(int dCtr = 0; dCtr<10; dCtr++){
	printf("\n Enter num %d: ", dCtr);
	scanf("%d", &dArr[dCtr]);
	} //end for
	printf("\n");
for(int dCtr=0; dCtr<10; dCtr++){
	printf("%d ", dArr[dCtr]);
	}

	printf("\n Even numbers in the array are: ");
	for (int dCtr = 0; dCtr<10; dCtr++){
	if ( dArr[dCtr]%2==0 ){
		printf("%d ", dArr[dCtr]);
	}
}

	printf("\n Even numbers in the array are: ");
	for (int dCtr = 0; dCtr<10; dCtr++){
	if ( dArr[dCtr]%2!=0 ){
		printf("%d ", dArr[dCtr]);
	}
}
	return 0;
}//end main


#include <stdio.h>
int main(){
	int i,n,dMin,dNum;
	printf("Enter 10 integers: ");
	for (i=0;i<10;i++){
		scanf("%d", &dNum);
		if (dNum < dMin){
			dMin = dNum;
		}
	}
	printf ("The smallest integer in the list is: %d \n", dMin);

	return 0;
}
