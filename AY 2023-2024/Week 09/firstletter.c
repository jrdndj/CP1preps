/*
	Filename: firstletter.c 
	This program allows us accept character inputs instead
	of the numeric inputs that we have been doing 

	We will ask the user to enter the current temperature
	and its unit (celsius, kelvin or fahrenheit)

	We will also consider float type of inputs 
*/
#include<stdio.h>

int main(){
	//declare variables
	float fCurr_temp; 
	char cUnit; 

	//talk to the user to ask for temperature
	printf("\n Enter current temperature: ");

	//actually get the value
	scanf("%f", &fCurr_temp); //receive a float with only 1 decimal place

	//we ask for the unit
	printf("\n Is it in [C]elsius, [K]elvin or [F]ahrenheit? ");

	//actually get the character input 
	scanf(" %c", &cUnit);
	
	//print them!
	printf("\n It is %.1f %c right now. \n ", fCurr_temp, cUnit);


	return 0; 
}//endmain








