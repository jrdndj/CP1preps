/*
   This program in C was written by Teodora Taleska
*/

#include<stdio.h>

int main() {

	//variables declaration
	 int num;
	 
	//a little introduction
	 printf("\n--This program will be printing your numbers three times but if you want to stop just enter '9'");
	 
	//user input
	 printf("\nPlease enter one or two-digit integer: ");
	// scanf(" %d", &num);
	 
	//check if its one or two- digit
	while(num!=9){
	printf("\n--> ");
	 scanf(" %d", &num);
	 if(num<0 || num>99) {
	  printf("\nThis is not an one or two-digit integer!");
	  return 0;
	 } else if(num==9) {
	  return 0;
	 } else {
	  printf("\nThis is your number printed 3 times: %d%d%d \n", num, num, num);
	 }
	}

	return 0;
} //endmain
