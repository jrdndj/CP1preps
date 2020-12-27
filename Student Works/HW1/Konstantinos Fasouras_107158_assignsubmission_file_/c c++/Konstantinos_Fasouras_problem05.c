#include<stdio.h>
int main(){
    //declaration
    int n;
    
    printf("Please enter a number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++ ){
        if(i<=n/2){
            for(int j=1; j<=i; j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(int k=n-i; k>=0;k--){
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}