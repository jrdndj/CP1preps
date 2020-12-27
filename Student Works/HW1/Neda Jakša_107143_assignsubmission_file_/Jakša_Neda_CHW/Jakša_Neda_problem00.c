//THis code was written by Neda Jakša, unfortunately
#include<stdio.h>
#include<math.h>

int main(){
	
	//defining variables
	double fA,fB,fC;
	double fAlpha, fBeta, fGamma;
	
	//interactive input
	printf("Please enter your triangle sides by order a then b, and then enter your C angle. \n");
	scanf("%lf",&fA);
	scanf("%lf",&fB);
	scanf("%lf",&fGamma);
	
	//*weird math noises*
	fC=pow(pow(fA, 2)+pow(fB, 2)-((2*fA*fB)*cos(fGamma)), 2);
	
	fBeta=cos((pow(fA, 2)+pow(fC, 2)-pow(fB, 2))/2*fA*fC);
		
	fAlpha=cos((pow(fC, 2)+pow(fB, 2)-pow(fA, 2))/2*fC*fB);
	
	//checking if one of the angles are 90
	if((fAlpha==90) || (fBeta==90) || (fGamma==90)){
		printf("Your triangle is a right triangle. \n");
	}//endif
	
	//checking if the triangle is obtuse
	if((fAlpha>90) || (fBeta>90) || (fGamma>90)){
		printf("Your triangle is an obtuse triangle. \n");
	}//endif
	
	//if it isn't one of these, it's gotta be acute
	if((fAlpha<90) && (fBeta<90) && (fGamma<90)){
		printf("Your triangle is a(cute) triangle. aww. \n");
	}//endif
	
	
}//endmain
