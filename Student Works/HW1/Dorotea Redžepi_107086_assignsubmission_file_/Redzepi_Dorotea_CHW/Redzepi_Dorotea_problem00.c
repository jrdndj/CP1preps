#include<stdio.h>
#include<math.h>

#define PI 3.1415926

/*

	The idea of the program is the following:
	-program will first calculate the side c
	-Then it will find what is the largest side, since the
	 largest angle must be on the opposite of the largest side
	-and finially it will calculate what is the value of cosinus of the
	 angle on the opposite of that side
	- if value of the cosinus is negative, the angle is obtuse
	- if the value of cosinus is 0, then it's the right angle
	- and if the value of cosinus is positive then the angle is acute
*/

int main(){
	double a, b, c; // declaring all three sides of a triangle as floats
	double angleC; // declaring angle C as float 
	double dTemporary; 
	double fCosA;
	
	printf( "Input side a: ");
	scanf( "%lf", &a);
	
	printf( "\nInput side b: " );
	scanf( "%lf", &b);
	
	printf( "\nInput angle C: ");
	scanf( "%lf", &angleC);
	
	// calculate side c
	c = sqrt( a*a + b*b - 2*a*b*cos(angleC*PI/180));
	
	// find the largest value
	if ( b > a ){
		dTemporary = a;
		a = b;
		b = dTemporary;
	}
	if ( c > a ){
		dTemporary = a;
		a = c;
		c = dTemporary;
	}
	
	// We know now that a is the largest side so we can only check if the
	// angle on the opposite of a is obtuse or right
	
	fCosA = (b*b + c*c - a*a) / (2*b*c); // calculating cos of A
		
		// we allow the cosinus of A to be close to 0 up to certain level 
		// (it does not have to take exact value of 0 because we are working with floats)
		
		if ( fCosA > 0.0000001 ){
			printf( "Acute Triangle.\n" );
		}
		else if ( fCosA < -0.0000001 ){
			printf( "Obtuse Triangle.\n");
		}
		else{
			printf( "Right Triangle.\n");
		}
		
	return 0;
}
