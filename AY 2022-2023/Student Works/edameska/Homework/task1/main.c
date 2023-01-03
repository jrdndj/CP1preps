#include <stdio.h>
#include <string.h>
#include <stdbool.h> //for bool

//added basements

//user input
bool ask(char answer)
{
	printf("Do you want to alight the elevator? Write y or n.\n");
	scanf("%c",&answer);
	getchar();
	if(answer!='y') {
		printf("Goodbye\n");
		return false;
	}//end if
	else return true;	
}//end function

//if the lift is going up
void GoingUp(int n,int m){
	for(int i=n;i<m;i++){
		printf("%d\n",i );
		printf(".\n");
		printf(".\n");
		printf(".\n");
	}//end for
}//end function

//if the lift is going down
void GoingDown(int n,int m){
	for(int i=n;i>m;i--){
		printf("%d\n",i );
		printf(".\n");
		printf(".\n");
		printf(".\n");
	}//end for
}//end function

int main()
{	//declaring variables
	int Current=0;
	char GoingTo[2];
	bool answer,answerForRealz;

	//asling for user input
	printf("You are on the ground floor\n");
	answerForRealz=ask(answer);	

//while loop for multiple elevator rides
while(answerForRealz==true) {

	//asking for user input
	printf("Where do you want to go?\n");
	scanf("%s",GoingTo);
	getchar();
//separates basemments from other floors since switch doesn't work with strings
	if(GoingTo[0]=='B'){
		//this way the if statements only have to look at the second character
		if(GoingTo[1]=='1'){
			if(Current>-1)
			{
				GoingDown(Current,-1);
			}//end if
			if(Current<-1){
				GoingUp(Current,-1);
			}//end if
		printf("You are in Basement 1\n");
		Current=-1;
		}//end basement 1 if

		else if(GoingTo[1]=='2'){
			if(Current>-2)
			{
				GoingDown(Current,-2);
			}//end if
			if(Current<-2){
				GoingUp(Current,-2);
			}//end if
		printf("You are on Basement 2\n");
		Current=-2;
		}//end basement 2 if

		else if(GoingTo[1]=='3'){
			GoingUp(Current,-3);
		printf("You are in Basement 3\n");
		Current=-3;
		}//end basement 3 if

	}//end basements if

	else{//switch case looks at the floors with 1 char
	switch(GoingTo[0]){
	case 'G':
		GoingDown(Current,0);
		printf("You are on the ground floor\n");
		Current = 0;
		break;
	case '1':
		if(Current>(int)GoingTo[0])
		{
			GoingDown(Current,1);
		}//end if
		if(Current<(int)GoingTo[0]){
			GoingUp(Current,1);
		}//end if
		printf("You are on the 1st floor\n");
		Current=1;
		break;
	case '2':
		if(Current>(int)GoingTo[0])
		{
			GoingDown(Current,2);
		}//end if
		if(Current<(int)GoingTo[0]){
			GoingUp(Current,2);
		}//end if
		printf("You are on the 2nd floor\n");
		Current=2;
		break;
	case '3':
		if(Current>(int)GoingTo[0])
		{
			GoingDown(Current,3);
		}//end if
		if(Current<(int)GoingTo[0]){
			GoingUp(Current,3);
		}//end if
		printf("You are on the 3rd floor\n");
		Current=3;
		break;
	case '4':
		if(Current>(int)GoingTo[0])
		{
			GoingDown(Current,4);
		}// end if
		if(Current<(int)GoingTo[0]){
			GoingUp(Current,4);
		}//end if
		printf("You are on the 4th floor\n");
		Current=4;
		break;
	case '5':
		GoingUp(Current,5);
		printf("You are on the 5th floor\n");
		Current=5;
		break;
	default:
		printf("Invalid input\n");
		break;
	}//end switch
	}//end else
	answerForRealz=ask(answer);		

 }//wnd while
	

	return 0;
}
