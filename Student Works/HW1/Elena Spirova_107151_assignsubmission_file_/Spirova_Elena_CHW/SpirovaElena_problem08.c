/*Problem 11 */
#include<stdio.h>

int main(){

//declare variables
int first[10][10],second[10][10],m[10][10], R,C, dInput;
printf("Please enter the number of your rows and columns..They must be less then 10.\n");
scanf("%d %d",&R,&C);
if(R<10 && C<10){
    //input elements inside the first matrix
    printf("\nEnter elements of first matrix:\n");
    for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        printf("\nEnter elements:\n");
        scanf("%d", &first[i][j]);
    }
}    //input elements inside the second matrix
     printf("\nEnter elements of second matrix:\n");
     for(int i=0;i<C;i++){
     for(int j=0;j<R;j++){
        printf("\nEnter elements:\n");
        scanf("%d", &second[i][j]);
    }
    }//print the first matrix
     printf("\nPrint the first matrix:\n");
    for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      printf("%d\t", first[i][j]);
    }
    printf("\n");
    }//print the second matrix
    printf("\nPrint the second matrix:\n");
    for(int i=0;i<C;i++){
    for(int j=0;j<R;j++){
      printf("%d\t", second[i][j]);
    }
    printf("\n");
    }

    printf("\nThe multiplication of the two matriceS:\n");

     for ( int i = 0; i < R; i++) {
        printf("\n");
      for (int j = 0 ; j < R; j++) {
             m[i][j]=0;
         for(int k = 0; k < C; k++){
         m[i][j] = m[i][j]+first[i][k] * second[k][j];//put the result in a new matrix of the form m[R][R]
}}}
    for ( int i = 0; i < R; i++) {
            printf("\n");
      for (int j = 0 ; j < R; j++) {
        printf("%d\t", m[i][j]);
      }//end inner for
      }//rnd outer for
}//endif

else{
    printf("error!");
}//end else

return 0;
}


