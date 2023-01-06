#include <stdio.h>
int main(){
	//declare variables
	int counter;
	printf("\nEnter the maximum number of asterixes: ");

	//prompt the user for input
	scanf("%d", &counter);

	printf("\nThey look like this:\n\n");
	for (int i = 0; i<=counter; i++ ){
		for (int j = 0; j <= counter; j++){
			if(j>i){
				printf("*");
			}//endif
			else{
				printf(" ");
			}//endelse
		}//endfor2
		printf("\n");
	}//endfor1
	return 0;
}//endmain
