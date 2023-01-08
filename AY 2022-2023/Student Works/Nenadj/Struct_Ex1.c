#include <stdio.h>
#include <string.h>

struct Triangle
{
	int LengthSideA;
	int LengthSideB;
	int LengthSideC;
	char TriangleColor;
};
int main() {
	struct Triangle T1;
	T1.LengthSideA = 0;
	T1.LengthSideB = 0;
	T1.LengthSideC = 0;
	T1.TriangleColor='\0';
	printf("Enter side A: ");
	scanf("%d", &T1.LengthSideA);
	printf("Enter side A: ");
	scanf("%d", &T1.LengthSideB);
	printf("Enter side A: ");
	scanf("%d", &T1.LengthSideC);
	printf("Insert color (just by first letter: Red-r | Yellow - y etc. -->");
	scanf(" %c", &T1.TriangleColor);
	if(T1.LengthSideA==T1.LengthSideB && T1.LengthSideB==T1.LengthSideC)
	{
		T1.TriangleColor = 'g';
		printf("The Triangle is equilateral! Color change to Green!\n");
	}
	printf("The Triangle with sides A~%d,B~%d,C~%d is with color %c\n", T1.LengthSideA,T1.LengthSideB,T1.LengthSideC,T1.TriangleColor);
	return 0;
}