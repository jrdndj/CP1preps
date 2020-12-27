#include<stdio.h>

int main(){
    //declaring variables
    int dInput;

    //promt the user
    printf("\n Please insert number from 1 to 10: ");
    scanf("%d", &dInput);
    printf("X\t");
    for(int i=1; i<=dInput; i++){
        printf("%d\t",i);
    }
    printf("\n");
    for(int i=1; i<=10; i++){
        for(int j=1; j<=dInput; j++){
            printf("%d\t",j * i);
            if(j==1){
               printf("%d\t",j * i); 
            }
        }
         printf("\n");
    }
    return 0;
}