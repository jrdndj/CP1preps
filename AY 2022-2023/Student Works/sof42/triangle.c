#include<stdio.h>
#include <string.h>

// RECORDS

struct Triangle{
	// values for the sides
	int a;
	int b;
	int c;
	char color;
}; // struct end

int main(){
	struct Triangle Triangle1;
		printf("\nEnter side a of the triangle: ");
		scanf("%d", &Triangle1.a);
		printf("\nEnter side b of the triangle: ");
		scanf("%d", &Triangle1.b);
		printf("\nEnter side c of the triangle: ");
		scanf("%d", &Triangle1.c);
		printf("\nEnter the color of the triangle: ");
		scanf("%c", &Triangle1.color);
		getchar();

		// check if equilateral
		if (Triangle1.a==Triangle1.b && Triangle1.b==Triangle1.c){
			Triangle1.color = 'g';
		}// end if
		printf("\nThe triangle is now of color: %c.\n", Triangle1.color );

	return 0;
}// end main