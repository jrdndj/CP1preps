#include<stdio.h>

  /* Request the user to enter one or two-digit integers, then print that input but three times, until the
user enters -999. If the user enters ‘1’ then it should print “111”. If the user enters ‘8’ then it
should print ‘888’. The program will never stop asking for an input until the user enters 999.
*/

    int main(){

    //Declare variables
    int n;

    //User input
    printf("Please enter a one or two-digit integer, you must stop the program type 999\n");
    input:
    scanf(" %d",&n);

    //Check the input
    if(n==999){
        printf("\nYou are ended the program!");
            eturn 1;
    }//Endif

    //Print values
    if((n>=0) || (n<=99)){
        printf("%d%d%d\n",n,n,n);
        goto input;
    }//EndIf2


    return 0;
}
