#include <stdio.h>

int main ()
{
	char cInput;
	char cInputYesNo;
	printf("\n Welcome to animal ensurance center!");
	printf("\n Be kind, tell me which type of animal do you have. D is for dog, C is for cat, B is for bird and R if for reptiles. ");
	scanf ("%c", &cInput);
	printf("\n Is your animal neutured? y for yes, n for no");
	scanf ("%c", &cInputYesNo);

	switch (cInput)
	{
		
	case 'D' :
		if (cInputYesNo == 'y')
		{ 
			printf("\n Ensurance for your dog is $50.");
		} 
		else if (cInputYesNo == 'n')
		{ 
			printf("\n Ensurance for your dog is $80.");
		} 
		else printf("\n ERROR!!!");
		break;
	case 'C' :  
		if (cInputYesNo == 'y')
		{ 
			printf("\n Ensurance for your cat is $40.");
		}
		else if (cInputYesNo == 'n')
		{ 
			printf("\n Ensurance for your cat is $60.");
		} 
		else printf("\n ERROR");
		break;
	case 'B' : 
		printf("\n Ensurance for your bird is free! Enjoy your day!");
		break;
	case 'R' : 
		printf("\n Ensurance for your reptile is free! Enjoy your day!");
		break;
	default:
		printf("\n ERROR! We don't provide insurance for your animal. Sorry!");
			
	
	}
		printf("\n Thank you for using our code center! Hope we will see you again! ");
	return 0;
}