#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declaring the variables
  int N, i, j;

  //Ask user to type number
  printf("Please insert a number from 1 to 10: ");
  scanf("%d", &N);

  //Columns
	printf("%4c |", ' ');
	for(i=0; i<=N; i++)
	  printf("%4d", i);
	  printf("\n");

	//Prints the Multiplication table
	for(i=0; i<=N; i++)
	  {
	  	printf("%4d |", i); // prints the rows
	  	for(j=0; j<=N; j++)
	  	{
	  		printf("%4d", i*j); //  %4d for aligning the text on screen
	  	}
	  	printf("\n");
	  }

	system("pause");

//I am sorry that i am not creative in describing codes or putting many comments :)

return 0;
}//endmain
