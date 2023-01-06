#include<stdio.h>

int main(){
//declare variables
	int dNum;
	printf("\nInsert the number up until you want prime numbers to: ");
	scanf("%d", &dNum);
	printf("\nPrime numbers are up to %d are: \n", dNum);
	
	for(int i=2; i<=dNum; i++){
		int dCount=0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
				dCount++;
			}
		}//endfor2
		if(dCount==2){
			printf("%d ", i);
		}//endif
	}//endfor1
	printf("\n");
}//endmain