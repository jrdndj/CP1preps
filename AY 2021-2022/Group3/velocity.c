/*A program that computes the velocity of a falling object. 
We shall use constants in this scenario*/

#include<stdio.h>
#define GRAVITY -9.8
//formula of velocity v = g*t

int main(){
	//declare variables
	//const float GRAVITY = -9.8;
	float fVelocity = 0.0;
	int nTime = 0; 

	//ask for value of t from the user
	printf("\n Please enter value of time: ");
	scanf("%d", &nTime);

	//compute for velocity
	fVelocity = GRAVITY * nTime;
	printf("\n Velocity is %.2f", fVelocity);
	return 0;
}//endmain