#include <stdio.h>

int main(){
        //declaring variable
        int num;

        //asks user for input
        printf("Please insert one two digit number (using only 1s and 0s): ");
        scanf("%d", &num);

        //checks what the input is equal to and prints something
        if (num == 10){
                printf("Bazinga\n");
        } else if (num == 01) {
                printf("Booyeah\n");
        } else {
                printf("Alakazam\n");
        }

}//end main

