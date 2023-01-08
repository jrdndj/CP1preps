#include <stdio.h>
#include <string.h>
int main() {
	//declare variables and array
	int n, i;
	int dCtr=0;
	char sWord[12] = "onomatopoeia";
	int dLen = strlen(sWord);

	//ask for user input
	printf("\n Enter the value for n: ");
    scanf("%d", &n);

	//for loop to print the elements from array for chosen n + count amout of them
	for (int i=0; i<dLen-n; i++){
		for (int j=i; j<i+n; j++){
			printf("%c", sWord[j]);
		}
		if (i != dLen-n){
		printf(", ");
		}
		dCtr++;
	}//endofloop
	
	//print amout of "n-elements"
	printf("\n %d\n", dCtr);
	return 0;
}//endofmain