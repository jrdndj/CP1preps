/*
   This program in C was written by Teodora Taleska. In this program we will count a total number of duplicate elements in an array.
*/

#include<stdio.h>

int main() {

	//variable declaration 
	 int n;
	 int array[25];
	 int count = 0;
	 
	//user input
	printf("\nIn your array you are allowed to have more than 5 or less then 25 elements!!!");
	printf("\nHow many elements do you want your array to have: ");
	scanf(" %d", &n);
	
	if(n<5 || n>25) {
	 printf("\nYou entered a wrong input!");
	 return 0;
	}
	
       //allowing the user to input the elements in array
       printf("\nYour numbers are: ");
	for(int i=0; i<n; i++) {
	  printf("--> ");
	  scanf(" %d", &array[i]);
	}
	
	//searching for duplicate elements
	  for(int i=0; i<n; i++) {    
        for(int j=i+1; j<n; j++) {   
         //if duplicate element found then increment by 1 
            if(array[i] == array[j])   {
             count++;
             break;
            }         
        }    
    }    
	 printf("\nTotal number of duplicate elements found in your array is = %d", count);

	return 0;
} //endmain
