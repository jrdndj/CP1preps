//This is a program written by Lana Jurisic that will tell us how much a person has to pay based on pet they have
#include <stdio.h>

int main()
{
    char cAnimal;
    char cNeutered;
    printf("Welcome to the Lana buildings in Koper!");
    printf("\nI will tell you how much you fee is based on which animal you have, please type only the first letter of your animal: ");
    scanf_s(" %c", &cAnimal);
    printf("Is your animal neutered? Write Y if yes and N if no: ");
    scanf_s(" %c", &cNeutered);
    //Now we use switch to check which animals our residents have
    //I had many cases because of capital and small letters
switch (cAnimal)
    {
case 'd':
       if(cNeutered == 'y')
       {
           printf("Your fee is $50.");
       }
        else
        {
        printf("Your fee is $80");
        }
        break;
case 'D':
        if(cNeutered == 'y')
       {
        printf("Your fee is $50.");
       }
        else
        {
        printf("Your fee is $80");
        }
        break;
case 'C':
        if(cNeutered == 'y')
       {
        printf("Your fee is $40.");
       }
        else
        {
        printf("Your fee is $60");
        }
        break;
case 'c':
        if(cNeutered == 'y')
       {
        printf("Your fee is $40.");
       }
        else
        {
        printf("Your fee is $60");
        }
        break;
case 'B':
        printf("There is no fee.");
        break;
case 'b':
        printf("There is no fee.");
        break;
case 'R':
        printf("There is no fee.");
        break;
case 'r':
        printf("There is no fee.");
        break;
default:
         printf("Error: That isn't an animal that our complex allows.");
         break;
    }
//A little fun fact, if I was paying this fee, I would pay $240 because I have 3 dogs that are not neutered
    return 0;
}
