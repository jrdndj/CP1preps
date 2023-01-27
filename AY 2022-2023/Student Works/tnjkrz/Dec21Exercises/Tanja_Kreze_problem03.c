#include <stdio.h>

int main(){

        //declare variables
        short int start_day;
        short int days_num;
        
        //ask for input
        printf("\nWhich day of the week does the month start? ");
        scanf("%hu", &start_day);
        printf("\nHow many days does the month have? ");
        scanf("%hu", &days_num);
        
        //print days of week
        printf("Su Mo Tu We Th Fr Sa\n");
        
        //print numbers
        for (int i = 0; i < start_day; i++) {
            printf("   ");
        }
        for (int i = 1; i <= days_num; i++) {
            if (i<=9){
                printf(" %d ", i);
            } else {
              printf("%d ", i);  
            }
            if ((i + start_day)%7==0){
                printf("\n");
            }
        }

        return 0;
}//endmain
