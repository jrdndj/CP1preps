
#include <stdio.h>


int main()
{
    //declare variables
    char type, doggo,cato;
    printf("Welcome to our insurance company! Please tell us the type of your pet:\n for dog chose d\n for cat chose c\nfor reptile chose r\n for bird chose b \n");
    scanf(" %c", &type);



    switch(type)
    {
        case 'd':
        printf("\nTell us is your dog neutered?\n y-yes\n n-no\n");
        scanf(" %c", &doggo);
        if(doggo=='y'){
            printf("I see your dog is neutered, our price for u is $50");
        }//endif
        else if(doggo=='n'){
            printf("Your pet is not neutered, so that'll be $80.");
        }//endelse
        break;
         case 'c':

        printf("\nTell us is your cat neutered?\n y-yes\n n-no\n");
        scanf(" %c", &cato);
        if(cato=='y'){
            printf("I see your cat is neutered, our price for u is $40");
        }//endif
        else if(cato=='n'){
            printf("Your pet cat is not neutered, so that'll be $60.");
        }//endelse
        break;
         case 'r':
      printf("My, what a fascinating creature, heck this one's on me!");
        break;
        case 'b':
      printf("Aww Polly wanna cracker? You're in luck birds are free!");
        break;

        default:
            printf("We are very sorry, we still don't know what that thing is.");

    }//endswitch

    return 0;
}
