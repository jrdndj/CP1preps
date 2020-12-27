#include<stdio.h>

int main() {

int animal;
printf("Please enter the animal code you wish to know price for: \n"); //Char for every animal that will be stated later 
printf("\n1. Neutered dog\n2. Dog that is not neutered\n3. Neutered catto\n4. Cat that is not neutered\n5. Bird or Reptile\n");
scanf("%d", &animal);

 if (animal <= 5 && animal > 0) //if we enter a number that is less or equal to 5 or bigger that zero, begin the switch
switch (animal) { //we are switching animal codes for the prices
    case 1:
        printf("The dog that has been neutered costs $50.");
    break;

    case 2:
        printf("The dog that has not been neutered costs $80.");
    break;

    case 3:
        printf("The cat that has been neutered costs $40.");
    break;

    case 4:
        printf("The cat that has not been neutered costs $50.");
    break;

    case 5:
        printf("Its free");
    break;

} //endSwitch
    else {
    printf("We're sorry, you have entered the wrong animal Code."); //Random error i've chosen for wrong code entered 
}
    

return 0;
} //end main
