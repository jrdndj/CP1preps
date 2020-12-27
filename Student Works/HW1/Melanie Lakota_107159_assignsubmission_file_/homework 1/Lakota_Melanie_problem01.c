/*
This program was written by Melanie Lakota on 14th December 2020.
*/ 

#include <stdio.h>

int main()
{
    //declare variables 
    char cAnimal;
    char cAnswer;
    char cAnsYes = 'y';
    char cAnsNo  = 'n';
    char cDog = 'd';
    char cCat = 'c';
    char cBird = 'b';
    char cReptile = 'r';
    
    //ask user what animal they would like and save answer
    printf("\n What kind of animal would you like? \n");
    printf("\n Type b for bird, c for cat, d for dog or r for reptile! \n");
    scanf(" %c", &cAnimal);
    
    //while the user entered one of the animals in stock, perform next task
    while (cAnimal == cDog || cCat || cBird || cReptile) {
        
    //if user wants a dog, ask if they want it neutered or not and give the corresponding price! Exit with exit code 0 when given reply.  
    if (cAnimal == cDog) {
        printf("\n Would you like a neutered dog?");
        printf("\n Type y for yes and n for no! \n");
        scanf(" %c", &cAnswer);
        
        if(cAnswer == cAnsYes) {
            printf("\n That will be $50! Thank you for using this program! \n");
            return 0;
        }//endif
        
        if(cAnswer == cAnsNo) {
            printf("\n That will be $80! Thank you for using this program! \n");
            return 0;
        }//endif
    }//endif
    
    //if user wants a cat, ask if they want it neutered or not and give the corresponding price! Exit with exit code 0 when given reply.   
    if (cAnimal == cCat) {
        printf("\n Would you like a neutered cat?");
        printf("\n Type y for yes and n for no! \n");
        scanf(" %c", &cAnswer);
        
        if(cAnswer == cAnsYes) {
            printf("\n That will be $40! Thank you for using this program! \n");
            return 0;
        }//endif
        
        if(cAnswer == cAnsNo) {
            printf("\n That will be $60! Thank you for using this program! \n");
            return 0;
        }//endif
    }//endif
    
    //if user wants a bird, tell them they are free and exit loop
    if (cAnimal == cBird) {
        printf("\n Birds are free! Thank you for using this program! \n");
        return 0;
    }//endif
    
    //if user wants a reptile, tell them they are free and exit loop
    if (cAnimal == cReptile) {
        printf("\n Reptiles are free! Thank you for using this program! \n");
        return 0;
    }//endif
    
    }//endwhile
    
    //if the animal user has given is not a dog, cat, bird or reptile, print error message and exit with exit code 0
    if (cAnimal != cDog || cCat || cBird || cReptile) {
    printf("\n Please enter one of the given animals! \n");
    }//endif

    return 0;
}
