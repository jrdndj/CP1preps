#include<stdio.h>

int main(){
    //declaration
    int dFeeType;
    //information
    printf("Hello, welcome to the Animal Insurance.\n\n");
    printf("If you want to find out the insurance fee for your pet you are at the right place.\n");
    printf("For a nautered dog please enter 0, for not a nautered dog please press 1.\n");
    printf("For a nuatered cat press please 2, for not a nautered cat press please 3.\n");
    printf("For a bird press please 4.\n");
    printf("For a reptile press please 5.\n\n");
    scanf("%d", &dFeeType);
    //switch
    switch (dFeeType){
    case 0:
        printf("The fee for a dog that has been nautered is 50$\n");
        break;
    case 1:
        printf("The fee for a dog that has not been nautered is 80$\n");
        break;
    case 2:
        printf("The fee for a cat that has been nautered is 40$\n");
        break;
    case 3:
        printf("The fee for a cat that has not been nautered is 60$\n");
        break;
    case 4:
        printf("There is not a fee for a bird.\n");
        break;
    case 5:
        printf("There is not a fee for a reptile.\n");
        break;
    default:
        printf("Your choice was invalid. Please chose a valid choice from the information.\n");
        break;
    }//endswitch
   printf("\nThank you for your preference to us! Please come to us again.\n");
    return 0;
}