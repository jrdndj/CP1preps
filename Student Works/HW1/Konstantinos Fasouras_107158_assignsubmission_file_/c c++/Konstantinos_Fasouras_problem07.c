#include<stdio.h>
int main(){
    //declaration
    int num;
    //input elements
   
    printf("Enter one or two digit integer: \n");
    scanf("%d", num);

   
         while(num != 999) {
         if(num<100 && num>-100){
       
        printf("\nThe output is %d%d%d\n", num, num, num);
        scanf("%d", num);
        if(num==999){
            break;  
    }//end inner if
    
    }//end if
    }//end while

   
    return 0;
}
i really dont know why its not working :(