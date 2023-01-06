//the user gets two digit number.This two digit number can be a combination of 1s and 0s ( 00,01,10,11)

#include<stdio.h>

int main(){



//declare varibales
int dNum1, dDigit1, dDigit2;

//ask the user for input
printf("\n Please enter the number:");
scanf("%d", &dNum1);

//split the number into two digits
//divide by 10 to get the first digit 
dDigit1 = dNum1/10;

//modul by 10 to get the second digit
dDigit2 = dNum1%10;

//check the treating them as boolean
if( dDigit1 && !dDigit2 ) {
	printf("\n Bazinga! \n");
}//endif
else if( !dDigit1 && dDigit2 ){
	printf("\n Booyeah! \n");
}//endelse if
else
 printf("\n Alakazam! \n");	
return 0;
}