#include <stdio.h>
#include <stdlib.h>

 int main()
{
    char animal;

    // Input the pet
    printf("Hello, can you please tell me, what pet do you have?: \n");
    printf("\n Type D for a dog. \n Type C for a cat. \n Type B for a bird. \n Type R for reptile. \n Type O for other animal. \n");
    scanf("%c", &animal);

    //If it is dog, check if it has been neutered
    if(animal == 'D') {
            char neuteredCheck;
    printf("Has your dog been neutered? \n");
    printf("\n Please type Y for yes. \n\n");
    scanf(" %c ", &neuteredCheck);
    if(neuteredCheck == 'Y') {
        printf("A dog that has been neutered costs $50. \n");
    } else {
        printf("A dog that has not been neutered costs $80. \n");
    }
    //If it is cat, check if it has been neutered
    } else if(animal == 'C') {
        char neuteredCheck;
    printf("Has your cat been neutered? \n");
    printf("\n Please type Y for yes. \n\n");
    scanf(" %c ", &neuteredCheck);
    if(neuteredCheck == 'Y') {
        printf("A cat that has been neutered costs $40. \n");
    } else {
        printf("A dog that has not been neutered costs $60. \n");
    }
    } else if(animal=='B') {
        printf("Bird cost nothing. \n");
    } else if(animal=='R') {
        printf("Reptile cost nothing. \n");
    } else {
        printf("Sorry, we don't insure other pets. \n");
    }
}//endmain



