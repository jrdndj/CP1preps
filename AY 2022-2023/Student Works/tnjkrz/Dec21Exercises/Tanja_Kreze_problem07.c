#include <stdio.h>

int main()
{
    //declaring variable
    short int num;
    
    //asks user for input
    printf("Enter num 1-10: ");
    scanf("%hu", &num);
    
    //newline
    printf("\n");
    
    //prints first row
    printf("x    1    ");
    for (int i = 2; i <= num; i++) {
        printf("%d    ",i);
    }
    
    //newline
    printf("\n");
    
    //prints rest of table
    for (int i = 1; i <= 10; i++) {
        if (i!=10){
            printf("%d    ",i);  
        } else {
            printf("%d   ",i); 
        }

        for (int j = 1; j <= num; j++) {
            if ((j*i)<=9){
                printf("%d    ", j*i);
            } else {
                printf("%d   ", j*i);
            }
        }
        printf("\n");
    }
    
    
    return 0;
}//endofmain
