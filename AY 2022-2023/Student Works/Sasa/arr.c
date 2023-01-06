#include <stdio.h>
int main(){
	
	int dArr[10]; //indexd from 0 to n-1
	int num_of_even = 0;


	for (int i = 0; i<10; i++){
		printf("\nPlease input a number for slot %d: ", i);
		scanf("%d", &dArr[i]);
		if(!(dArr[i]%2)){
			num_of_even++;
		}
	}

for (int i = 0; i<10; i++){
		printf("%d ", dArr[i]);
		
	}
printf("\n number of even numbers: %d\n ", num_of_even);

	//nth element is the one with index n
	//slot n = index n

	//illegal arrqy ops:  printf("%d", dArr);

	return 0;

	
}