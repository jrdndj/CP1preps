#include <stdio.h>
#include <stdlib.h>
int main()
{
  char cFloor;  //the floor our user wants to go to
  char cEntrance = 'G'; //This is the floor from which user selects the next floor
  printf("Welcome to Lana.inc elevators!");  //didn't have a better elevator name idea


  do{
    printf("\nTo which floor do you want to travel to? (G is for ground floor and S is if you want to get out): ");
     scanf ("%c", &cFloor);
    switch (cFloor)
    {
      case'G':
        if(cEntrance =='G')
        {
        printf("You are already on this floor");
        }
        else
            {
                printf("Thank you for riding with Lana.inc!");
                cEntrance = 'G';
            }
      break;
       case'1':
        if(cEntrance == '1')
        {
        printf("You are already on this floor");
        }
        else
            {
                printf("Thank you for riding with Lana.inc!");
                cEntrance = '1';
            }
      break;
       case'2':
        if(cEntrance == '2')
        {
        printf("You are already on this floor");
        }
        else
            {
                printf("Thank you for riding with Lana.inc!");
                cEntrance = '2';
            }
      break;
       case'3':
        if(cEntrance == '3')
        {
        printf("You are already on this floor");
        }
        else
            {
                printf("Thank you for riding with Lana.inc!");
                cEntrance = '3';
            }
      break;
       case'4':
        if(cEntrance == '4')
        {
        printf("You are already on this floor");
        }
        else
            {
                printf("Thank you for riding with Lana.inc!");
                cEntrance = '4';
            }
      break;
        default:
        printf("Error! We don't have that many floors");
      }

    }
    while(cFloor != 'S');
    printf("\nHope you had fun!");
    return 0;
  }

