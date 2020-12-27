#include <stdio.h>
#include <stdlib.h>
/*
*Request the user to enter one or two-digit integers, then print that input but three times, until the
*user enters -999. If the user enters ‘1’ then it should print “111”. If the user enters ‘8’ then it
*should print ‘888’. The program will never stop asking for an input until the user enters 999.
*/
// really annoying one with annoying rules possible lack of - on 999 : D
int main()
{
    int n;
    printf("Input one to two digit numbers\n");
    while (n != 999 && n != -999) // while loop until n is 999 or -999 since text of the task was unclear
    {
        scanf("%d",&n); // input
        if (n > -100 && n < 100) // condition check
            printf("%d%d%d",n,n,n); // triple output
        printf("\n"); // newline
    }
    return 0;
}
