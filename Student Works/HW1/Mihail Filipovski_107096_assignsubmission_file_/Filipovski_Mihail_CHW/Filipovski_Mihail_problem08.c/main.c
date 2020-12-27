#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter dimension \n");
   scanf("%d", &n);
   int mat[11][n+1];
   mat[0][0]=5;
   for(int j=1;j<=n;j++){
    mat[0][j]=j;
   }
   for(int i=1;i<=10;i++){
    mat[i][0]=i;
   }
   for(int i=1;i<=10;i++){
    for(int j=1;j<=n;j++){
        mat[i][j]=mat[0][j]*mat[i][0];
    }
   }
   for(int i=0;i<=11;i++){
        for(int j=0;j<=n;j++){
   printf( "%d  ", mat[i][j] );
        }
   printf("\n");
   }

    return 0;
}
