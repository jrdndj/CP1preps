#include<stdio.h>

int main()
{
    //declare variables
    int darray[100] ,dmin =0;

   //prompt user for input
    printf("\nEnter ten integers :  ");

    //put input in integer array
    for(int i=0;i<10;i++){

    scanf("%d", &darray[i]);
    }
    //analyze all the elements of the array to find the smallest member
    for(int i=0;i<10;i++){

        if(darray[i]<dmin) //if member is smaller then the min, member becomes min
            dmin=darray[i];
    }
    printf("smallest element is:%d",dmin); //result
return 0;
}
