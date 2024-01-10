#include <stdio.h>
#include <string.h>//strcmp

int main(){
	//declare variables
	char cAnimal, sAnswer[5];

	//message to user
	printf("Welcome to Pet Insurance!\n");
	printf("What kind of animal do you have?\n");

	//scan for user input
	scanf(" %c",&cAnimal);

	//switch cAnimal
	switch(cAnimal){
	case 'd':        printf("Neutered dog or not? Type YES or NO.\n");
					 scanf("%s",sAnswer); //user input for a choice
					 if (strcmp(sAnswer,"YES")==0) //if comparing sAnswer and YES returns 0 success
					 {
					 	printf("A dog that has been neutered costs 50$.\n"); //if yes then some value
					 }
					 else{
					 	printf("A dog that has not been neutered costs 80$.\n"); //if else then another
					 }
					 break;
					 //repeat for other cases according to information provided by the problem
	case 'D':		 printf("Neutered dog or not? Type YES or NO.\n");
					 scanf("%s",sAnswer);
					 if (strcmp(sAnswer,"YES")==0)
					 {
					 	printf("A dog that has been neutered costs 50$.\n");
					 }
					 else{
					 	printf("A dog that has not been neutered costs 80$.\n");
					 }
					 break;
	case 'c':        printf("Neutered cat or not? Type YES or NO.\n");
					 scanf("%s",sAnswer);
					 if (strcmp(sAnswer,"YES")==0)
					 {
					 	printf("A cat that has been neutered costs 40$.\n");
					 }
					 else{
					 	printf("A cat that has not been neutered costs 60$.\n");
					 }
					 break;
	case 'C':		 printf("Neutered cat or not? Type YES or NO.\n");
					 scanf("%s",sAnswer);
					 if (strcmp(sAnswer,"YES")==0)
					 {
					 	printf("A cat that has been neutered costs 40$.\n");
					 }
					 else{
					 	printf("A cat that has not been neutered costs 60$.\n");
					 }
					 break;
	case 'b':   	 printf("A bird costs nothing.\n");
					 break;
	case 'B':		 printf("A bird costs nothing.\n");
					 break;
	case 'r':   	 printf("A reptile costs nothing.\n");
					 break;
	case 'R':		 printf("A reptile costs nothing.\n");
					 break;
	default: 		 printf("We do not have that animal.");

	}//endswitchcase
	return 0;
}//endmain