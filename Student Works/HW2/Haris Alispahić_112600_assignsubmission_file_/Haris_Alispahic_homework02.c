// Haris Alispahić // 14.1.2021 // Homework 02 #C //
#include<stdio.h>
 // Variable Declaration 
 
 int main() {
  int dArray[100]; // Array of the value 100
   int dNumber, dValue; // values of for Loops , and N value;
	int dK; // K value;
	
 printf( "Enter any Number of N Elements: " );  // Message sent to the user for Integer input
	scanf("%d",&dNumber); // Scanning Number;

 printf( "Enter %d elements: ",dNumber ); // Sending Message to insert the N amount of numbers;
	 for( dValue=1; dValue <= dNumber; dValue++ ) { // for loop starting from value 1 up to N
		scanf("%d", &dArray[dValue]); // Scanning Array starting value, looping it 'till the n value;
	}
	printf( "The Result of K for each N value is: " ); // Message for User
	 for( dValue=1; dValue<=dNumber; dValue++ ) { // For loop the same as before
	     if ( dArray[dValue] == 1 || dArray[dValue] > 200000 ) { // If the values of the Array match the conditions then do
	         printf("1, "); // print to user
	     }
	     else { // If not fulfilled do
	       	dK = dArray[dValue] * 2; // Formula for K;
		printf( "%d, ",dK ); // Print the value of dK for every number of the Array
	     }
	 }
	 printf( "Thank you for using my Program!" ); // Wholesome Comment
	 
} //end

