//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
int main(){
	
	//declaring variables
	int dDayNumber, dWeekDay, dCtr;
	
	//interactive input
	printf("Calendar of a specific month will be shown. Which day of the week does the month start? \n Input figure among following figures. \n 0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat \n");
	scanf("%d",&dWeekDay);
	printf(" How many days does the month have? \n");
	scanf("%d",&dDayNumber);
		
	printf("Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
	
	//i used switch because it's easier, just copy and paste
	switch(dWeekDay){
		case 0:
		{
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==7)||(dCtr==14)||(dCtr==21)||(dCtr==29)){     // this is for skipping into next line and it diffirentiates depending on the day of the week that comes first
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 1:
		{
			printf("\t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==6)||(dCtr==13)||(dCtr==20)||(dCtr==27)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 2:
		{
			printf("\t \t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==5)||(dCtr==12)||(dCtr==19)||(dCtr==26)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 3:
		{
			printf("\t \t \t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==4)||(dCtr==11)||(dCtr==18)||(dCtr==25)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 4:
		{
			printf("\t \t \t \t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==3)||(dCtr==10)||(dCtr==17)||(dCtr==24)||(dCtr==31)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 5:
		{
			printf("\t \t \t \t \t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==2)||(dCtr==9)||(dCtr==16)||(dCtr==23)||(dCtr==30)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
		case 6:
		{
			printf("\t \t \t \t \t \t");
			for(dCtr=1; dCtr<=dDayNumber; dCtr++){
				printf("%d \t",dCtr);
				if((dCtr==1)||(dCtr==8)||(dCtr==15)||(dCtr==22)||(dCtr==29)){
					printf("\n");
				}//endif
			}//endfor
			break;
		}//endcase
	}//endswitch
}//endmain
