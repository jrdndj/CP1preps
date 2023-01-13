#include <stdio.h>

//Function to "power" numbers to entered value
int power(int a, int p){
    if (p==0) {
        return 1;
    }else{
        int res=1;
    for (int i=0;i<p;i++){
        res=res*a;
    }
    return res;
    }
}


int main() {
    //The idea is: 2^a + 3^b+4^c;

    //Declare "power" variables
    int a, b, c;

    //Ask for user to choose the "powers" for numbers 2 3 4
    printf("\n");
    printf("Choose values for a,b,c for this expression 2^a + 3^b + 4^c:");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("\n");

    //Create result for each number
    int res2=power(2,a);
    int res3=power(3,b);
    int res4=power(4,c) ;

    //Print the result
    printf("Result: %d\n", (res2+res3+res4));
    return 0;
}