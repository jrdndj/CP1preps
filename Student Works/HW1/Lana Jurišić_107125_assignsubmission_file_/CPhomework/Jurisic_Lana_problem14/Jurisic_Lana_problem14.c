#include <stdio.h>

int main()
{
    int dN;
    int i;
    int j;
    int dDupCount=0; //duplicate counter
    printf("We are creating an array with minimum of 5 elements and maximum of 25, please enter number of elements you want: ")
    scanf("%d", &dN);
    if(dN<5||dN>25) //we are checking the number of elements
    {
        printf("Error! There must be between 5 and 25 elements");
    }
    else
    {
        int dArr[dN];
        printf("Please enter the elements of this array");
        for(i=0; i <dN; ++i)
        {
            scanf("%d", &dArr[]);
        }
        for(i=0; i <dN; ++i)
        {
            for(j=i+1; j<dN; ++j)
            {
                if(dArr[j]==dArr[i])
                {
                    dDupCount++;
                }
            }
        }
        printf("There are %d number of duplicates");
    }
}
