#include<stdio.h>
int main(){

	for(int i=1; i<=10; i++){

		for(int j=1; j<=10; j++){

			if((i*j)/10==0){
				printf("0%d ", i*j);
			}
			else {
				printf("%d ", i*j);
			}

		}

		printf("\n");

	}

	return 0;

}//end main
