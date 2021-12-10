/*this program allows us to use the formula for velocity
with the help of constants*/
#include<stdio.h>
//#define GRAVITY -9.8

int main(){
	//declare variables 
	const float GRAVITY = 9.8;
	float fVelocity=0.0;
	int nTime=0;

	printf("\n Please enter value of time: ");
	scanf("%d", &nTime);

	//compute for velocity = g*t
	fVelocity = GRAVITY * nTime;
	printf("\n The velocity is %.2f. ", fVelocity);
	return 0; 
}//end main