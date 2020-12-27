//This code was written by Marko Taleski :P
//C code for matrix

#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declaration of variables and arrays
    int aFirst[10][10];
    int aSecond[10][10];
    int aMulti[10][10];
    int dR=0;
    int dC=0;

    //Asking the user to input the number of rows and columns
    printf("\nPlease enter the number of rows.\n");
    scanf("%d",&dR);

    printf("\nPlease enter the number of columns.\n");
    scanf("%d",&dC);

    //I use a for loop to gather the elements of the matrices from the user input and the difference is I just swap the dR and dC in the for loop i and for loop j
    printf("\nPlease enter the elements of the first matrix.\n");
    for(int i=0;i<dR;i++)
    {
        for(int j=0;j<dC;j++)
            {
            printf("Please insert element%d%d: ", i+1,j+1);
            scanf("%d",&aFirst[i][j]);
            }//end of inner for loop
    }//end of first for loop

    printf("\nPlease enter the elements of the second matrix.\n");
    for(int i=0;i<dC;i++)
    {
        for(int j=0;j<dR;j++)
            {
            printf("Please insert element%d%d: ", i+1,j+1);
            scanf("%d",&aSecond[i][j]);
            }//end of inner for loop
    }//end of second for loop

    //In order to multiply we will need another for loop inside 2 we already used for getting the elements from the user
    printf("The multiplication of the two matrices is: \n");
    for(int i=0;i<dR;i++)
    {
        for(int j=0;j<dC;j++)
        {
            aMulti[i][j]=0;

            for(int k=0;k<dC;k++)
                {
                aMulti[i][j]+=aFirst[i][k]*aSecond[k][j];
                }//end of second inner for loop
        }//end of first inner for loop
    }//end of forth for loop

    //And printing is the same as getting the elements from the user input but instead of scan we print
    for(int i=0;i<dR;i++)
    {
        for(int j=0;j<dR;j++)
        {
            printf("%d\t",aMulti[i][j]);
        }//end of inner for loop
        printf("\n");
    }//end of fifth for loop

    return 0;
}
