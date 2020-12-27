/*
    User can choose how many rows his pretty stars will have and the the program prints them out :D
*/
#include<stdio.h>
int main(){
//Declare vars
int n;


//Prompt user for input
printf("How many rows of * do you want?\n");
scanf(" %d",&n);

//Making Pretty stars
for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j<i){printf(" ");}
             else{printf("*");}
        }//EndForJ
        printf("\n");
    }//EndForI
return 0;
}
