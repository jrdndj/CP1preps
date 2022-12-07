#include <stdio.h>

int main(){
	int da;
	float fb, fsum;
	double fc;

	printf("\n Enter integer: ");
	scanf("%d", &da);

	printf("\n Enter float: ");
	scanf("%f", &fb);

	printf("\n Enter double: ");
	scanf ("%lf", &fc);

	//add them where -we do impicit casting
	fsum=da + fb + fc;
	printf("\n The sum od %d, %.1f and %.2f is %.3f \n", da, fb, fc , fsum );
	return 0;
}//endmain