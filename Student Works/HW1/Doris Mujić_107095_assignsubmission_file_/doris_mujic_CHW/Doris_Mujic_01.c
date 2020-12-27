#include<stdio.h>
#include<string.h>

int main(){

	//introduction to the program
	printf("\n Hello, we have upgraded ur organizations way of pying for yoyr pets insurance\n");
	printf("\n Please tell us the type of pet you own\n");
	
	//declaration of the variable 
	char sInput[100];
	scanf("%s",sInput);

	if("%s",sInput=="dog" && sInput=="Dog"){
		printf("\n Is your dog neutered?, type yes if yes and type no if not\n");
		char nInput[5];
		scanf("%s",nInput);
			if(nInput=="yes"){
				printf("\n The insurance costs 50$, do you wish to proceed?\n");
				}
			else if(nInput=="no"){
			printf("\n The insurance costs 80$, do you wish to proceed?\n");
					}
				}
	
	else if(sInput=="cat" || sInput=="Cat"){
		printf("\n Is your cat neutered?, type yes if yes and type no if not\n");
		char nInput[5];
		scanf("%s",nInput);
			if(nInput=="yes"){
				printf("\n The insurance costs 40$, do you wish to proceed?\n");
				}
			else if(nInput=="no"){
			printf("\n The insurance costs 60$, do you wish to proceed?\n");
			}
		}
	else if(sInput=="bird" || sInput=="Bird" || sInput=="reptile" || sInput=="Reptile"){
		printf("\n The insurance for %s costs nothing, do you wish to proceed", sInput);
	}

	else {
		printf("\n We do not provide service for the animal you chose\n");
	}
	

	printf("\n Thank you for choosing our services, hope to see you soon");
	/*sth is not working here, i'll have to go over it again. It does not recognize the strings and i'm guessing it has sth to do with characters*/

return 0;
}//end main