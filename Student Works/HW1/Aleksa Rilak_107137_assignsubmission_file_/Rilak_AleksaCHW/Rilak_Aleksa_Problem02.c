#include<stdio.h>

int main() {

int i;
int j;
int num; //number of rows basically

    printf("Please enter the number:");  // Input rows from user 
    scanf("%d", &num);

    for(i=1; i<=num; i++) { //go through rows and add 1 to every loop started 
        
        for(j=1; j<i; j++) { //space printing
            printf(" ");
        }

        for(j=i; j<=num; j++) { //loop through columns and add asterisk
            printf("*");
        }
        printf("\n"); //next line 

    } //endforloop

return 0;
}//endmain
