#include<stdio.h>

int main(){

   //Declaring variables
    int ary[25];
    int i, j, s, count = 0;

    //Ask user for length of array and elements
        printf("Enter size of the array : ");
        scanf("%d", &s);
        printf("Enter elements in array : ");

        for(i=0; i<s; i++)
        {
            scanf("%d", &ary[i]);
        }

        if (s < 25 && s > 5){ //Checking if there is more than 5 and less than 25 elements

        for(i=0; i<s; i++)
        {
            for(j=i+1; j<s; j++)
            {
                if(ary[i] == ary[j])
                {
                    count++;
                    break;
                }
            }
        }
        printf("\nTotal number of duplicate elements found in array = %d", count);
        }else{
            printf("\n You must input more then 5 elements but less then 25");
            return 0;
        }
}

