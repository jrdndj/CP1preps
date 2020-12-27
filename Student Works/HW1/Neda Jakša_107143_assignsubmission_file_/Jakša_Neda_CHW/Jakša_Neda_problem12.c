//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
#include<strings.h>
int main(){
	
	//defining variables
	int dNumber;
	char sRoman[69];
	int dCtr=0;
	
	//interactive input
	printf("Please enter the number you wish to transcribe: \n");
	scanf("%d",&dNumber);
	
	//*weird roman noises*
	while(dNumber>=1000){
		sRoman[dCtr]='M';
		dCtr++;
		dNumber=dNumber-1000;
	}//endwhile
	if(dNumber>=500){
		sRoman[dCtr]='D';
		dCtr++;
		dNumber=dNumber-500;
	}//endif
	while(dNumber>=100){
		sRoman[dCtr]='C';
		dCtr++;
		dNumber=dNumber-100;
	}//endwhile
	if(dNumber>=50){
		sRoman[dCtr]='L';
		dCtr++;
		dNumber=dNumber-50;
	}//endif
	while(dNumber>=10){
		sRoman[dCtr]='X';
		dCtr++;
		dNumber=dNumber-10;
	}//endwhile
	switch(dNumber){
		case 9:
		{
			sRoman[dCtr]='I';
			sRoman[dCtr+1]='X';
			break;
		}//endcase
		case 8:
		{
			sRoman[dCtr]='V';
			sRoman[dCtr+1]='I';
			sRoman[dCtr+2]='I';
			sRoman[dCtr+3]='I';
			break;
		}//endcase
		case 7:
		{
			sRoman[dCtr]='V';
			sRoman[dCtr+1]='I';
			sRoman[dCtr+2]='I';
			break;
		}//endcase
		case 6:
		{
			sRoman[dCtr]='V';
			sRoman[dCtr+1]='I';
			break;
		}//endcase
		case 5:
		{
			sRoman[dCtr]='V';
			break;
		}//endcase
		case 4:
		{
			sRoman[dCtr]='I';
			sRoman[dCtr+1]='V';
			break;
		}//endcase
		case 3:
		{
			sRoman[dCtr]='I';
			sRoman[dCtr+1]='I';
			sRoman[dCtr+2]='I';
			break;
		}//endcase
		case 2:
		{
			sRoman[dCtr]='I';
			sRoman[dCtr+1]='I';
			break;
		}//endcase
		case 1:
		{
			sRoman[dCtr]='I';
			break;
		}//endcase	
	}//endswitch
	printf("%s",sRoman);
}//endmain
