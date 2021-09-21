//this code was written by Neda Jakša, unfortunately
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	
	//defining variables
	char sVerse[6969];
	char sVerse1[696];
	char sVerse2[696];
	char sVerse3[696];
	char sVerse4[696];
	char sLove="love";
	char sDeath="death";
	char sJesus="jesus";
	int dCtr=0;
	int dWordCount=0;
	int dLoveCount=0;
	int dDeathCount=0;
	int dJesusCount=0;

	//input	
	printf("\n Please enter your first verse \n");
	gets(sVerse1);
	printf("\n Please enter your second verse \n");
	gets(sVerse2);
	printf("\n Please enter your third verse \n");
	gets(sVerse3);
	printf("\n Please enter your fourth verse \n");
	gets(sVerse4);
	
	strcat(sVerse, sVerse1);
	strcat(sVerse, "\n");
	strcat(sVerse, sVerse2);
	strcat(sVerse, "\n");
	strcat(sVerse, sVerse3);
	strcat(sVerse, "\n");
	strcat(sVerse, sVerse4);
	strcat(sVerse, "\n");
	
	//finding length and printing
	int dVerseLength=strlen(sVerse);
	printf("\n The number of characters in your verse is %d \n", dVerseLength);
	
	while(dCtr<dVerseLength){
		sVerse[dCtr]=tolower(sVerse[dCtr]);
		dCtr++;
	}
	dCtr=0;
	//finding spaces and printing ( it didn't work with for for some reason, so I'm using while
	while(dCtr<dVerseLength){
		if(sVerse[dCtr]== ' '){
			dWordCount=dWordCount+1;
		}//endif
		dCtr=dCtr+1;          // dCtr++ isn't working?? like devc++ is doing it's best to not work today
	}//endwhile
	printf("\n The amount of spaces in your verse is %d \n", dWordCount);
	//reseting counter lol
	dCtr=0;
	
	
	//finding love death and jesus 
	while(dCtr<dVerseLength){
		if(sVerse[dCtr]=='l' && sVerse[dCtr+1]=='o' && sVerse[dCtr+2]=='v' && sVerse[dCtr+3]=='e'){
			dLoveCount=dLoveCount+1;
		}
		if(sVerse[dCtr]=='d' && sVerse[dCtr+1]=='e' && sVerse[dCtr+2]=='a' && sVerse[dCtr+3]=='t' && sVerse[dCtr+4]=='h'){
			dDeathCount=dDeathCount+1;
		}
		if(sVerse[dCtr]=='j' && sVerse[dCtr+1]=='e' && sVerse[dCtr+2]=='s' && sVerse[dCtr+3]=='u' && sVerse[dCtr+4]=='s'){
			dJesusCount=dJesusCount+1;
		}
		dCtr=dCtr+1;
	}
	
	printf("The instances of the word love is %d, the word death %d and the word Jesus %d. \n", dLoveCount, dDeathCount, dJesusCount);
	
	//finding and printing amounts
	int max;
	max=dLoveCount;
	if(max<dDeathCount){
		max=dDeathCount;
	}
	if(max<dJesusCount){
		max=dJesusCount;
	}
	
	if(max==dLoveCount){
		printf("Your song is a love song! How lovely. \n");
	}
	if(max==dDeathCount){
		printf("Your song is a metal song! You have good taste in music. \n");
	}
	if(max==dJesusCount){
		printf("Your song is a gospel song! Go Jesus! Yay! \n");
	}
	
	printf(sVerse1);
	printf("\n");
	printf(sVerse2);
	rintf("\n");
	printf(sVerse3);
	rintf("\n");
	
	char size[10];
	char spaces[10];
	strcat(sVerse4, ", ");
	sprintf(size, "%d", dVerseLength);
	strcat(sVerse4, size);
	strcat(sVerse4, " charachters and ");
	sprintf(spaces, "%d", dWordCount);
	strcat(sVerse4, spaces);
	strcat(sVerse4, " spaces");
	
	printf(sVerse4);
	
	

	
}//endmain
