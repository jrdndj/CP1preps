#include <stdio.h>
int main(){

/* for(int i=0; i<5; i++){
	for(int k=0; k<i; k++){
		printf(" ");
	}

	for(int j=5; j>i; j--){
		printf("*");
	}
	printf("\n");
}
return 0;

*/

for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(j>=i){
				printf("*");
			}
			else
			 printf(" ");
		}
		printf("\n");
	}
return 0;
}
