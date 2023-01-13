#include<stdio.h>


//defining two constants 
#define NUM_FLOORS 5;
#define NUM_BASEMENTS 2;


//defining global variables for passangers and floor
int dPassangers;
int dFloor;
//defining a function that will recieve an input from the user and convert it if its a char 
int getInput(){
	
	//defining two variables 
	char cInput;
	int dInput;

	//reciving the char input from the user
	scanf(" %c" , &cInput);

	//checking if the input is valid I
	//https://stackoverflow.com/questions/1478932/check-if-user-inputs-a-letter-or-number-in-c
	if(cInput=='G' || cInput=='1' || cInput=='2' || cInput=='3' || cInput=='4' || cInput=='5'){

		//substracting from cInput a character '0' so we will recieve an integer
		//i used a similar way here by using this link https://stackoverflow.com/questions/628761/convert-a-character-digit-to-the-corresponding-integer-in-c
		dInput=cInput - '0';

		//return value will be the converted one
		return dInput;

	}//end-if
	else if(cInput=='B' && getchar() == '1')  //  I used the same logic from this link https://www.tutorialspoint.com/c_standard_library/c_function_getchar.htm
	
         
	{
		//converting the basement B1 to a value -1
		return -1;   
	}//else-if
	else if(cInput=='B' && getchar() == '2'){

		//returning the value of the base ment B2 to value -2
		return -2;
	}//end-elseif
	else {

		//becuse we defined here the function int, it has to return something in order for it to work properly 
		return -3;
	}//end-else
}//ending function

//defining a user menu funtion that will ask the user on every floor if they want to exit the elevator
void ask_user()
{
	//defining a variable which the user will press 

	int dPressButton;

	printf("\n Do you want to exit?");
	printf("\n Press 1=Yes, 0=No");
	scanf("%d", &dPressButton);

	//using switch case to give the user two options to choose from
	//https://stackoverflow.com/questions/9259648/how-to-break-an-infinite-for-loop-in-c this gave me an inspiration to use switch an break;
	switch(dPressButton){
		case 1:
			printf("\nPassanger exits!");
			dPassangers--;
			
			break;

		case 0:
			printf("Going next floor!");
			break;
		default:
			printf("\n Wrong input!Enter valid number!");
	}//end-switch
printf("\n Number of passangers %d\n",dPassangers);
}

//moving the lift up and down the function will be void as it will not return anything

void MoveElevator(int dFloor,int dDestitnation){
	//moving the elevator UP if we are below the floor we want to reach
	if(dFloor<dDestitnation)
	{
		int i=dFloor+1;
		while(i<=dDestitnation)
		{
			printf("\n Reached floor: %d ",i);
			ask_user();
			i++;
		}//end-while
	}//end-if

	//moving the elevetor DOWN if our desired location is bellow the one we are on
	else if(dFloor>dDestitnation)
	{
		int i=dFloor-1;
		while(i>=dDestitnation)
		{
			printf("Reached floor %d", i);
			ask_user();
			i--;
		}//end-while

	}//end else-if
	else{
		//in this case if the floor and the destination of the user are the same the elevator stays ON the same position
		printf("\nCurrent floor: %d" , dFloor);
		ask_user();
}//end-else


}//end-MoveElevator

//main function 
int main(){

	//initilizing the floor we are on, at the beggining to 0 ( as we assume that we are on Ground floor)
	 dFloor=0;

	
	//asking the user to enter the number of passangers that will travel
	//int dPassangers;
	printf("\n Enter the number of passangers");
	scanf("%d",&dPassangers);

	//initilizing a while cycle 
	while(1){

		//asking the user to enter the destinaton floor they want to travel to
		printf("\n Enter the floor you want to travel to: (B2,B1,G,1,2,3,4,5)");

		 int dDestitnation = getInput();

		//if the destination id the basement 
		if ((dDestitnation==-2) || (dDestitnation==-1))
		{
			//caling the function to move the elevator 
			MoveElevator(dFloor,dDestitnation);

			//updating the floor
			dFloor=dDestitnation;
			
		}//end-if

		//if the destination is a Ground(converted to 0), or any floor smaller or equal to the 5th floor
		else if((dDestination==0) || (dDestitnation ==1) || (dDestitnation==2) || (dDestitnation==3) || (dDestitnation==4) || (dDestitnation==5) ){

			//calling the function to move the elevator
			MoveElevator(dFloor,dDestitnation);

			//updating the floor
			dFloor=dDestitnation;
			

		}//end-if-else

		//in case the user enters any other sign or negative value the return of our function above was -3 so we are using that here
		else 
		{
			if(dDestitnation==-3)
			{
			//we are printing here an error massage 
			printf("\n You enetered wrong input.Please enter a valid number or valid letter.");
		}

		}//end else-if


	}//end-while
	
	return 0;
}//ednmain
