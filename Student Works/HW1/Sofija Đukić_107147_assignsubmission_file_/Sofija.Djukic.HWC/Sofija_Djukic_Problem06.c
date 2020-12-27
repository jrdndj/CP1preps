#include<stdio.h>
main() {
	int i=1;
	int dOne;
	int dMax;
	int dNumb;
	scanf("%d",&dOne);
	dMax=dOne;
	while (i<10){
		scanf("%d",&dNumb); 
	if(dNumb>dMax) {dMax=dNumb;};	
	i++;}
	printf("Max value is %d", dMax);
	return 0;
}
