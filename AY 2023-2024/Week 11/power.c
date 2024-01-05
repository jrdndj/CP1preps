/*
Given positive non-negative integers n and an integer p, 
write a function power (int n, int p) 
which computes n to the power of p (np).

filename: power.c 
*/
#include<stdio.h>

//put the functions prototype here
int power(int n, int p);
int get_input();

int main(){
	//we want the user to give us n and p 
	int base, exponent;

	//have a function that does the inputting
	base = get_input(); 
	exponent = get_input();

	//we can now call power use base and exponent
	//power(base, exponent);
	printf("\n The result is %d \n ", power(base, exponent)); 
	
	return 0; 
}//end main

//put the function definitions here 
int power(int n, int p){
	//we write a loop that will
	//compute n x n, but p time
	for(int i=1; i<p; i++){
		n*=2; 
	}//endfor

	//return that value so main can "use" it
	return n; 
}//end power()

int get_input(){
	int input; 
	printf("\n Enter number: ");
	scanf("%d", &input);

	//return it for main
	return input; 
}//end get input 
