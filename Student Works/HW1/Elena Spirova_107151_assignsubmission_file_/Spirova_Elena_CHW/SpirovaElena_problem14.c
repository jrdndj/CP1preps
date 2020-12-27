
/*Problem 14.c
Write a program in C to count a total number of duplicate elements in an array. Minimum should
be 5 and maximum is 25 elements. Inputs must be integers (both negative and positive).
 */
#include<stdio.h>

int main(){

//declare variables
int dIarray[100],dNelements,i, j,dup=0, tmp;

//prompt user
printf("Please enter the number of elements u wish to enter:\n");
scanf("%d",&dNelements);

if(dNelements>25 || dNelements<5){
printf("Please enter the number of elements between 5 and 25:\n");
    scanf("%d",&dNelements);
}
    //enter the elements of the array
    for(i=0;i<dNelements;i++)
    {
        printf("\nEnter element:\n");
        scanf("%d",&dIarray[i]);
    }
    //sorting the array
     for (i = 0; i < dNelements; i++) {
        for (j= i + 1; j < dNelements; j++) {
        int tmp = 0;
        if (dIarray[i] > dIarray[j]) {
        tmp = dIarray[i];
        dIarray[i] = dIarray[j];
        dIarray[j] = tmp;
        }
    }
    }
    //now compare each element
       for(i=1;i<=dNelements;i++){
            if(dIarray[i]==dIarray[i-1]){
                dup++;
            }
        }


    printf("The number of duplicates is: %d",dup);


return 0;
}
