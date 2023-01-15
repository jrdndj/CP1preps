#include <stdio.h>

int main(){

        //declare variables
        short int num;
        
        //ask for input
        printf("\nEnter num: ");
        scanf("%hu", &num);
        
        //if correct input
        if (num>=2){
            //print picture
            for (int i = 0; i < num; i++) {
                    for (int j = 0; j < i; j++) {
                        printf("*");
                } 
                printf("\n");
            }
            
            for (int i = 0; i <= num-1; i++) {
                for (int j = 5; j > i; j--) {
                    printf("*");
                }
                printf("\n");
            }
        } else { //if incorrect input
            printf("Incorrect input! Run the program again!");
        }
        return 0;
}//endmain
