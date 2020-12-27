#include<stdio.h>

int main(){

char neutered, opselect, animal;
const int dogcost = 80, catcost = 60, birdcost = 0;
printf("What kind of animal do you have?\n");
printf("d for dog, c for cat, b for bird or reptile and o for others.\n\n");

scanf("%c",&animal);

printf("Answer the following questions with Y for Yes or N for No.\n");
printf("Is your pet neutered?");

scanf("%c", &neutered);

printf("Enter a select code: ");
printf("\n1)A dog that has been neutered");
printf("\n2)A dog that has not been neutered: ");
printf("\n3)A cat that has been neutered costs: ");
printf("\n4)A cat that has not been neutered costs: ");
printf("\n5)A bird or reptile: ");

scanf("%c",&opselect);

switch (opselect){

   case '1': 
     printf("The price for dog that has been neutered is %d", dogcost - 30);

     break;

   case '2':

     printf("The price for dog that has not been neutered is %d ", dogcost);

    break;

   case '3':

     printf("The price for cat that has been neutered is %d ", catcost - 20 );

    break;

   case '4':

     printf("The price for cat that has not been neutered is %d ", catcost);

    break;

   case '5':

     printf("The price for bird or reptile is %d ", birdcost);

break;

}
return 0;

}
