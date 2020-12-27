#include <stdio.h>

int main()
{
	//declaring variables
	double fa, fb, fc;
	double fAlpha, fBeta, fGamma;
	double fCosAlpha, fCosBeta, fCosGamma;
	//asking the user to input the required values
	printf("Enter the value of the first triangle side: \n");
	scanf_s("%lf", &fa);
	printf("Enter the value of the second triangle side: \n");
	scanf_s("%lf", &fb);
	printf("Enter the value of one angle: \n");
	scanf_s(" %lf", &fGamma);

	//using math formulas to calculate the missing values but some of these don't seem to work properly i think

	fCosGamma = cos(fGamma);
	fc = ((fa * fa) + (fb * fb) - (2*fa*fb*fCosGamma));
	fc = sqrt(fc);
	fBeta = cos((pow(fa, 2) + pow(fc, 2) - pow(fb, 2)) / 2 * fa * fc);
	fAlpha = cos((pow(fc, 2) + pow(fb, 2) - pow(fa, 2)) / 2 * fc * fb);

	//printing the results
	//if
	if ((fAlpha == 90) || (fBeta == 90) || (fGamma == 90)) {
		printf("This is a right triangle \n");
	}//endif

	//elseif
	else if ((fAlpha > 90) || (fBeta > 90) || (fGamma > 90)) {
		printf("This is an obtuse triangle \n");
	}//endif

	//elseif
	else if ((fAlpha < 90) && (fBeta < 90) && (fGamma < 90)) {
		printf("This is an acute triangle \n");
	}//endif


	return 0;
}