#include <stdio.h>

int main(){
	int dArr[10], dOddctr=0;
	
	for (int dctr = 0; dctr < 10; dctr++){
		
		printf("Enter a number for slot %d: ",dctr);
		
		scanf("%d", &dArr[dctr]);
		
		}
		printf("\n");

	for (int dctr = 0; dctr < 10; dctr++){

		printf("%d ", dArr[dctr]);

		if (dArr[dctr]%2!=0){
			dOddctr++;
		}
		
	}
	printf("\n");

	printf("\nThere are %d odd numbers in your array.\n",dOddctr);


	return 0;
}
