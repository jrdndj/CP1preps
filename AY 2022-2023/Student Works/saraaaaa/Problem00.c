#include<stdio.h>
#include<string.h>

int main()
{
	char animal;
	char kind;
	printf("Insert type of animal: ");
	printf("D or d - dog \n");
	printf("C or c - cat \n");
	printf("B or b - bird \n");
	printf("R or r - reptile \n");
	
	scanf("%c", &animal);
	getchar();
	printf("%c", animal);
	if((animal == 'D') || (animal == 'd')){
		printf("Enter 'Y' for neutered and 'N' for not neutered:\n ");
		scanf("%c", &kind);
    if(kind == 'Y'){
    	printf("A dog that has been neutered costs $50.");
    }
    else if (kind == 'N'){
    	printf("A dog that has not been neutered costs $80.");
    }
    else {
    	printf("Invalid input");
    }
}

else if((animal == 'C') || (animal == 'c')){
		printf("Enter 'Y' for neutered and 'N' for not neutered:\n ");
		scanf("%c", &kind);
    if(kind == 'Y'){
    	printf("A cat that has been neutered costs $40.");
    }
    else if (kind == 'N'){
    	printf("A cat that has not been neutered costs $60.");
    }
    else {
    	printf("Invalid input");
    }
}
else if((animal == 'B') || (animal == 'R')){
    	printf("A bird or reptile costs nothing.");
    }
    else {
    	printf("Error");
    }

	return 0;
}