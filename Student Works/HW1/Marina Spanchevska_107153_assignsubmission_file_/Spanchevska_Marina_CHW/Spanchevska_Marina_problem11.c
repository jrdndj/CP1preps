#include <stdio.h>

void array_input(int R, int C, int dArr[R][C]){

    //input matrix elements
    printf("\nFor the matrix of size [%d][%d] input\n", R, C);
    for( int dCtr1=0; dCtr1<R; dCtr1++ ){
        for( int dCtr2=0; dCtr2<C; dCtr2++ ){
            printf("Element at index %d%d: ", dCtr1, dCtr2);
            scanf("%d", &dArr[dCtr1][dCtr2]);
        }//end inner for
    }//end outer for
}
void array_print(int R, int C, int dArr[R][C]){
    
    //prints matrix elements
    for( int dCtr1=0; dCtr1<R; dCtr1++ ){
        for( int dCtr2=0; dCtr2<C; dCtr2++ ){
            printf("%d ",dArr[dCtr1][dCtr2]);
        }//end of inner for
        printf("\n");
    }//end of outer for
}

int main(){

    //declare variables
    int dRows;
    int dClmn;

    //ask user for input
    printf("\nInput number of rows, smaller than 10: ");
    scanf("%d", &dRows);
    printf("\nInput number of columns, smaller than 10: ");
    scanf("%d", &dClmn);

    //check if input is smaller than 10
    if( dRows<0 || dRows>10 || dClmn<0 || dClmn>10 ){
        printf("\nError.\n");
    }//end if
    else{

        //input and print elements of first matrix
        int dArr1[dRows][dClmn];
        array_input(dRows, dClmn, dArr1);
        printf("\nFirst matrix:\n");
        array_print(dRows, dClmn, dArr1);

        //input and print elements of second matrix
        int dArr2[dClmn][dRows];
        array_input(dClmn, dRows, dArr2);
        printf("\nSecond matrix:\n");
        array_print(dClmn, dRows, dArr2);

        //compute and print elements of result matrix
        int dArr3[dRows][dRows];
        printf("\nResult of multiplication ([%d][%d]matrix):\n", dRows,dRows);
         for( int dCtr1=0; dCtr1<dRows; dCtr1++ ){
            for( int dCtr2=0; dCtr2<dRows; dCtr2++ ){
                 dArr3[dCtr1][dCtr2]=0;
                for(int dCtr3=0; dCtr3<dClmn; dCtr3++){
                    dArr3[dCtr1][dCtr2]+=dArr1[dCtr1][dCtr3]*dArr2[dCtr3][dCtr2];
                }//end of inner for
                printf("%d ", dArr3[dCtr1][dCtr2]);
            }//end of middle for
            printf("\n");
        }//end of outer for

    }//end else

    return 0;

}//end main
