#include<stdio.h>

int main () {

   int dArr[100]; // Varible Declaration
    int i, j, dSize, dCount = 0; // Counter set to 0;
    
printf("Enter size of the array : "); // Enter Size of Array
    scanf("%d", &dSize); // Scan user Input
    
  while (dSize >=5 && dSize <=25) { // While the Size is higher than 4 and less than 26
      
printf("Enter elements in array : "); // Input of Elements
    for(i=0; i<dSize; i++) { // Loop till the User Input
        scanf("%d", &dArr[i]); // Scan each Number
    }
    
    for(i=0; i<dSize; i++) { // Loop till the User Input
        for(j=i+1; j<dSize; j++) { //Find all duplicates in the Array
            
            if(dArr[i] == dArr[j]) { // If duplicate found then increment count by 1 
                dCount++; // count increment
                break;
            }
        }
    }
printf("\nNumber of Duplicate Numbers is:  %d", dCount); // Print out the Result
    break; // Break since it's gonna repeat
 }
      if (dSize <5 || dSize >25)
    printf("\nInsert Array between 5 and 25 Please"); // If While statement isnt fulfilled
}