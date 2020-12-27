#include <stdio.h>
#include<stdlib.h>
#include <string.h>
char* months[] = {"Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec","Jan","Feb"};
char* days[]= { "sunday","monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
int Day(int date,int month,int year);
main()
{
//Using Zellers Rule f = k + [(13*m-1)/5] + D + [D/4] + [C/4] - 2*C
//Ex for 29 Jan 2064
//k---day of the month as 29 
//m-month number as March=1 ..Feb=12,so here it is 11
//D--last two digits of year from above it is 64
//C--first two digits of year from above it is 20

 int k,m,year,i,flag=0,dates;
 char str[3],day[100];
 printf("Enter first 3 letters of month of the year ex:-for January enter Jan\n");
scanf("%s",str);


    for(i=0; i<12; i++)
    {
        if(!strcmp(str,months[i]))
        {
            m=i+1;
            flag=1;
            break;
        }
    }
  if(flag==0)
  {
    printf("Invalid Month\n");
    exit(0);
   }
  printf("Enter year\n");
  scanf("%d",&year);
    if(m==1 || m==3 || m==5 || m==6 || m==8 || m==10 || m==11)
     {
     dates=31;
     }
     if(m==2 || m==4 || m==7 || m==9)
     {
      dates=30;
     }
     if(m==12)
     {
      if(year%400==0)
   {
     dates=29;
   }
   else if(year%100==0)
   {
     dates=28;
   }
   else if(year%4==0)
   {
     dates=29;
   }
   else
   {
     dates=28;
   }
     }
 printf("-Sunday--Monday--Tuesday--Wednesday--Thursday--Friday--Saturday-\n");
 for(i=1;i<=dates;i++)
 {
  int finalday=Day(i,m,year);
  if(finalday==0)
  printf("%4d",i);
 if(finalday==1)
 {
  if(i!=1)
  printf("%8d",i);
  else
  printf("%12d",i);
 }
  
  if(finalday==2)
  {
   if(i!=1)
   printf("%8d",i);
   else
   printf("%20d",i);
  }

  if(finalday==3)
  {
   if(i!=1)
   printf("%9d",i);
   else
   printf("%29d",i);
   
  }
  
  if(finalday==4)
  {
   if(i!=1)
   printf("%11d",i);
   else
   printf("%40d",i);
  }
  
  if(finalday==5)
  {
   if(i!=1)
   printf("%10d",i);
   else
   printf("%50d",i);
   
  }
  
  if(finalday==6)
  {
   if(i!=1)
   printf("%8d\n",i);
   else
   printf("%58d\n",i);
  }
  
 }
printf("\n");
}

int Day(int k,int m,int year)
{
   int D,C,i,f,finalday,flag=0;
   char day[100];
   if(k<=0||k>31)
   {
     printf("Invalid Date\n");
     exit(0);
    }
    if(m==11||m==12)
     {
       year=year-1;
     }
     D=year%100;
     C=year/100;
     f = (k+(((13*m)-1)/5)+D+(D/4)+(C/4))-(2*C);

     if(f>=0)
     {
       finalday=f%7;
      }
      else
     {
       finalday=((f%7)+7)%7;
      }

      return(finalday);

}