#include<stdio.h>
#include<math.h> // import library for handling cosine functions

const double PI = 3.141592654; // define PI
int main(int argc, char const *argv[])
{
	double a,b,c;
	double dAngleC,dCosine; // angle and cosine of angle
	double dPythagoreanTest, dHyS; // test variabe for Pthagorean theoreme and square of hypotenuse 
	printf("Input lengths of side a: ");
	scanf("%lf",&a);
	printf("Input lengths of side b: ");
	scanf("%lf",&b);
	printf("Input messure of angle: ");
	scanf("%lf", &dAngleC);
	if (dAngleC == 90)
	{
		printf("Your triangle is right.\n");
	}
	else if (dAngleC > 90)
	{
		printf("Your triangle is obtuse.\n");
	}
	else{ // we can't determine anything yet from provided angle - triangle can be obtuse, acute or right
		 // we only know that AngleC is acute
		
		dAngleC = (dAngleC * PI) / 180; // switch angle to radians (as cos function accepts argument in that format)
		dCosine = 2*a*b*cos(dAngleC); // cosine part of cosine law
		c = (a*a) + (b*b) - dCosine;
		printf("%lf\n", );
		if (c > a && c > b){
			// angle in front of biggest side is biggest angle, and as it's acute ( > 90),other two are also acute 
			printf("Your angle is acute\n");
			return 0;
		}
		// c isnt' hypotenusis
		else if (a > b){ // a is hypotenusis
			dHyS = a * a;
			dPythagoreanTest = b*b + c*c;
		}
		else{ // b is hypotenusis
			dHyS = b*b;
			dPythagoreanTest = a*a + c*c;
		}

		if (dPythagoreanTest == dHyS){ // by Pythagorean Theoreme k1*k1 + k2*k2 = h*h --> biggest angle is 90
			printf("Your triangle is right.\n");
		}
		else if (dPythagoreanTest < dHyS){// by Pythagorean Theoreme k1*k1 + k2*k2 < h*h --> biggest angle is obtuse
			printf("Your triangle is obtuse.\n");
		}
		else{// by Pythagorean Theoreme k1*k1 + k2*k2 > h*h --> biggest angle is acute
			printf("Your angle is acute\n");
		}

}
}