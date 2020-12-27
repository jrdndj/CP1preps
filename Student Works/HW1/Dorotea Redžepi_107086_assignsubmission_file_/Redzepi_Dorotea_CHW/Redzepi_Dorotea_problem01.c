#include<stdio.h>
#include <ctype.h>

int main(){

	char cAnimal;
	int dNeur;
	
	printf("Please eneter kind of animal is your pet (d for dog, c for cat, b for bird or r for reprile): ");
	scanf("%c", &cAnimal);
	
	cAnimal = tolower(cAnimal); // we convert the input to lowercase so we have to check less cases in switch statment (if the user entered the input in upper case)
	
	
	// if the user entered that the animal is a cat or a dog we ask if the animal is neutered
	
	if (cAnimal == 'd' || cAnimal == 'c'){
		printf("If your pet is neutered type 1, or 0 if it's not: ");
		scanf("%d", &dNeur);
	}
	
	switch ( cAnimal ){
		case 'd':
			if ( dNeur == 0 ){
				printf("A dog that has not been neutered costs $80.\n");
			}
			else{
				printf("A dog that has been neutered costs $50.\n");
			}
			break;
		case 'c':
			if ( dNeur == 0 ){
				printf("A cat that has not been neutered costs $60.\n");
			}
			else{
				printf("A cat that has been neutered costs $40.\n");
			}
			break;
		case 'b':
			printf("A bird costs nothing.\n");
			break;
			
		case 'r':
			printf("A reptile costs nothing.\n");
			break;
		default:
			printf("Sorry your animal is not on our list.\n");
			break;
	}

	return 0;
}
