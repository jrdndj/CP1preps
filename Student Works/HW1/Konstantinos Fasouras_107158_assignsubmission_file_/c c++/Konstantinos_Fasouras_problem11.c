#include<stdio.h>

int main(){
    //declaration
    int i, j, k; 
    //double temp;
    int n,m,p;
    //matrix dimensions
    printf("\nIn this program we will multiply a MxN matrix A, with an NxP matrix B\n");
    printf("Give number of rows of matrix A, M:\n");
    scanf("%d", &m);
    printf("Give number of columns of matrix A, and rows of matrix B, N:\n");
    scanf("%d", &n);
    printf("Give number of columns of matrix B, P:\n");
    scanf("%d", &p);
    //here we define matrices A, B
    double A[m][n];
    double B[n][p];
    double C[m][p];
    //input the elements of matrix A
    printf("Give elements of matrix A: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\nEnter element A[%d][%d]: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    //input the elements of matrix B
    printf("Give elements of matrix B: \n");
    for(i=0; i<n; i++){
        for(j=0; j<p; j++){
            printf("\nEnter element B[%d][%d]: ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    //print matrix A
    printf("Given Matrix is :\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
            printf("%d\t",A[i][j]);
            }     
    }
    //print matrix B
    printf("\nGiven Matrix is :\n");
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<p; j++){
            printf("%d\t",B[i][j]);
            }     
    }
    //multiply A*B, element by element
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            //temp = 0.0;
            for (k=0; k<n; k++){
                C[i][j] = A[i][k]*B[k][j];
            }
            printf("\n C[%d][%d] = %d\n",i+1,j+1,C[i][j]);
        }
    }
    return 0;
}