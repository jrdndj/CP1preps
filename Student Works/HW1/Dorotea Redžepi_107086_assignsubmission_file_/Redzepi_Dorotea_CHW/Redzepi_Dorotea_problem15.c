#include<stdio.h>
#include<string.h> 
#include<ctype.h>

int main(){
	char String[50];
	int dLen, dSubL ;
	int dResult=0;
	int dTemporaryResult=0;
	int a=1;
	
	puts("Please enter your string: ");
	gets( String );
	
	dLen = strlen( String );
	
	/*
		-The idea is to have one for loop, that iterates through the all the letters of the string, and another for loop
		that will iterate through all the letters that come after the letter fixed by the first for loop
		-Program then checks if the letter fixed by the second for loop contains different characters, than all the other 
		characters that are currently in the substring, if it is, it also checks if the length larger than current value of 
		lentgh, if it is, it will update the value of result, to that value.
		
		-It would be much easier if the function for checking if the substring contains all different characters was made as 
		separate function, but unfortunately I do not know how to type that in C
	
	*/
	
	
	for (int i = 0; i<dLen; i++){ // for loop that iterates through letters of the string
		dTemporaryResult = 0; // length of the longest substring begining with letter fixed by outer for loop 
		for (int j = i+1; j<dLen; j++){ // for loop that iterates through all the letters that come after letter fixed by outer for
			dSubL = j-i+1; // length of the substring that's currently been checked
			a=1; // switch
			
			// for that checks if the newly added letter is the same as some of the old ones
			for (int k=i; k<j; k++){
				if(String[j]==String[k]){ //if they are the same
					a=0; // put switch off
					j = dLen; //break outer for 
				}
			}
			if (a==1 && dTemporaryResult<dSubL){ // if switch is on, we found larger length of the substring begining with letter fixed by the outer for
				dTemporaryResult = dSubL;
			}
		}
		if (dTemporaryResult > dResult){ // is that legth larger than the global currently largest value
			dResult = dTemporaryResult;
		}
	}
	
	printf ("Length of the longest substring without repeating characters is: %d\n", dResult);
	
	return 0;
}
