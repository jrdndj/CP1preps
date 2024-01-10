#include <stdio.h>

int main(){
	//declare variables
	int dNum;

	//message to user
	printf("Please enter a number. To stop the program type 999.\n");

	//while user is inputing
	while(scanf("%d",&dNum)){

		if (dNum==999) //if user enters 999 break while and end the program
		{
			printf("Bye!\n");
			break; //break while
		}//endif
		else{
			for (int i = 0; i < 3; ++i) //repeat for 3 times
			{
				printf("%d",dNum); //print dNum 3 times in the same row
			}
			printf("\n"); //switch to new row
		}//endelse
	}//endwhile
	return 0;
}//endmain