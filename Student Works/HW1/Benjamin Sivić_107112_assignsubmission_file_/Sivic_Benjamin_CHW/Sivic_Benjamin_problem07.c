/*
    Accepts 1 to 2 digit integers and prints them 3 times until the user inputs 999
    I used goto since it seemed the easiest way to do this problem
*/
#include<stdio.h>
int main(){
//declare vars
int n;

//prompt user input
printf("Please input a one or two-digit integer, when you want to stop the program type 999\n");
input:
scanf(" %d",&n);

//Cheking if the input is 999
if(n==999){
        printf("\nYou have ended the program!");
        return 1;
}//EndIF

//Printing values
if((n>=0) && (n<=99)){
        printf("%d%d%d\n",n,n,n);
        goto input;
}//EndIf


return 0;
}
