/*
  This code in C was written by Teodora Taleska and will be about paying an animal insurance fee.
*/
#include<stdio.h>
int main() {

	char YesNo;
	char YesNo2;
	int numberOfPets;
	char sPet[20];
	char dc;

     //a little explanation for the user what it is about
      printf("\n---If you keep certain pets, you know that you have to pay an insurance fee for them.");
      printf("\nNow tell me if you have pets, if you have write 'Y' if you do not have write 'N', then I will tell you how much the insurance fee will cost.");
      
     //yes/no question
      printf("\nDo you have a pet? --> ");
      scanf(" %c", &YesNo);
     
     //condition to check if the answer is as we requested
      if ( YesNo=='Y') {  
        printf("\nNow tell me how many pets you have: ");
        scanf(" %d", &numberOfPets);
           } else if (YesNo=='N'){
            printf("Okay, you are free! Have a good day!!! :)");
            return 0;
            }  else {
           printf("\nYou entered the wrong answer. Please try again!");
           return 0;
           }
     
     //to see how many pets the user have 
     printf("\nNow tell me what kind of pets you keep! ");
        for (int i=0; i<numberOfPets; i++) {
          printf("--> ");
          scanf(" %c", sPet); 
        }//to print as many lines as the user entered for a pet number
       
      //check what kind of pet we have and if the user has to pay, with checking whether the first character of the word is d,D or c,C
      if(sPet[0]=='d' || sPet[0]=='D' || sPet[0]=='c' || sPet[0]=='C') {
       printf("\nNow tell me if your pet/s has/have been neutered. Type 'Y' for yes and type 'N' for no!");
       scanf(" %c", &YesNo2);
      } else { //if he has not dog or cat he is free
       printf("\nIt's okay, for your pet you do not have to pay anything! :) Thank you for your time. Goodbye!!!");
       return 0;
      }
     
     //checking whether this is for the user's dog or cat 
      if(YesNo2=='Y') {
       printf("\nWrite 'D' if that is your dog or write 'C' if that is your cat.");
       scanf("%c", &dc);
        if(dc=='D'){
         printf("\nYou have to pay $50 for one dog.");
        } else if(dc=='C');{
         printf("\nYou have to pay $40 for one cat.");
        }}else {
         printf("\nYou entered a wrong answer!");
        }//endnestedif
       
      //if the user's pets has not been neutered the costs are different
       if(sPet[0]=='d' || sPet[0]=='D' && YesNo2=='N'){
       printf("\nYou have to pay $80 for one dog.");
      }else if(sPet[0]=='c' || sPet[0]=='C' && YesNo2=='N'){
       printf("\nYou have to pay $60 for one cat.");
      }else {
       printf("\nYou entered a wrong answer!! Let's try again.");
      }//else
        
      printf("\nThank you for your time. Have a nice day!!!");
      
     //this code does not work properly for me but that is my idea.. 
	return 0;

}//end main


















