#include<stdio.h>

/*
 	This code was written by Dorotea Redzepi (MA) - 89201004

	Homework2 (11.01.2021)
	
	Exercise: Given a positive integer N, what is the minimum positive integer
	K such that K! is a multiple of the square of N!	

*/


/*
	Comments on the general logic behind the program:
	
	-We want to save as much memory as possible to avoid integer overflow,
	which would occur pretty soon, considering that we are calculating factorials
	
	-In order to do that, we don't actually calculate values of K! and (N!)^2, which grow very
	quickly but, as we are only looking for K! mod (N!)^2 to be zero (which means that K! is 
	a multiple of (N!)^2), we can divide or "simplify" the fraction along the way,
	i.e. while increasing values of K and N 

	-This way integer overflow occurs only for values bigger than around 75, 
	instead of 15, which was previuously the case 
*/

// Declaring hlper function
int isPrime(long int);

int main(){

	int dNumberOfTestCases, dN_UserInput, dK_Output, dIterator;
	unsigned long long int lldModulo; // we declare Modulo to be the largest possible integer type
	
	scanf("%d", &dNumberOfTestCases);
	
	/*
	   for loop that iterates for how many test cases we have:
	   in each iteration of the loop, we get the new input (test case),
	   calculate the value of corresponding output, and print it 
	*/
	
	for (int testCase=1; testCase<=dNumberOfTestCases; testCase++){
	
		scanf("%d", &dN_UserInput);
		
		/*
		  -Notice that value of K needs to be greater than or equal to N,
		   as otherwise K! < (N!)^2 hence K! will certainly not be multiple
		   of (N!)^2
		  -Beacuse of this constraint, we can set the initial value of
		   K to be N+1 
		   -variable lldModulo is what will keep track of the remainder of
		   K! div (N!)^2
		  -Also, to save time and memory space, we can assume that we already 
		   divided K! with N! and the only thing left is to see if
		   (N+1)*(N+2)*(N+3)*...*K is divisible by N!
		  -Becase of this, we can also set the initial value of Modulo
		  to be N+1  
		*/
		
		dK_Output = dN_UserInput + 1;
		lldModulo = dN_UserInput + 1;
		
		dIterator = 2; // Iterator will go through values from 2 to N
				// we start with 2 as there is no need to check divisibilty by 1
				// Values go up to N, as only if modulo is divisble by ALL values from 
				// 2 to N, K will satisfy the condition of the exercise
		
		while( dIterator <= dN_UserInput ){
		
			/*
			  -Then, we have an inner while loop, that will divide the modulo
			  as long as it's divisble by Iterator
			  -This is 'simplification of the fraction', i.e. the part that saves memory
			*/
		
			while( (lldModulo % dIterator == 0) && (dIterator < dN_UserInput) ){ 
				lldModulo = lldModulo / dIterator; 
				dIterator += 1; // we increase value of iterator and try to factorize the fraction again
			}
			
			/*
			  -We check if the Iterator exceeded value of N, because in that case
			  K satisfies the condition as (N+1)*(N+2)*(N+3)*...*K is then divisible
			  by ALL values 1 through N
			  -if that's the case we can break the while loop and output the solution 
			*/
			
			if (lldModulo % dIterator == 0 && dIterator >= dN_UserInput){  
				break;
			}
			
			/*
			  -if that's still not the case, that means that value of K needs to be increased
			   in oreder for it to be multiple of (N!)^2
			  -we increase the value of K, but also multiply the Modulo by new value of K
			  -to save up some more memory, we don't have to multiply Modulo by K, if K is
			   a prime number, because any number between 2 and N, will certainly not divide
			   it (as it is prime)
			*/
			
			else{
				dK_Output += 1;

				if ( isPrime( dK_Output ) == 0 ){ // multiplying modulo only if K is not prime
					lldModulo *= dK_Output;
				}
			}
		}
		
		if (dN_UserInput == 1){ // one is the only special case so we handle it separately
			printf("1\n"); 
		}
		else{
			printf("%d\n", dK_Output); // Output solution of the current test case
		}
	}

	return 0;
}


// Helper function that determines if the number is prime

// as argument it takes Number that we want to determine if it's prime

// as output it returns:
// -> 0 if the number is NOT prime
// -> 1 if the number is prime


int isPrime( long int ldNum){
	
	/*
	We have an Iterator that goes from value 2 (as there is no need to check if some number is
	divisble by 1), all the way up to sqrt ( ldNUm ), since if number is not prime,
	then it must be divisible by some number that is less or equal than its sqrt.
	*/

	long int dIterator=2;
	
	if (ldNum == 1){ // one is a special case, so we consider it separately
		return  0;
	} 
	
	while (dIterator * dIterator <= ldNum){ 
		if ( ldNum % dIterator == 0){ // if at any point is divisible return False
			return 0;
		}
		dIterator+=1; 
	}
	return 1; // if it was not divisble with any number, then it's a prime so return True
}

