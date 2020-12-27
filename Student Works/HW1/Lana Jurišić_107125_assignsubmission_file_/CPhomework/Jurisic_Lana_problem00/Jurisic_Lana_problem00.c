//This is a code written by Lana Jurisic, the programm will tell us what type of triangle this is
#include <stdio.h>
#include <math.h>
int main() {


	//We will declare the variables here, I used double because sides and angle could be decimals and I grouped the sides and every variable for angles together
	double dSideA, dSideB, dSideC;
	double dAngleC, dradC;
	double dAngleA, dradA, dsinA;
	double dAngleB, dradB, dsinB;
	const double Pi = 3.1415;
		//Now we ask the user to enter the variables
	printf("Hello, I will tell you the type of triangle you entered if you give me 2 sides and the angle in between!");
	printf("\n Please enter the first side of triangle: ");
	scanf("%lf", &dSideA);
	printf("\n Please enter the second side of triangle: ");
	scanf("%lf", &dSideB);
	printf("\n Please enter the angle: ");
	scanf("%lf", &dAngleC);
	//now we calculate
	if (dAngleC == 90)
	{
		printf("\n This triangle is Right.");
	}
	else if (dAngleC > 90)
	{
		printf("\n This triangle is Obtuse.");
	}
	//If the entered angle is an acute angle, we need to check the rest of the angles
	else
	{
		//first we convert Angle C from degrees to radius
		dradC = dAngleC * Pi / 180;
		//then using Cosine theorem we can use it to find side C
		dSideC = sqrt(dSideA * dSideA + dSideB * dSideB + 2 * dSideA * dSideB * cos(dradC));
		//now that we have side C, we can use sine theorem to find angles A and B
		dsinA = dSideA * sin(dradC) / dSideC;
		dAngleA = asin(dsinA) * 180 / Pi;
		dsinB = dSideB * sin(dradC) / dSideC;
		dAngleB = asin(dsinB) * 180 / Pi;
		//We could have also used side A to find side B, but I felt more comfortable using side C
		//final step, we check if the angles A and B are acute, right or the third one
		if (dAngleA == 90 || dAngleB == 90)
		{
			printf("/n This triangle is Right.");
		}
		else if (dAngleA > 90 || dAngleB > 90)
		{
			printf("\n This triangle is Obtuse.");
		}
		else
		{
			printf("\n This triangle is Acute.");
		}

	}
	return 0;
}

