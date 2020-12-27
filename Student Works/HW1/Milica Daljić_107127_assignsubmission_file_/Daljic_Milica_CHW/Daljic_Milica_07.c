/*Request the user to enter one or two-digit integers, then print that input but three times,
 until the user enters -999. If the user enters ‘1’ then it should print “111”. If the user
 enters ‘8’ then it should print ‘888’. The program will never stop asking for an input until
 the user enters 999.*/


#include <stdio.h>

int main() {

    //variable declarisation
    int dUserInput;
    while (dUserInput != -999 && dUserInput != 999) {
        printf("Please enter one or two-digits integer: \n");
        scanf("%d", &dUserInput);
        printf("%d%d%d\n", dUserInput, dUserInput, dUserInput);
    } //end while


    return 0;
}//end main
