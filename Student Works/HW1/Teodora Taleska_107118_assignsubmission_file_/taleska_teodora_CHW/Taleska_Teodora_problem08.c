/* 
 This program in C was written by Teodora Taleska and will be about making a multiplication table
 */
 
 #include<stdio.h>
 #include <stdlib.h>
 
 int main() {
   
   //variable declaration 
    int i, j;
    int n;
    
   printf("\n-Let's make a multiplication table!\n");
   printf("\n--Please, let me know how many rows under 10 or 10 you want to have your multiplication table. ");
   scanf("%d", &n);
   
   //checking if user's number is less or equal to 10
    if(n>10){
     printf("\nYour entered number is bigger than 10! \n");
     return 0;
    }
    
      //making the table
        for(i=1; i<=10; i++){
        for(j=1; j<=n; j++){
           printf("%d \t", i*j);
    }
     printf("\n");
   }
   return 0;
 } //endmain
