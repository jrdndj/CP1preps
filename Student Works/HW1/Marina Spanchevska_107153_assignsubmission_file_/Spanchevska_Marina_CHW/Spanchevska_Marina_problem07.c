#include<stdio.h>


int main() {

    //declaring variable
    int dInput;


    while (dInput != 999) {

        //asking user for input
        printf("Type a one or two digit integer: ");
        scanf("%d", &dInput);

        if (dInput < 100 && dInput > 0){
            printf("%d%d%d\n", dInput, dInput, dInput);
        }//end if
        else if (dInput == 999){
            printf("Goodbye\n");
        }//end if
        else {
            printf("Error type a one or two digit integer. \n");
        }//end else
    }//end while

    return 0;

}//end main
