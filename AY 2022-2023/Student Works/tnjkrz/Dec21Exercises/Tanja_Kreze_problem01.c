#include <stdio.h>

int main()
{
    //declare variables
    short int n;
    
    //asks user for input
    printf("\nPlease enter n: ");
    scanf("%hu", &n);
    
    //checks for correct input
    if (n>=1){
        
        //prints picture
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int k = n; k > i; k--) {
                printf("*");
            }
            printf("\n");
        }
    } else { //if incorrect input
        printf("Incorrect input. Run program again!");
    }
    
    return 0;
}//endmain
