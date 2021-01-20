//Sofija Djukic 89201075
#include<stdio.h>
//inicialize methods
int GCD(int,int);
int Fak(int);

main() {
	// dL-number entered numbers, creating an array of input values initializing dI-start value of counter; 
	// from homework text a=k*b i used it in this form dK!=dA*(dN!)^2, input value is dN[i]
	// Idea is to find dA such that dN[i]! devides dA and dA*dN[i]! is factorial of dK, and dA is minimal
	//For dA to be minimal we checked for greatest common divisor of dA and dN[i]! 
	//if GCD !=1 then we do line 25 and 26
	int dL;
	scanf("%d",&dL);
	int dN[dL];
	for (int i=0; i<dL;i++) {
		scanf("%d",&dN[i]); }
	int dOutPut[dL];
	for (int i=0; i<dL;i++) {
	int dR=Fak(dN[i]);
	int dI=1;
	int dA=1;
	int dK;
	while (dR!=1) {
		if (GCD(dR,dN[i]+dI)!=1) {
			dR=dR/GCD(dR,dN[i]+dI);
			dA=dA*(dN[i]+dI)/GCD(dR,dN[i]+dI);
		}
		else {
		dA=dA*(dN[i]+dI);
		}
		dI=dI+1;}
	dK=dN[i]+dI-1;	
	dOutPut[i]=dK;}
	//second loop and array for printing out the solutions
		for (int i=0;i<dL;i++) {
	printf("%d \n",dOutPut[i]);
		
	}

	return 0;
}
//this gives back factoriel
int Fak(int dM) {
	int dRez=1;
	while (dM!=0) {
		dRez=dRez*dM;
		dM=dM-1;
	}
	return dRez;
}
//this gives back greatest common divisor
int GCD(int dX, int dY)
{
    if (dY == 0)
        return dX;
    return GCD(dY, dX % dY); 
}
