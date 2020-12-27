/*
    Lets the user input their animal and if they are neutered or not
    Prints insurance fee according to a set of rules
*/

#include<stdio.h>

int main(){
//Declare vars
char sAnimal,sNeut;

//Prompt user for input
printf("\nPlease input the type of pet:\nD for dog\nC for cat\nB for bird\nR for reptile\n");
scanf(" %c",&sAnimal);
printf("\nAre they neutered?\ny/n\n");
scanf(" %c",&sNeut);//wasn't working until I put a space before %c

//If statement
if(sNeut=='y'){
        switch(sAnimal){
            case 'D':
                printf("The insurance for your dog costs 50$");
                break;
            case 'C':
                printf("The insurance for your cat costs 40$");
                break;
            case 'B':
                printf("Insurance for birds is free.\nLucky you!");
                break;
            case 'R':
                printf("insurance for reptiles is free!");
                break;
        }//EndSwitchAnimalNeutered
}//EndIfNeut
else{
if(sNeut=='n'){
        switch(sAnimal){
            case 'D':
                printf("The insurance for your dog costs 80$");
                break;
            case 'C':
                printf("The insurance for your cat costs 60$");
                break;
            case 'B':
                printf("Insurance for birds is free.\nLucky you!");
                break;
            case 'R':
                printf("insurance for reptiles is free!");
                break;
        }//EndSwitchAnimalNotNeutered
    }//EndIfNotNeutered
    else{
        printf("Please input a valid value! :D");
}//EndElseSecond
}//EndElseFirst


return 0;
}
