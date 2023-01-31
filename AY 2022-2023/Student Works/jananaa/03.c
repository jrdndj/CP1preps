#include <stdio.h> 

int main() 
{ 
    // Declare variables 
    int day, days_in_month; 
  
    // Get the inputs from user 
    printf("Enter the day of the week it will start on: "); 
    scanf("%d", &day); 
     
    printf("Enter the number of days in the month: "); 
    scanf("%d", &days_in_month); 
  
    // Print the Calendar 
    printf("\n\n"); 
    printf(" S  M  T  W  T  F  S\n"); 
    int count = 1; 
    for (int i = 0; i < day; i++) 
    { 
        printf("   "); 
        count++; 
    } 
    for (int j = 1; j <= days_in_month; j++) 
    { 
        if (j < 10) 
            printf(" %d ", j); 
        else
            printf("%d ", j); 
        if (count % 7 == 0) 
            printf("\n"); 
        count++; 
    } 
  
    return 0; 
  }