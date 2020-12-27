#include<stdio.h>    
#include<stdlib.h>  
int main() {
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    system("cls");
    printf("enter the number of row=");
    scanf_s("%d", &r);
    printf("enter the number of column=");
    scanf_s("%d", &c);
    
    if (r > 10 || c > 10 || r < 0 || c < 0) {
        printf("Error");
        return 0;
    }
    printf("enter the first matrix element=\n");
    for (i = 0;i < r;i++){
        for (j = 0;j < c;j++){
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0;i < c;i++){
        for (j = 0;j < r;j++){
            scanf_s("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0;i < r;i++){
        for (j = 0;j < c;j++){
            mul[i][j] = 0;
            for (k = 0;k < c;k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }   
    for (i = 0;i < r;i++){
        for (j = 0;j < c;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}