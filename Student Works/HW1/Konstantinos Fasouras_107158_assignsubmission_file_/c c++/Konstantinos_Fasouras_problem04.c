#include<stdio.h>
int main (){
    //declaration
    int n, i, j;
    //input of a number
    printf("Please enter a number to see all the prime numbers that are smaller or equal to him\n");
    scanf("%d", &n);
    
    for(i=2; i<=n; i++){
       
        for(j=2; j<=i; j++){
            if(i%j==0)  break;
         }
        if(i==j) printf("%d is a prime number.\n", i);
   
}
    return 0;

}