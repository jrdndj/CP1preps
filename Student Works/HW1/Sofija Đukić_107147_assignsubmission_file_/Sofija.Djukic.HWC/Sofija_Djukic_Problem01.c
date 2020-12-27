#include<stdio.h>
main() {
	// declaring the variables
	char sPet[10];
	char sNeutered[3];
	
	
	printf("\nPlease insert the breed of your pet: dog, cat,bird, reptile \n");
	scanf("%s", sPet);
	printf("\n Is your pet neutered? Answer with yes or no \n");
	scanf("%s", sNeutered);
	
	if (sPet=="dog") {
		if (sNeutered=="yes") {printf("\n The cost of the insurance is 50$ \n");}
		else {printf("\n The cost of the insurance is 80$");}
		}
	
	if (sPet=="cat") {
		if (sNeutered=="yes") {printf("\n The cost of the insurance is 40$ \n");}
		else {printf("\n The cost of the insurance is 60$");}
		}
		
	if (sPet=="reptile" || sPet=="bird") {
		printf("\n The insurance for your pet costs nothing \n");}
		
	else 	printf("\n Error has occured, we do not provide insurance for your pet \n");
	
	
	return 0;
}
