#include <stdio.h>

int main(int argc, char const *argv[]){

	char sWord[12] = "onomatopoeia";
	int dLen = strlen(sWord), userinput;

	printf("\nenter number: ");

	scanf("%d",&userinput);



	for (int i = 0; i <=dLen-userinput; ++i){

		for (int j = i; j <i+userinput ; ++j){
			
			printf("%c",sWord[j] );
		}
		if (i!=dLen-userinput){
			printf(", ");
		}
	printf("\n");
	}


	


	return 0;
}
