#include<stdio.h>

int main(){
//declare variables
	char dAnimal;
	char dAnswer;
//prompt the user for input
	printf("\nPlease enter your animal type: ");
	scanf("%c", &dAnimal);
	getchar();
//print the input to confirm
	printf("\nYou have entered: %c \n ", dAnimal);

//checking poslibillities
	if(dAnimal=='d'|| dAnimal=='D'){ 
		printf("\nHas your dog been neutered? Enter y/n. ");
		scanf("%c", &dAnswer);
		if(dAnswer=='y'){
		printf("\nA dog that has been neutered costs $50.\n");
		}//endif
		else if(dAnswer=='n'){
			printf("\nA dog that has not been neutered costs $80.\n");
		}//endelseif
		else printf("\nError! You have not entered either y or n.\n");
}//endif
	else if(dAnimal=='c' || dAnimal=='C'){
		printf("\nHas your cat been neutered? Enter y/n. ");
		scanf("%c", &dAnswer);
		if(dAnswer=='y'){
		printf("\n A cat that has been neutered costs $40.\n");
		}//endif
		else if(dAnswer=='n'){
			printf("\nA cat that has not been neutered costs $60.");
		}//endelseif
		else printf("\n Error! You have not entered either y or n.");
}//endelseif1

	else if(dAnimal=='r' || dAnimal=='R' || dAnimal=='b' || dAnimal=='B'){
		printf("\nA bird or reptiles costs nothing.");
}//endelseif2
	else printf("\nError! Wrong input!\n");

return 0;

}//endmain