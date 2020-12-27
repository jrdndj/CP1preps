#include<stdio.h>

/*Write a program that asks the user to type an integer N and that writes the number of prime
numbers lesser or equal to N.
*/

int main(){
//Declare variable
int n;

//User input
    printf("Enter an integer\n");
    scanf("%d",&n);

//For loop
    printf("Prime numbers until %d are:\n",n);
    for(int i=2;i<=n;i++){
        int dCounter=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){dCounter++;}
        }//Endfor
       if(dCounter==2){printf("%d ",i);}
    }//Endfor1
return 0;
}//End
