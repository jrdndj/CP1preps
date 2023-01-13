#include<stdio.h>
int main()
{
	int dLen , counter=0, dInput;
	char sWord[12] = "onomatopeia";
	dLen = strlen(sWord);
	
	printf("\n Enter your num here: ");
	scanf("%d", &dInput);
	

	for(int i=0; i<=dLen-dInput; i++){
		for(int j=i; j<i+dInput; j++){
			printf("%c", sWord[j]);
		}
		if ( i!= dLen-dInput ){
			printf(", \n");
		}
		counter++;
	}//endfor

	printf("\n There are %d groupings: ", counter);

	return 0;
}//endmain
