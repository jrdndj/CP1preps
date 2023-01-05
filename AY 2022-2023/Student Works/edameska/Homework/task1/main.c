#include <stdio.h>
#include <string.h>
#include <stdbool.h> //for bool

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
	bool answer,answerForRealz;
	int PeopleNum;

	//asling for user input
	printf("You are on the ground floor\n");
	answerForRealz=ask(answer);	

//while loop for multiple elevator rides
while(answerForRealz==true) {

	//asking for user input
	printf("How many people are in the lift?\n");
	scanf("%d",&PeopleNum);
	getchar();

	//creating array for all of the locations
	char GoingTo[PeopleNum][2];
	for (int i = 0; i < PeopleNum; ++i)
	{
	printf("Where do you want to go?\n");
	scanf("%s",GoingTo[i]);
	getchar();
	}//end for
	int LastElement=PeopleNum;
	

//going thru all of the locations
for (int i = 0; i < PeopleNum; ++i)
	{
	if(GoingTo[i][0]=='B'){

		if(GoingTo[i][1]=='1'){
			if(Current>-1)
			{
				GoingDown(Current,-1);
			}//end if
			else{
				GoingUp(Current,-1);
			}//end if
		printf("You are in Basement 1\n");
		Current=-1;
		}//end basement 1 if

		else if(GoingTo[i][1]=='2'){
			if(Current>-2)
			{
				GoingDown(Current,-2);
			}//end if
			else{
				GoingUp(Current,-2);
			}//end if
		printf("You are on Basement 2\n");
		Current=-2;
		}//end basement 2 if

		else if(GoingTo[i][1]=='3'){
			GoingUp(Current,-3);
		printf("You are in Basement 3\n");
		Current=-3;
		}//end basement 3 if

	}//end basements if

	else{
	switch(GoingTo[i][0]){
	case 'G':
		if(Current>0){
		GoingDown(Current,0);
		}//end if
		else{
		GoingUp(Current,0);
		}//end else
		printf("You are on the ground floor\n");
		Current = 0;
		break;
	case '1':
		if(Current>(int)GoingTo[i][0])
		{
			GoingDown(Current,1);
		}//end if
		else{
			GoingUp(Current,1);
		}//end else
		printf("You are on the 1st floor\n");
		Current=1;
		break;
	case '2':
		if(Current>(int)GoingTo[i][0])
		{
			GoingDown(Current,2);
		}//end if
		else{
			GoingUp(Current,2);
		}//end else
		printf("You are on the 2nd floor\n");
		Current=2;
		break;
	case '3':
		if(Current>(int)GoingTo[i][0])
		{
			GoingDown(Current,3);
		}//end if
		else{
			GoingUp(Current,3);
		}//end if
		printf("You are on the 3rd floor\n");
		Current=3;
		break;
	case '4':
		if(Current>(int)GoingTo[i][0])
		{
			GoingDown(Current,4);
		}// end if
		else{
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
//asks for new people 
int NewPeople;
printf("How many new people entered the lift?\n");
scanf("%d",&NewPeople);
getchar();
PeopleNum+=NewPeople;
//if no one entered it skips to the next iterations
if(NewPeople==0){
	continue;
}//end if
//for loop to ask where everyones going
//starts from last element to fill up the array further
for (int j = LastElement; j < PeopleNum; ++j)
{
	printf("Where are you going?\n");
	scanf("%s",GoingTo[j]);
	getchar();
}//end innerfor
	LastElement=PeopleNum;
}//end for
	answerForRealz=ask(answer);		
 }//wnd while
	

	return 0;
}
