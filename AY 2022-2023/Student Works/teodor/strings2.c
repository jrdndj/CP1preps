#include <stdio.h>
#include <string.h>

int main(){
	char sWord[12] = "onomatopoeia";
	int dLen = strlen(sWord), input;
	printf("\n Insert number: ");
	scanf("%d", &input);
	for(int i=0; i<dLen-input; i++){
		for(int j=i; j<i+input;j++){
			printf("%c", sWord[j]);
		}
	printf("\n");
	}

	return 0;
}