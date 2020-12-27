#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    //Declaring variables
    int i,j,k,day,dt=1;

     //Asking user for numbers of days
     printf("Enter Total Numbers of Days in a Month : ");
     scanf("%d",&day);

    //Asking for first day
    printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d",&k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf(" _________________________________________________\n\n");

    for(j=k;j>0;j--) //Make calendar
    {
        printf("\t");
    }

    while(dt<=day)
    {
        if(k!=0)
        {
         if(k%7==0)
         printf("\n");
        }

  printf("%d\t",dt);
        dt++;
        k++;
    }
    getch();

}
