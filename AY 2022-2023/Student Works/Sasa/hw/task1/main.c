#include<stdio.h>//includes standard input and output
#include<string.h>//includes string methods
#include <ctype.h>//used to include methods for checking type of input
#include<stdlib.h>//used to include abs()function
#include<limits.h>//used to include INT_MAX

// defining constants
#define NUMBER_OF_FLOORS 9
#define MAX_PASSENGERS 10

//defining global variables
int lift_floor;//current position of the elevator
int num_passengers = 0;//number of passengers
int button_pressed[NUMBER_OF_FLOORS];//array that we use to record which buttons are pressed (and to mark floors as destination floors)

int enter_integer() {//this function is used to enter the integer value so that the program does not crash if the input is wrong
  char input[30];//a string, array of characters, is used to enter input 
  int number;
  while (1) {//loop continues until we break it
    scanf(" %s", input);//inputing a string
    if (sscanf(input, "%d", &number) == 1 && number >= 0) {//sscanf method compares input and a number and returns 1 if input is a number
      return number;//function returns the number
    }
    printf("Invalid input. Please try again.\n");//if the function returns nothing, the input is not an integer and this line is executed.the loop will continue 
  }//end of while
}//end of enter_integer



int press_button() {//press button function will input a string and assign it a floor index
  int return_value=-1;
    while (return_value==-1){//loop will continue to ask for correct input as long as the user does not provide it
      //printf("Please choose a floor by entering its corresponding name.\n");
      printf("\npick a floor to go to: B3, B2, B1, G, 1, 2, 3, 4, 5\n");
      char input[30];// we assume possible incorrect input will not exceed length of 31 characters
      scanf("%s", input);
      if(isalpha(input[0])!=0){//checking if first character of string is a letter, in which case isalpha will return a non-zero integer
        input[0]=toupper(input[0]);//we transform first char of string to uppercase to compare strings more easily
      }
      if (strcmp(input, "B3") == 0) {//strings are compared using strcmp function and if statements since they cannot be compared with == operator
        return_value = 0;
      } else if(strcmp(input, "B2") == 0) {
        return_value = 1;
      } else if(strcmp(input, "B1") == 0) {
        return_value = 2;
      } else if(strcmp(input, "G") == 0) {
        return_value = 3;
      } else if(strcmp(input, "1") == 0) {
        return_value = 4;
      } else if(strcmp(input, "2") == 0) {
        return_value = 5;
      } else if(strcmp(input, "3") == 0) {
        return_value = 6;
      } else if(strcmp(input, "4") == 0) {
        return_value = 7;
      } else if(strcmp(input, "5") == 0) {
        return_value = 8;
      } else {
        // Return value is set to -1 if the input is not recognized
        return_value = -1;
      }
    }//end of while
    button_pressed[return_value]=1;//whan a button is pressed, it is noted as 1 (true) in button_pressed array
  return return_value;
}//end of press_button

int user_choice_y_n(){//used to enter users choice yes or no and transform it into an integer value, to be used as condition in if statements
  int return_value=-1;//return value is initially set as -1
  while(return_value==-1){//as long as the user doesn't enter correct value that will change return_value into 1 or 0, the loop will iterate and ask for correct input
    printf("\nPlease input your choice, y for yes or n for no: ");
    char temp[30];//we assume user input will not exceed 30 characters
    scanf(" %s", temp);
    if ((strcmp(temp, "y") == 0)||(strcmp(temp, "Y") == 0)){
      return_value = 1;//yes is treated as 1, or logical true
      break;//if valid input is entered, breaks out of loop
    }else if ((strcmp(temp, "n") == 0)||(strcmp(temp, "N") == 0)){
      return_value = 0;//no is treated as 0, or logical false
      break;//if valid input is entered, breaks out of loop
    }
  }
  return return_value;
}//end of user_choice

char* floor_to_string(int floor_index){//the program is working with floor indexes, but many floor names are actually strings.
//this function modifies floor index values into strings, to be used for output
// while operating with arrays in functions, only the pointer to the first element of the array is copied
//so we need to use a pointer * to access return value of string type later on in the code
  switch (floor_index){//switching value of floor_index variable
    case 0:
      return "B3";//since return exits the whole function, no break is needed
    case 1:
      return "B2";
    case 2:
      return "B1";
    case 3:
      return "G";
    case 4:
      return "1";
    case 5:
      return "2";
    case 6:
      return "3";
    case 7:
      return "4";
    case 8:
      return "5";
    default:
      // Return error message if the input is not recognized
      return "\nerror: elevator is on invalid floor\n";
  }
}//end of floor_to string

void people_exit();//declaration of the people_exit function that has no return value
void people_enter();//declaration of the people_enter function

void floor_to_floor(int start, int end) {
  if (start != end) {
    if (start > end) {
      printf("\nThe elevator is starting to go down\n");
      for (int i = start; i >= end; i--) {
        printf("FLOOR %s \n", floor_to_string(i));
        people_enter();//calling function people_enter(),allows people to enter during the travel of the elevator
        lift_floor=i;//changing poition of lift_floor
        if(button_pressed[i]){
          people_exit();
          button_pressed[i]=0;
        }
      }
    } else {
      printf("\nThe elevator is starting to go up\n");
      for (int i = start; i <= end; i++) {
        printf("FLOOR %s \n", floor_to_string(i));
        people_enter();//allows people to enter during the travel of the elevator
        lift_floor=i;//changing position of lift
        if(button_pressed[i]){//in case this floor is marked as destination floor;
          people_exit();
          button_pressed[i]=0;//floor is demarked as destination flor
        }
      }
    }
  } else {
    people_exit();//if starting and ending floor are the same, people should exit
    people_enter();
    button_pressed[start]=0;//floor is demarked as destination flor
  }
}//end of floor_to_floor




void people_enter(){//used to let people enter the lift
  if(num_passengers<10){
    printf("\nDoes anyone else want to enter at this floor?");
    int condition=user_choice_y_n();
    if(condition){
      /////////////////////part about number of passengers
        printf("How many people did enter the elevator? ");
        int num_entered = enter_integer();
        if(num_passengers + num_entered > MAX_PASSENGERS){//checking if the input is too big for elevator capacity
          int entered_only = MAX_PASSENGERS - num_passengers;//calculating how many people managed to get inside
          num_passengers = MAX_PASSENGERS;//updating number of passengers to max capacity
          printf("Only %d people out of %d managed to enter the elevator. The elevator is now full.\n", entered_only, num_entered);
        }else{
          num_passengers += num_entered;//updating number of passengers
          printf("%d people entered the elevator. The elevator now has %d passengers.\n", num_entered, num_passengers);
        }
      ///////////////////////////part about number of new buttons
         printf("How many buttons have been pressed? ");
        int num_buttons = enter_integer();//not every passenger will necessarily press a button, so we need to imput how many buttons are pressed
        while(num_buttons > NUMBER_OF_FLOORS){//checking if number of pressed buttons is valid
          printf("There can be max 9 buttons pressed\n");
          num_buttons = enter_integer();
        }
        for(int i=0; i<num_buttons; i++){//iterating and pressing buttons for the entered value
        int temp = press_button();
        }

    }
  }
}

void people_exit(){
  if(num_passengers>0){//people will exit only if there are people in the elevator
    printf("This is a destination floor.\n");
    printf("How many people did exit the elevator?\n");
    int exited = enter_integer();
    if(exited>num_passengers){//checking if the exit number is too big
      printf("There are only %d people in the elevator.\nThat is less than %d.We assume everybody got out.\n", num_passengers, exited);
      num_passengers=0;//updating number of passengers
    }else{
      printf("%d people have exited the elevator.The elevator now has %d passengers.\n\n", exited, (num_passengers-exited));
      num_passengers-=exited;//updating number of passengers
    }
  }
}


int has_floors_left(){//checking if there are any floors marked as destinations
  for (int i = 0; i < 9; i++) {
    if (button_pressed[i] == 1) {//iterating through button_pressed array and searching for values 1
      return 1;//as soon as value 1 is found, returns 1 and exits
    }
  }
  return 0;//otherwise returns0
}



int find_closest_floor(int lift_floor) {//finding the closest floor to go to
  int closest_floor = -1;
  int closest_distance = INT_MAX;//setting closest_distance to max value possible
  for (int i = 0; i < NUMBER_OF_FLOORS; i++) {
    if (button_pressed[i] == 1) {//calculate the distance to this floor
      int distance = abs(lift_floor - i);
      if (distance < closest_distance) {//set this floor as current closest floor and update closest distance
        closest_floor = i;
        closest_distance = distance;
      }
    }
  }
  return closest_floor;
}







int main(){//main function in the code
  //setting the initial value of each element of button_pressed to 0
  for (int i = 0; i < NUMBER_OF_FLOORS; i++) {
    button_pressed[i] = 0;
  }
  printf("This is an elevator simulator.\n");
  printf("Rules:\n");
  printf("Buttons in the elevator are pressed by entering the corresponding name of the floor.\n");
  printf("\nAt the beginning of the game, you are at the ground floor.\n");


  //initially lift and the first passenger are at the ground floor:
  lift_floor=3;
   printf("\n\n");
   int passenger_position=3;


   while(1){//while loop makes the game playable as long as the user wishes to keep on playing

    printf("\n\nstart of new simulation session\n");
    printf("you are at floor %s ", floor_to_string(passenger_position));
    //user initial floor: 

    printf("\nThe elevator is on floor %s \n", floor_to_string(lift_floor));
    printf("There are %d passengers inside the elevator.\n", num_passengers);
    if(lift_floor!=passenger_position){
      printf("The elevator is coming to floor %s where you are at.\n", floor_to_string(passenger_position));
      floor_to_floor(lift_floor, passenger_position);
    } else printf("You (passenger 1) are at the same floor as the elevator.\n");
    num_passengers++;
    press_button();

    people_enter();//checks if more people want to enter

    while(has_floors_left()){
      //here i want to keep on going from floor to floor as long as there is any value of 1 inside button_pressed
      int next_floor = find_closest_floor(lift_floor);//i do so by assigning the value of closest floor to the next floor the elevator will go to
      floor_to_floor(lift_floor,next_floor);//calling function floor_to_floor

    }

    //when the loop exits, all the destinations have been reached. the elevator no longer has anywhere to go.
    printf("session over. Do you wish to continue?\n");
    int cont=user_choice_y_n();
    if(cont==0){
      break;//breaks the loop if the user does not want to continue
    }
    
      printf("\nAt which floor do you want to enter the elevator in the next session?\n");
      passenger_position=press_button();//updates passenger position according to the wish of the user

  }

return 0;// returns 0 if the program compiled correctly
}
