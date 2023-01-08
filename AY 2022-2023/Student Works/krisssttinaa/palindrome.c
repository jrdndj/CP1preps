/*  Ask the user to enter a 4 digit integer. The program should determine if the number is a palindrome */

#include <stdio.h>
int main() {
        //declare variables
        int n, dRever, dRemain, dOrigin;
        printf("Enter an integer: ");
        scanf("%d", &n);
        dOrigin=n;

        //reversed integer is stored in reversed variable
        dRever = 0;
        while (n != 0) {
                dRemain = n % 10;
                dRever = dRever * 10 + dRemain;
                n /= 10;
        }

        //palindrome if orignal and reversed are equal
        if (dOrigin == dRever){
                printf("%d is a palindrome.", dOrigin);
        }
        else{
                printf("%d is not a palindrome.", dOrigin);
        }

        return 0;
}





















        /*int dArr[4];
        int dCtr=1;

        //ask the user for an input
        for(int dCtr = 0; dCtr < 4; dCtr++){
                printf("\n Enter numbers for slot %d: ", dCtr);
                scanf("%d", &dArr[dCtr]);
        }//endforloop
        printf("\n");

        printf("\n Elements of array: \n");
        for (dCtr = 0; dCtr < 10; dCtr++){
            printf("%d", dArr[dCtr]);
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if (caterpillar[n-1] == caterpillar[0]) {
                    ctr++;
                }
                }
            }
*/