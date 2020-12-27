      #include<stdio.h>

   /*Animal insurance: A program that prints the insurance fee to pay for a pet according to the
following rules:
   */

    int main(){
     //Declare variables
     char sAnimals;
     char sNeut;
     char choice;

      //User input
      printf("\n What kind of animals do you have:\nD:for dog, \nC :for cat, \nB:for bird, \nR:for reptile: ");
      scanf("%c",&sAnimals);
      printf("Are they neutered?\n y for yes or n for no\n");
      scanf("%c",&choice);

    //If stats
    if(sNeut=='y'){
        switch(sAnimals){
            case 'D':
                printf(" Insurance for your dog costs 50$.\nI just want to let you know.");
                break;
            case 'C':
                printf(" Insurance for your cat costs 40$.\nI hope you know that.");
                break;
            case 'B':
                printf("Insurance for your birds is free.\nAre you happy with this?");
                break;
            case 'R':
                printf("Insurance for your reptiles is free.\nAre you satisfied?");
                break;
        }//EndSwitch
    }//EndIfNeut
    else{
    if(sNeut=='n'){
        switch(sAnimals){
            case 'D':
                printf(" Insurance for your dog costs 80$.\nYou need to know this.");
                break;
            case 'C':
                printf(" Insurance for your cat costs 60$.\nDo you agree with this?");
                break;
            case 'B':
                printf("Insurance for birds is free.\nYou are very lucky!");
                break;
            case 'R':
                printf("insurance for reptiles is free.\nHappiness is on your side");
                break;
        }//EndSwitch
    }//EndIfNeutered
    else{
        printf("Please enter a valid value!");
}//End else
}//End else1

        return 0;
    }
    //End
