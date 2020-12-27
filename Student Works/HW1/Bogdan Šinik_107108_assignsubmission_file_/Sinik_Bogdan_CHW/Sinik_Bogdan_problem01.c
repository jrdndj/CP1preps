
#include<stdio.h>

int main(){

//deaclaring variables 
char cInput;
char sNeutered[3];
//promt the user 
printf("\n What kinf of animal do you have?\nInsert d or D for dog, c or C for cat, b or B for bird, r or R for reptile:\n");
scanf(" %c",&cInput);
//switch
switch (cInput)
{
case 'd':
    printf("\n So you have a dog...That't sweet I like dogs...Has your dog been neutered?\n");
    scanf("%s", sNeutered);
    if (sNeutered == "yes"){
        printf("\nAn insurance for a dog that has been neutered costs $50.");
    }//end if
    else{
        printf("\nAn insurance for a dog that has not been neutered costs $80.");
    }
    break;
case 'D':
    printf("\n So you have a dog...That't sweet I like dogs...Has your dog been neutered?\n");
    scanf("%s", sNeutered);
    if (sNeutered == "yes"){
        printf("\nAn insurance for a dog that has been neutered costs $50.");
    }//end if
    else{
        printf("\nAn insurance for a dog that has not been neutered costs $80.");
    }
    break;
case 'c':
    printf("\n So you have a cat...Cats are nice animals...Has your cat been neutered?\n");
    scanf("%s", sNeutered);
    if (sNeutered == "yes"){
        printf("\nAn insurance for a cat that has been neutered costs $40.");
    }//end if
    else{
        printf("\nAn insurance for a cat that has not been neutered costs $60.");
    }
    break;
case 'C':
    printf("\n So you have a cat...Cats are nice animals...Has your cat been neutered?\n");
    scanf("%s", sNeutered);
    if (sNeutered == "yes"){
        printf("\nAn insurance for a cat that has been neutered costs $40.");
    }//end if
    else{
        printf("\nAn insurance for a cat that has not been neutered costs $60.");
    }
    break;
case 'b':
    printf("\n You have a bird... They can fly so high... You don't have to pay anything this one is on house...");
    break;
case 'B':
    printf("\n You have a bird... They can fly so high... You don't have to pay anything this one is on house...");
    break;
case 'r':
    printf("\n You have a reptile... Something is wrong with you... You don't have to pay anything, we can see that you have your own problems...");
    break;
case 'R':
    printf("\n You have a reptile... Something is wrong with you... You don't have to pay anything, we can see that you have your own problems...");
    break;   
default:
printf("\n ERROR: Sorry...We do not have insurance for other kinds of animals...");
    break;
}//end switch
printf("\n Thank you for using our services!");
    return 0;
}