#include <stdio.h>

int main(){

        int n = 0;
        int sum = 0;
        int average = 0;
        int numCount = 0;

        while (1){
                printf("Please enter a positive integer: ");
                scanf("%d", &n);
                if (n < 0){
                        printf("ERROR. Try again! \n");
                } else if (n==0 && numCount==0){
                        printf("No average \n");
                        return 0;
                } else if (n == 0){
                        average = sum / numCount;
                        printf("The average is: %d \n", average);
                        return 0;
                } else {
                        sum = sum + n;
                        numCount++;
                }
        }

        return 0;
}
