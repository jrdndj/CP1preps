#include<stdio.h>
main() {
	int dNumb;
	int dSum=0;
	int dCountPos=0;
	int dCountNeg=0;
	float dAverage=0;
	scanf("%d",&dNumb);
	
	while (dNumb!=0){
	if (dNumb>0) {
	dSum=dSum+dNumb;
	dCountPos++;}
	if(dNumb<0){
		dCountNeg++;
		printf("\n Error \n");}
		scanf("%d",&dNumb);}
	dAverage=dSum/dCountPos;
	if (dNumb==0) { if((dCountNeg+dCountPos)==0) { printf("\n Error no sum \n");}
	else { printf("\n %f ", dAverage);}}
	return 0;
}
