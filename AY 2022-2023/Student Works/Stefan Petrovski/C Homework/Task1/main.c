#include <stdio.h>//include preprocess directive (standard input/output header). Used for functions scanf()/printf().

int main() {
    
    int currentFloor = 0;  //declare variable of type int that is used to indicate the current floor.
    char basementFloor;  //declare variable of type char used to indicate the basement floor.
    char getInput(); //call getInput function in main.
    void moveElevator(int *currentFloor, char destination); //call moveElevator function in main.

    
    while (1)//loop the program until user chooses 'E' and then exit the program.
    {
        printf("You are currently on floor %d\n", currentFloor);  //tells the user which floor is the elevator on.
        printf("Enter the floor you want to go to (G, B1, B2, B3, 1, 2, 3, 4, 5) or E to exit: ");  //asks the user to enter the floor.
        char destination = getInput();  //calls the getInput function and stores the returned value in a char variable called destination.

        
        if (destination == 'E') //cheks if the user chooses 'E' and wants to exit the program.
        {
            break; //exit the program.
        }

        
        moveElevator(&currentFloor, destination);  /* Otherwise, move the elevator to the desired floor and pass 
        the address of 'currentFloor' and the value of 'destination'.*/
    }

    return 0;
}

// Function for getting the user input.
char getInput()
{
    char input; //declare a variable of type char responsible for input.
    scanf(" %c", &input); //read the user input and store it into variable input.

    // Validation of the user input

    //as long as the user inputs characters that don't match the validated ones, loop and print unvalid input.
    while (input != 'G' && input != 'B' && input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != 'E')
    {
        printf("Invalid input! Enter a valid floor (G, B1, B2, B3, 1, 2, 3, 4, 5) or E to exit: "); //inform the user that the input is not valid.
        scanf(" %c", &input); //re-read the user input and store it into variable input.
    }

    return input; //return the value stored in the variable input.
}

//Function for moving the elevator.
void moveElevator(int *currentFloor, char destination)
{
    
    int destinationFloor; //declare a variable of type int responsible for destinationFloor.
    
    switch (destination) // Convert the destinationFloor character to an integer
    {
        case 'G': //in case of char 'G', convert the char in destination floor of type int = 0
            destinationFloor = 0;
            break;
        case 'B': //in case of char 'B', implement another switch function that handles the basement floors.
            printf("Enter the basement floor you want to go to (1, 2, 3): "); //ask the user to enter the basment floor number.
            char basementFloor = getInput(); //assign the value from getInput to the basementFloor variable.
            switch (basementFloor) 
            {
                case '1':
                    destinationFloor = -1; 
                    break;
                case '2':
                    destinationFloor = -2;
                    break;
                case '3':
                    destinationFloor = -3;
                    break;
            }
            break;
        case '1':
            destinationFloor = 1;
            break;
        case '2':
            destinationFloor = 2;
            break;
        case '3':
            destinationFloor = 3;
            break;
        case '4':
            destinationFloor = 4;
            break;
        case '5':
            destinationFloor = 5;
            break;
    }
}   //comment here when putting the two parts together delete this '}' bracket !!!. When testing it by itself leave it in the code.

Exlenation: 
This first part of the code is compilable version of the code. There are no errors. But the thing is that no matter what input you insert 
it doesn't recognise the floors and it returns "you are currently on the floor 0" or basically the movement function is not fully completed. So no matter
what input you insert you're on the floor 0. Of course of the validated inputs. If you put something invalid it gives back a message that you have entered invalid input.
The Exit option works. 
    
    
    ********SECOND PART STARTS HERE*********
    
    
    if (destinationFloor > *currentFloor) {//statement where we check if the destinationFloor is bigger than the currentFloor.
        printf("Moving up...\n"); //inform the user that the elevator is moving up.
       
        /*loop through the variables and print each floor in between 
        the previous and the newly chosen one*/

        for (int i = *currentFloor + 1; i <= destinationFloor; i++) {
            printf("Floor %d\n", i); //inform the user of the current floor.
        }
   
    } else if (destinationFloor < *currentFloor) { //statement where we check if the destinationFloor is smaller than the currentFloor.
    
        printf("Moving down...\n"); //inform the user that the elevator is moving down. 

        /*loop through the variables and print each floor in between 
        the previous and the newly chosen one*/
        
        for (int i = *currentFloor - 1; i >= destinationFloor; i--) { 
            printf("Floor %d\n", i); //inform the user of the current floor.
        }
    }
  // Update the current floor of the elevator
    *currentFloor = destinationFloor;
 }   


Explenation:
By adding this part to the code it fixes/completes the previous part of the code and it works properly. 
Meaning, it recognises the floors properly when the user inputs them. Including the 3 basement floors. 
