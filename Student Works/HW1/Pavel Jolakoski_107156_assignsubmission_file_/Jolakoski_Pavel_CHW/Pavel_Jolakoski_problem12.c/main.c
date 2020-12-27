#include <stdio.h>
#include <stdlib.h>

/*A program that will
allow the user to enter a
 number from 0 to 1000. The number should be
converted to correct its Roman
 Numeral Format. Hint: I, V, X, L, C, D, M
*/

int main()
{

    //declare variables
    int dN;
    printf("Enter a number between 0-1000: ");
    scanf("%d",&dN);

    if(dN < 0 || dN > 1000){
        printf("Please enter a number between 0-1000: ");
        scanf("%d",&dN);
    }


    return 0;
}
