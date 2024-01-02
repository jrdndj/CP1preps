/*
	We have a program that will ask the user to enter
	a single character. 

	Program checks the characters. 
	If they are k b l m, the computer prints Kablam!
	If they are a z n g, the computer prints Bazinga!

	filename: bazinga.c
*/
#include<stdio.h>

int main(){
	char cInput; 
	
	printf("\n Enter a small character: ");
	scanf(" %c", &cInput);

	//now we will use an switch 
	switch(cInput){
		case 'k' : 
		case 'b' : 
		case 'l' :
	 	case 'm' : {
	 		printf("\n Kablam! "); 
	 		break;
	 	} //end case kablam
		 case 'a' :
		 case 'z' :
		 case 'n' :
		 case 'g' : 
	 		printf("\n Bazinga! ");
	 		break; 
	 	default: 
	 		printf("\n I do not recognize that ");
	 		break; 
	 }//end switch
	
	return 0; 
}//end main