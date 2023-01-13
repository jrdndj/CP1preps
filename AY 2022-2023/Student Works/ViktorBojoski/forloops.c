#include <stdio.h>
int main(){
	int dnum1, i ,j, k;

	printf("\n Enter number: ");
	scanf("%d", &dnum1);
	for (i=dnum1; i>=1; i--){
			
		for (j=dnum1; j>i; j--){
			printf(" ");
		}
		for (k=1; k<=i; k++){
			printf("*");
		}
			printf("\n");
	}
			return 0;
}
