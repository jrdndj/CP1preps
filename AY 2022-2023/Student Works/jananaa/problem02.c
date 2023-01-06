#include <stdio.h>
int main(){

	int n;
	float sum, avg;
	printf("Enter number of elements: \n");
	scanf("%d", &n);

	int i, array[n];
	printf("Enter positive integers: ");
	for(i=0; i<n; i++) {
    scanf("%d", &array[n]);
	}

	for (i = 0; i < n; ++i) {
       sum + array[i];
   }

	if (array[n] <= 0){
		if(array[n] == 0)
			printf("No average!");	
		else
			printf("Error!");
	}
	else
		printf("You entered a positive number");
	

	return 0;

}