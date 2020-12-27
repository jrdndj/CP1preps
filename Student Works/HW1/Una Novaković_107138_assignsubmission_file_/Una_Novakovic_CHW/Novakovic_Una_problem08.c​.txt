#include <stdio.h>
#include <stdlib.h>



int main()
{
  //declaring the variables
  int N;
  int i;
  int j;


  //interactive input
  printf("Please insert a number from 1 to 10: ");
  scanf("%d", &N);

  //prints the columns
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







return 0;
}//endmain