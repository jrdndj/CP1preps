/*
    Pretty stars in a triangle
    Basically a modified version of the code from problem02
*/
#include<stdio.h>
int main(){

//Declare vars
int n;


//Prompt user for input
printf("How many * do you want?\n");
scanf(" %d",&n);

//Making Pretty stars
for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j>i){printf(" ");}
             else{printf("*");}
        }//EndForJ
        printf("\n");
    }//EndForI
for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            printf("*");
        }//EndForJ
        printf("\n");
    }//EndForI

return 0;
}
