/* Including libraries/headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char LEVELS[9][2]= {"b3","b2","b1","g","1","2","3","4","5"}; //hard coded as stated in the description	
#define LENGTH 9 //hard coded as well

/* Funtion to print */
void print(char* sLast, char* sNow){
	//Interface print
	printf("\n-----------------------------------------\n");
	for (int i = LENGTH; i >= 0; --i){
		/* Necessary variables */
		// char* sUpperLevel=toupper(LEVELS[i]);
		char* sUpperLevel;

		/* Hard coding the level input comparisons */
		if(strcmp(LEVELS[i],"b1g")==0)sUpperLevel="B1";
		else if(strcmp(LEVELS[i],"b2b1g")==0)sUpperLevel="B2";
		else if(strcmp(LEVELS[i],"b3b2b1g")==0)sUpperLevel="B3";
		else if(strcmp(LEVELS[i],"g")==0)sUpperLevel="G";
		else sUpperLevel=LEVELS[i];

		/* Active floor prints */
		if(LEVELS[i]==sLast || strcmp(LEVELS[i],sLast)==0){
			printf("%s <===== Initially pressed level\n",sUpperLevel);
			continue;
		} //end if
		if(LEVELS[i]==sNow || strcmp(LEVELS[i],sNow)==0){
			printf("%s <===== Level at the moment\n",sUpperLevel);
			continue;
		} //end if
		/* Inactive floor print */
		printf("%s\n",sUpperLevel);
	} //end for
} //end function

/* Function to input char */
char cinput(char sQuestion[]){
	//Necessary variables
	char cInput;

	/* Interface prints */
	printf("\n-----------------------------------------\n");

	/* Question print */
	printf("%s\n", sQuestion);

	/* Input */
	scanf(" %c", &cInput);	
	cInput=tolower(cInput);
	return cInput;
} //end function

/* Function to input string */
char* sinput(char sQuestion[]){
	//Necessary variables
	char s2Input[2];
	// sInput[0]='\'; //to be null/empty

	/* Interface prints */
	printf("\n-----------------------------------------\n");

	/* Question print */
	printf("%s\n", sQuestion);

	/* Input */
	scanf("%s", s2Input);
	char* sInput=malloc(3*sizeof(char));
	sInput[0]=s2Input[0];

	/* Checking if input has 2 character */
	size_t uiSizeStrlen=2;
	if(strlen(s2Input)== uiSizeStrlen){
		sInput[1]=s2Input[1];
		sInput[2]='\0';
	} //end if
	else sInput[1]='\0';

	/* Lower-casing the characters */
	for (int i = 0; i < strlen(sInput); ++i) sInput[i]=tolower(sInput[i]);
	return sInput;
} //end function

/* Function to check if the user wants to leave the lift */
char leave_lift(char* sLast,char* sNow) {
	/* Necessary variables */
	char* sPrintNow;
	char cLeave='o';
	
	/* Hard coding the level adjacents */
	if(strcmp(sNow,"b1g")==0)sPrintNow="B1";
	else if(strcmp(sNow,"b2b1g")==0)sPrintNow="B2";
	else if(strcmp(sNow,"b3b2b1g")==0)sPrintNow="B3";
	else if(strcmp(sNow,"g")==0)sPrintNow="G";
	else sPrintNow=sNow;

	/* Clearing screen */
	system("clear");

	/* Interface prints */
	printf("\n-----------------------------------------\n");
	printf("\nYou are on %s level\n",sPrintNow);

	/* Same level print */
	if(strcmp(sLast,sNow)==0) {
		printf("\nYou are at your initially pressed level\n");
		print("here",sNow);
		// printf("\nAvailable levels are: B3 B2 B1 G 1 2 3 4 5 \n");
		// return 'y';
	} //end if
	else print(sLast,sNow);

	/* Checking if user wants to enter lift */
	while(1){
		cLeave=cinput("Do you want to leave the lift?(y/n) \n");
		if(cLeave=='y' || cLeave=='n') break;
		printf("Error: Invalid input\n");
	} //end while
	return cLeave;
} //end function

/* Function to ask the user which floor to go to */
char* choose_level(char* sLastLevel) {
	/*Necessary variables*/
	char* sLevelInputUnsorted=sinput("Which level do you want to go to?\n");
	char* sLevelInput;
	int check=0;
	char cHereLevel='o';

	/* Hard coding the level adjacents */
	if(strcmp(sLevelInputUnsorted,"b1")==0)sLevelInput="b1g";
	else if(strcmp(sLevelInputUnsorted,"b2")==0)sLevelInput="b2b1g";
	else if(strcmp(sLevelInputUnsorted,"b3")==0)sLevelInput="b3b2b1g";
	else sLevelInput=sLevelInputUnsorted;

	/* Checking if it is not the same level */
	while(strcmp(sLevelInput,sLastLevel)==0){
		cHereLevel = leave_lift(sLastLevel,sLevelInput);
		if(cHereLevel=='y') return "here";
		// else {
		// 	choose_level(sLastLevel);
		// } //end else
	} //end while

	/* Valid level name check */
	for	(int i = 0; i < LENGTH; ++i) if(strcmp(LEVELS[i],sLevelInput)==0)check=1;
	if(check==0) {
		printf("\nError: Invalid level name \n");
		return choose_level(sLastLevel);
	} //end if
	return sLevelInput;
} //end function

/* Start of main code */
int main() {
	/* Necessary variables */
	char* sLastLevel="g"; //starting level
	char* sEndLevel; //ending level
	char cContinue, cLeave='y'; //characters for checking
	int dLastLevelIndex,dEndLevelIndex; //indexes of starting and ending level

	/* Clearing screen */
	system("clear");

	/* Initial print */
	print(sEndLevel,sLastLevel);

	/* Starter loop */
	while(1){
		/* Checking if user has left */
		if(cLeave=='y') cContinue =cinput("Do you want to enter the lift?(y/n) \n");

		/* Checking if user wants to enter lift */
		if(cContinue=='n'){
			printf("\n-----------------------------------------\n");
			printf("\nHave a good day\n\n");
			break;
		} //end if
		else if(cContinue=='y'){
			/* Select to which level to up to */
			sEndLevel=choose_level(sLastLevel);

			/* If same level don't run whole code */
			if(strcmp(sEndLevel,"here")==0)continue;

			/* Getting the indexes of the levels */
			for (int i = 0; i < LENGTH; ++i){
				if(strcmp(sLastLevel,LEVELS[i])==0) dLastLevelIndex=i;
				if(strcmp(sEndLevel,LEVELS[i])==0) dEndLevelIndex=i;
			} // end for

			/* Checking if it's going up or down*/
			if(dLastLevelIndex<dEndLevelIndex){
				/* If you want to leave the elevator on your way up */
				for (int i = dLastLevelIndex+1; i < LENGTH; ++i){
					cLeave = leave_lift(sEndLevel,LEVELS[i]);
					if (cLeave=='y' || strcmp(sEndLevel,LEVELS[i])==0) {
						sLastLevel=LEVELS[i];
						break;
					} //end if
				} //end for

			}else if(dLastLevelIndex>dEndLevelIndex){
				/* If you want to leave the elevator on your way up */
				for (int i = dLastLevelIndex-1; i >= dEndLevelIndex; --i){
					cLeave = leave_lift(sEndLevel,LEVELS[i]);
					if (cLeave=='y' || strcmp(sEndLevel,LEVELS[i])==0) {
						sLastLevel=LEVELS[i];
						break;
					} //end if
				} //end for
			} //end if
		} //end if
		else printf("Error: Invalid input\n");
	} //end while
	
	/* End of code */
	return 0;
}