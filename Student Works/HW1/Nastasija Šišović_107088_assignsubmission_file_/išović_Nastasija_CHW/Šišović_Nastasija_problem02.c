    #include<stdio.h>

    /*The program should allow the user to enter a value of n and writes this picture:
    */

    int main(){
        //Declare variable
        int n;
        //User input
        printf("\n Please enter number of *: ");
        scanf("%d",&n);
        //For-loop
        for(int i=1; i<=n; i++) {
            //1st inner loop
            for(int j=1; j<i; j++) {
                printf(" ");
                }
                //2nd inner for-loop
            for(int k=i; k<=n; k++) {
                printf("*");
            }
            printf(" \n");
        }//End foor-loop
        return 0;
    }//End
