#include <stdio.h>

int main()
{
	//declaring variables
	char dogNeu='d';
	char catNeu='c';
	char bird='b';
	char reptile='r';
	char c,a;
	printf("Please enter an animal as follows:\n");
	printf("d for a dog \n");
	printf("c for a cat \n");
	printf("b for a bird \n");
	printf("r for a reptile\n");
	//getting variable
	scanf("%c",&c);
	switch(c)
	{
		case 'd' :
			printf("Is the dog neutered? Write y or n \n");
			getchar();
			scanf("%c",&a);
			switch (a){
				case 'y':
					printf("Insurance fee is 50\n");
					break;
				case 'n':
					printf("Insurance fee is 80\n");
					break;
				default:
					printf("Error");
					break;
			}//end inner switch
			break;
		case 'c' :
			printf("Is the cat neutered? Write y or n \n");
			getchar();
			scanf("%c",&a);
			switch (a){
				case 'y':
					printf("Insurance fee is 40\n");
					break;
				case 'n':
					printf("Insurance fee is 60\n");
					break;
				default:
					printf("Error");
					break;
			}//end inner switch
			break;
		case 'b' :
		case 'r' :
			printf("Insurance is free \n");
			break;
		default:
			printf("Error\n");
			break;
	}//end outer switch
	return 0;
}