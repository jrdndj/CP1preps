#include <stdio.h>
int main(){
	char animal;
	char operation;

	printf("Enter a kind of animal: \n");
	scanf("%s", &animal);
 getchar();
	switch(animal){
	case 'd':
		printf("Is the dog nertured? [y/n]\n");
		scanf("%c", &operation);
		switch (operation){
		case 'y':
			printf("50$\n");
			break;
		case 'n':
			printf("80$\n");
			break;
		}
		break;
	case 'c':
		printf("Is the cat nertured? [y/n]\n");
		scanf("%c", &operation);
		switch (operation){
		case 'y':
			printf("40$\n");
			break;
		case 'n':
			printf("60$\n");
			break;
		}
		break;
	case 'b':
		printf("A bird or reptile doesn't cost nothing\n");
		break;
	default:
		printf("Error!\n");
	}
	return 0;
}