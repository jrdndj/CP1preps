#include<stdio.h>
#include<ctype.h>
#include<unistd.h>
#include<stdlib.h>


int get_wanted_location(void); //this function will help me convert chars and strings from input to the integers
void elevator_movement(int CurrentLocation, int WantedLocation); //allows elevator to travel from current location to wanted location


int main(){

int CurrentLocation=0; //starts form ground(0)
int WantedLocation; //location which user of the elevator will input


while(1){
	printf("\n Choose bettwen floors: B1,B2,B3,G,1,2,3,4,5. \t you can exit programe anytime by entering E \n");
	WantedLocation=get_wanted_location(); //using converted strings from functions and storing it in int variable wantedlocation
	
	elevator_movement(CurrentLocation,WantedLocation);
	CurrentLocation=WantedLocation;
}










	return 0;
}

int get_wanted_location(void){

char UserInput[2]; //max 2 chars because user will be able to pick from B1-5
scanf("%s",UserInput);

for(int i=0; i<2; i++){
	UserInput[i]=toupper(UserInput[i]); //changing input to be uppercase letters
}

if(UserInput[0]=='G') return 0; //here is the part where i convert user input to integers
if(UserInput[0]=='1') return 1;
if(UserInput[0]=='2') return 2;
if(UserInput[0]=='3') return 3;
if(UserInput[0]=='4') return 4;
if(UserInput[0]=='5') return 5;
if(UserInput[0]=='B' && UserInput[1]=='1') return -1;
if(UserInput[0]=='B' && UserInput[1]=='2') return -2;
if(UserInput[0]=='B' && UserInput[1]=='3') return -3;
if(UserInput[0]=='E'){
	exit(0);
}
 
printf("\n Error! We don`t have that floor.\n"); //in case of invalid input
return get_wanted_location(); // when wrong input it returns the user to same function again and allows him to type destination once again


}

void elevator_movement(int CurrentLocation, int WantedLocation){
	if(CurrentLocation==WantedLocation){
		printf("\n You are at %d already",CurrentLocation); //if equal then nothing is happening
	}
	if(CurrentLocation<WantedLocation){
		for(int i=CurrentLocation; i<=WantedLocation; i++){  //if Wanted location is bigger we have to increase current location to wanted 
			printf("\n You are at floor %d",i);
			sleep(1);
		}
	}
	if(CurrentLocation>WantedLocation){
		for(int i=CurrentLocation; i>=WantedLocation; i--){ //if wanted location is lower we have to decrease current location to wanted
			printf("\n You are at floor %d",i);
			sleep(1);
		}
	}

}