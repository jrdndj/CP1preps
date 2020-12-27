//Sadly, I didn't know how to print both matrices, but I will leave the whole code as an idea, printing the first matrice works!
#include<stdio.h>
int main(){
    int dRow; //Row for our matrice
    int dCol; //Collumn for out matrice
    //Firstly we need to get this elements
    printf("Please enter the first number which will be the row of 1st and col of 2nd: ");
    scanf("%d", &dRow);
    printf("Please enter the second number which will be the col of 1st and row of 2nd: ");
    scanf("%d", &dCol);
    //The Condition of a task is to enter a positive number smaller than 10, now we need to check that
    if(dRow>10||dCol>10||dCol<1||dRow<1)
    {
        printf("We don't know how to work with these numbers, please enter something between 1 and 10");
    }
    else
        {
   //Declaration of matrice
   int dMat[dRow][dCol];
   //And declaration of matrice that has switched rows and cols.
   int dMatRev[dCol][dRow];
   int i, j;
   //We are starting with entering the elements of the first one
   for(i=0; i<dRow; i++)
        {
      for(j=0;j<dCol;j++)
      {
         printf("Enter value for first Matrice[%d][%d]:", i, j);
         scanf("%d", &dMat[i][j]);
      }
        }
    for(i=0; i<dRow; i++)
        {
      for(j=0;j<dCol;j++)
      {
         dMatRev[j][i]=dMat[i][j];
      }
   }

   //Now we will print both of them
   printf("First Matrice is:\n");
   for(i=0; i<dRow; i++)
        {
      for(j=0;j<dCol;j++)
       {
         printf("%d ", dMat[i][j]);
         if(j==dRow)
         {
            printf("\n");
         }
      }
   }
   printf("Second Matrice is:\n");
     for(i=0; i<dCol; i++)
        {
      for(j=0;j<dRow;j++)
       {
         printf("%d ", dMat[i][j]);
         if(j==dRow)
         {
            printf("\n");
         }
      }
   }
        }
   return 0;
}
