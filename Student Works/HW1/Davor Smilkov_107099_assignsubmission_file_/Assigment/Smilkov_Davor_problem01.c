/*The program should prompt the user for the appropriate information, using a code to
determine the kind of animal i.e. D or d represents a dog, C or c represents a cat, B or b
represents a bird, R or r represents a reptile, and anything else represents some other kind of
animal .
*/

#include<stdio.h>
int main(){

    //declare variables
    char cLetter ;

    //Print what user need to input
    printf("\n What type of animal do you have? \n For dog write D or d \n For cat write C or c \n For bird write B or b \n For reptile write R or r\n");
    scanf("%c", &cLetter);
    

    // We use switch statment to check what animal the user have and in every case put if else statment to check if the animal is neutred or not
    switch (cLetter)
    {
    case 'd':
    case 'D':
        
        printf("\n Is your dog neutered or not. Answer With Y and N \n");
        char cneutered;
        scanf(" %c", &cneutered);

        if(cneutered == 'Y'){
            printf("\n A dog that has been neutered costs $50.\n");
        }else if(cneutered == 'N') {
           printf("\n A dog that has not been neutered costs $80.\n"); 
        }//endif
        break;

    case 'c':
    case 'C':
        printf("\n Is your cat neutered or not. Answer With Y and N \n");
            
            scanf(" %c", &cneutered);

            if(cneutered == 'Y'){
                printf("\n A cat that has been neutered costs $40.\n");
            }else if(cneutered == 'N') {
            printf("\n A cat that has not been neutered costs $60.\n"); 
            }//endif
        break;
    case 'r':
    case 'R':
    case 'B':
    case 'b':
        printf("\n A bird or reptile costs nothing. \n");
    break ;

    default:
        printf("\n Represents some other kind of animal. \n ");
        break;
    }








    return 0;
}