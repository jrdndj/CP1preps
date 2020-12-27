#include<stdio.h>

int main(){
    //declaration
    int n;
    
    printf("Please enter a number:");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(i>=j) printf("* ");
            else printf("  ");
           }//end inner for
              printf("\n");
    }//end outter for
       return 0;
}//end main

  
