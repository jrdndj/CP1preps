//Find if triangle abc is acute, right or obtuse
#include<stdio.h>
#include<math.h>
#define PI 3.141559265358979323846
int main() {
	//declare variables
	double da, db, dC; //da = side a, db = side b, dc = side c

	//user input
	printf("Input side a: ");
	scanf_s("%lf", &da);
	printf("Input side b: ");
	scanf_s("%lf", &db);
	printf("Input angle C: ");
	scanf_s("%lf", &dC);

	dC = (dC * PI) / 180;
	double cosine = cos(dC);
	double dcsquared = (da * da) + (db * db) - (2 * da * db * (cosine));
	double dc = sqrt(dcsquared);
	if (da * da + db * db == round(dc) * round(dc)) {		//Pythagoras theorem to find acute, right and obtuse triangle with just the sides.
		printf("The triangle abc is right.");
	}
	else if (da * da + db * db > dc * dc) {
		printf("The triangle abc is acute");
	}
	else {
		(da * da + db * db < dc* dc);
		printf("The triangle is obtuse");
	}
	return 0;
}