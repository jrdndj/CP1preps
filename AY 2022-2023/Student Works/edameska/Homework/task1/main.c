//task1
#include <stdio.h>
#include <string.h>
//for minimum of the grade

//if the lift is going up
void GoingUp(int n,int m){
	for(int i=n;i<m;i++){
		printf("%d\n",i );
		printf(".\n");
		printf(".\n");
		printf(".\n");
	}//end for
}

//if the lift is going down
void GoingDown(int n,int m){
	for(int i=n;i>m;i--){
		printf("%d\n",i );
		printf(".\n");
		printf(".\n");
		printf(".\n");
	}//end for
}

int main()
{	//declaring variables
	char GoingTo;
	char answer;
	int Current=0;
	
	//asling for user input
	printf("You are on the ground floor\n");
	printf("Do you want to alight the elevator? Write y or n.\n");
	scanf("%c",&answer);
	getchar();
	if(answer!='y') {
		printf("Goodbye\n");
	}//end if
		
while(answer=='y') {
	printf("Where do you want to go?\n");
	scanf("%c",&GoingTo);
	getchar();
			switch(GoingTo){
	case 'G':
		GoingDown(Current,0);
		printf("You are on the ground floor\n");
		Current = 0;
		break;
          
	case '1':
		if(Current>(int)answer)
		{
			GoingDown(Current,1);
		}//end if
		if(Current<(int)answer){
			GoingUp(Current,1);
		}//end if
		printf("You are on the 1st floor\n");
		Current=1;
		break;
          
	case '2':
		if(Current>(int)answer)
		{
			GoingDown(Current,2);
		}//end if
		if(Current<(int)answer){
			GoingUp(Current,2);
		}//end if
		printf("You are on the 2nd floor\n");
		Current=2;
		break;
          
	case '3':
		if(Current>(int)answer)
		{
			GoingDown(Current,3);
		}//end if
		if(Current<(int)answer){
			GoingUp(Current,3);
		}//end if
		printf("You are on the 3rd floor\n");
		Current=3;
		break;
          
	case '4':
		if(Current>(int)answer)
		{
			GoingDown(Current,4);
		}// end if
		if(Current<(int)answer){
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
printf("Do you want to alight the elevator?\n");
		scanf("%c",&answer);
		getchar();
		if(answer!='y') {
			printf("Goodbye\n");
			break;
		}

 }//end while	

	return 0;
}
