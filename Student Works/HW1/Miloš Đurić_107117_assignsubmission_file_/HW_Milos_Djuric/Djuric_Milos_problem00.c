#include <stdio.h>
#include<math.h>


int main (int argc, char *argv[]) {

double da, db, dc, dA, dB, dC;

printf("Enter side a:");
scanf("%lf", &da);
printf("Enter side b:");
scanf("%lf", &db);
printf("Enter andle C:");
scanf("%lf", &dC);

if (dC == 90) {
	printf("Right Triangle");
	return 0;
} else if (dC > 90) {
	printf("Obtuse Triangle");
	return 0;
}


dc = sqrt(da*da + db*db);		// c length

double dCosA = (da*da - db*db - dc*dc) / (-2 * db * dc);
dA = acos(dCosA);			// in rad
dA = dA * 180 / M_PI;		//degrees = radians × 180° / π

double dCosB = (db*db - da*da - dc*dc) / (-2 * da * dc);
dB = acos(dCosB);	// in rad
dB = dB * 180 / M_PI;

//printf("A %lf B %lf\n", dA, dB);
//printf("%lf\n", M_PI/2);	//90° = π/2 radian

//if (M_PI/2)

if (dA == 90 || dB == 90) {
	
	printf("Right Triangle");
	
} else if (dA < 90 && dB < 90) {
	printf("Acute Triangle");
	
} else if (dA > 90 || dB > 90) {
	
	printf("Obtuse Triangle");
	
} else {
	
	printf("impossible error. debug your calculations");
}



return 0;
}