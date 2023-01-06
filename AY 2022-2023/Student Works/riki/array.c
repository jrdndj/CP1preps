#include<stdio.h>
int main(){
int dArr[10], dEvenCtr=0;
for (int i=0; i<10; i++){
	printf(" \n Enter a number for slot %d: ", i);
	scanf("%d",&dArr[i]);
	if (dArr[i] % 2==0){
	dEvenCtr++;
	}
}
printf("\n");
for (int i=0; i<10; i++){
	printf("\n");
	printf("%d", dArr[i]);
}
printf("\n The number of even numbers is %d \n", dEvenCtr);
return 0;
}
