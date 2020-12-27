#include <stdio.h>
#include <stdlib.h>
/*
*Write a C programme that does the following:
*1. asks the user to enter two numbers R and C where the values of R and C are less than
*10;
*2. asks the user to enter the elements of the matrix (of order R rows * C columns) and
*prints it out on the screen;
*3. asks the user to enter the elements of the matrix (of order C rows * R columns) and
*prints it out on the screen;
*4. multiplies the two matrices and displays the result on the screen.
*Also check whether a user has provided integers for R and C and if they are a positive number
*and less than 10. If the input values for R and C are not positive integer and are not lower than
*10, print out the error message
*/

// since this was math, and it took me long i'm too lazy to comment
int main()
{
    int n, m, i, j, k, first[10][10], second[10][10], pro[10][10],sum = 0; // n,m are dimensions, i, j, k are counters and first second pro are matrixes and sum is sum..

    printf("\nEnter the number of rows and columns of the matrixes: \n\n");
    scanf("%d%d", &m, &n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Element e%d%d ",i+1,j+1);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }
 printf("\n\nThe first matrix is: \n\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d\t", first[i][j]);
            }
            printf("\n");
        }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("Element e%d%d ",i+1,j+1);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe second matrix is: \n\n");
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                printf("%d\t", second[i][j]);
            }
            printf("\n");
        }


        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                for(k = 0; k < m; k++)
                {
                    sum = sum + first[i][k]*second[k][j];
                }
            pro[i][j] = sum;
            sum = 0;
            }
        }


        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < m; j++)
            {
                printf("%d\t", pro[i][j]);
            }
            printf("\n");
        }

    return 0;
}
