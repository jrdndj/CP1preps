#include<stdio.h>
int main(){

//declaring variables 
int dInput;
//promt the user
printf("\n Please insert the n: ");
scanf("%d",&dInput);
//for loop
for(int n=1; n<=dInput; n++){
    printf("\n n=%d \n", n);
//first inner for loop   
for(int i=1; i<=n; i++) {
			//second inner for loop
			for(int j=1; j<i; j++) {
				printf(" ");
			}//end second inner for loop
            //third inner
			for(int k=i;k<=n;k++) {
				printf("*");
			}//end third inner
            printf("\n");
    }//end first inner for loop
}//end for
    return 0;
}