//this code was written by Neda Jakša, unfortunately.
#include<stdio.h>
#include<math.h>
#include<strings.h>

int main(){
	
	//defining variables
	char cAnimal[1];
	char cNeutered[1];
	int dCtr;
	int dAnimalLength;

	
	//interactive input
	printf("Please enter what kind of pet you have!\n Enter d for Dog, c for Cat, b for bird, r for reptile, e for else. \n");
	scanf(" %c",cAnimal);
	
	printf("Please enter whether your pet is neutered! If it is, type y. If it's not, type n.\n");
	scanf(" %c",cNeutered);
	
	//*weird animal noises*
	if(cAnimal[0]=='d')
	{
		if(cNeutered[0]=='y'){
			printf("You have a neutered doggo. That'll be 50$.\n");
		}//endif
		else{
			printf("You have an unneutered floofer. That'll be 80$.\n");
		}//endelse
	}//endif
	else if(cAnimal[0]=='c')
	{
		if(cNeutered[0]=='y'){
			printf("You have a neutered catto. That'll be 40$.\n");
		}//endif
		else{
			printf("You have an unneutered kitter. That'll be 60$.\n");
		}//endelse
	}//endif	
	else if((cAnimal[0]=='b')||(cAnimal[0]=='r'))
	{
		printf("You have a bird or reptile! So cool. It's that cool, we won't even make you pay.\n");
	}//endif
	else{
		printf("Error! We don't accept that kind of pet.\n");
	}//endelse
	
}//endmain
