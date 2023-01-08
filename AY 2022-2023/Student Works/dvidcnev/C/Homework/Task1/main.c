#include <stdio.h>
#include <string.h> //for string
#include <stdbool.h> //for bools
#include <stdlib.h> //for rand() function
#include <time.h> //for srand(time()) function

#ifdef _WIN32
    #include <windows.h> //for windows systems
#else
    #include <unistd.h>
#endif

int passengers = 1;

void help() { //help function to print out the accepted commands
    printf("\nFloors to enter in the program: [B/G/1/2/3/4/5],");
    printf("\nFunctions to enter in the program: [U/D/E/P/H/]");
    printf("\n-U -- elevator goes up");
    printf("\n-D -- elevator goes down");
    printf("\n-E -- user exits the elevator ( ends the program )");
    printf("\n-P -- print the current floor");
    printf("\n-H -- help ( brings up this )\n\n");
}

void moving (int seconds) { //used to slow down the program by given seconds
    #ifdef _WIN32
    Sleep(seconds*1000); //Sleep accepts milliseconds, hence we need to multiply it by 1000 to make it into seconds
    #else
    sleep(seconds);
    #endif
}

void movingD ( double seconds ) { //used to slow down the program by given seconds ( and milliseconds! )
    #ifdef _WIN32
    Sleep(seconds*1000);
    #else
    sleep(seconds);
    #endif
}

int randomize(int lower, int upper) { //to randomize numbers, lower is the lower limit/ upper is the upper limit
    srand(time(0));
    int num = (rand() % upper)+lower;
    return num;
}

bool randomchance (int numerator, int denominator) { // numerator/denominator chance
    int num = randomize(1, denominator); //get a number from 1 till the given denominator
    if ( num <= numerator ) { //check the ranges in between the numerator and denominator, if its between 1 and the numerator return true
        return true;
    }
    else { //if it's between the numerator+1 and denominator return false
        return false;
    }

} 

char inputchar () { //to input a char and check if it's only one character
    char str[128];
    bool correctinput = false;
    while ( correctinput == false ) { // a loop which repeats until we get a string ( character ) that is less than 2
        printf("\nInput a command: ");
        scanf("%s", str);
        if ( strlen(str) < 2 ) { //if the length is less than one
            char special = str[0];
            correctinput=true; //we could also use break here
            return special; // returns the character
        }
        else { //if the length is more than 1
            printf("\nError input, please enter only one character. Try again.");
            continue; //continues the while loop
        }
    }
}

void openandclose() { //used to slow down the program by 2 seconds ( in total ) and prints out dots, for aesthetic purposes only
    movingD(0.5);
    printf("\n.");
    movingD(0.5);
    printf(" .");
    movingD(0.5);
    printf(" .");
    movingD(0.5);
}

int rand_passengers ( int lastpassengers, int passengers) { //used to check if the passenger count changed
    if ( passengers > lastpassengers ) { //passengers entering
        if ( passengers - lastpassengers == 1 ) { //used to print out if only one passenger has entered
            printf("\n%d new passenger has entered the elevator.\n", passengers - lastpassengers);
            return passengers;
        }
        else { //if more than one passenger enters
            printf("\n%d new passengers have entered the elevator.\n", passengers - lastpassengers);
            return passengers;
        }
    }
    else if ( passengers < lastpassengers ) { //passengers leaving
        if ( lastpassengers - passengers == 1 ) { //used to print out if only one passenger has left
        printf("\n%d passenger has left the elevator.\n", lastpassengers - passengers);
        return passengers;
        }
        else { //if more than one passenger has left
            printf("\n%d passengers have left the elevator.\n", lastpassengers - passengers);
            return passengers;
        }
    }
    else { //no change of state ( passengers neither left or entered )
        return lastpassengers;
    }
}

void printpassengers ( int numof ) { //print how many passengers are in the elevator
    if ( numof == 1 ) { //if there is only one passenger ( currently the user )
        printf("Number of passengers: %d ( You )\n", numof);
    }
    else { //more than one passenger
        printf("Number of passengers: %d\n", numof);
    }
}

void floordecider ( int elevator ) { //calculates on which elevator the program is
    if ( elevator > 0) { //if the elevator is above ground floor
        printf("\nWe are on floor %d.\n", elevator);
    }
    else if ( elevator < 0 ) { //if the elevator is below ground floor
        printf("\nWe are on basement floor %d.\n", elevator*-1);
    }
    else { //if the elevator is on ground floor
        printf("\nWe are on ground floor.\n");
    }
}

void elevatorcall(int elevator) { //used to be calculate on which floor the elevator has been called to
    if (elevator < 0 ) { //basements
        printf("\nElevator has been called to floor B%d!", elevator*-1);
    }
    else if ( elevator > 0 ) { //upper floors
        printf("\nElevator has been called to floor %d!", elevator);
    }
    else { //ground floor (elevator==0)
        printf("\nElevator has been called to ground floor!");
    }
}

int floordown ( int elevator ) { //used to move the elevator down by one floor
    if ( elevator >= -2 ) { //if elevator is on basement floor 2 or above
        openandclose();
        floordecider(elevator-1);
        return elevator-1;
    }
    else { // if elevator is on basement floor 3 ( which is currently the lowest floor )
        printf("\nBasement floor 3. Cannot go down anymore.\n");
        return -3; 
    }
}

int floorup ( int elevator ) { //used to move the elevator up by one floor
    if ( elevator <= 4 ) { //if elevator is on floor 4 or below
        openandclose();
        floordecider(elevator+1);
        return elevator+1;
    }
    else { // if elevator is on floor 5 ( which is currently the highest floor )
        printf("\n5th floor. Cannot go up anymore.\n");
        return 5;
    }
}

int directfloor (int elevator, int desiredfloor, bool Brandom) { //used to calculate and return the desired floor

        if ( elevator == desiredfloor ) { //same floor
            if ( elevator < 0 ) {
                printf("\nWe are already on basement floor %d.\n", elevator*-1);
            }
            else if ( elevator > 0 ) {
                printf("\nWe are already on floor %d.\n", elevator);
            }
            else  {
                printf("\nWe are already on ground floor.\n");
            }
            return desiredfloor; //return the same floor the user is currently on
        } 

        if ( Brandom == true ) { //if this is true, then activate the chance for the elevator being called 
            if ( randomchance(2,5) ) { // 2/5 ( 40% chance the elevator will be called )
                int Pelevator = elevator+3; //we add by 3 so we can work with only positive integers
                int Pdesiredfloor = desiredfloor+3; //we add by 3 so we can work with only positive integers
                int randomfloor = randomize(0, 8); //0 is basement floor 3, 3 is ground floor, 4 is floor 1 and 8 is floor 5 
                while ( randomfloor == Pelevator || randomfloor == Pdesiredfloor ) { //if the random number is not different from the current given values ( floors ) for the desired floor and elevator
                    randomfloor = randomize(0, 8); //randomize again
                }           
                int dist_calledF; //distance from the called floor
                int dist_desiredF; //distance from the desired floor
                //Measure the distance from the Elevator ( current position ) to the given random floor 
                if ( Pelevator < randomfloor ) { dist_calledF = randomfloor-Pelevator; } else { dist_calledF = Pelevator-randomfloor; }
                //Measure the distance from the desired floor ( desired position ) to the given random floor 
                if ( Pdesiredfloor < Pelevator ) { dist_desiredF = Pelevator - Pdesiredfloor; } else  { dist_desiredF = Pdesiredfloor - Pelevator; }
                
                randomfloor-=3; //subtract 3 from the random floor entered so that we can use it in our directfloor function again
                int cpassengers; //initialize cpassengers so it can be randomized

                if ( dist_desiredF < dist_calledF ) { //go to our DESIRED floor first, then the CALLED floor
                    elevatorcall(randomfloor); //print out a message which floor was called
                    directfloor(elevator, desiredfloor, false);
                    if ( randomchance(1,6)) { // 1/6 ( 16.6% ) chance for a passenger to enter/leave
                        cpassengers = randomize(2,5); //randomize the number of passengers that can enter/leave
                        passengers = rand_passengers(passengers, cpassengers); //compare the current and the last number of passengers
                    }
                    printf("\nPress enter to continue. ");
                    while( getchar() != '\n' ); //until we don't get an enter input ( newline ) 
                    int floore = directfloor(desiredfloor, randomfloor, false); 
                    cpassengers = randomize(2,5);
                    passengers = rand_passengers(passengers, cpassengers);
                    return floore;
                }
                else { //go to the CALLED floor first, then the DESIRED floor
                    elevatorcall(randomfloor); //print out a message which floor was called
                    directfloor(elevator, randomfloor, false); 
                    cpassengers = randomize(2,5); //randomize the number of passengers that can enter/leave
                    passengers = rand_passengers(passengers, cpassengers); //compare the current and the last number of passengers
                    return directfloor(randomfloor, desiredfloor, false);
                }
            }
        }


    
        if ( elevator-1 == desiredfloor ) { //elevator to go down one floor
            return floordown(elevator);
        }
        else if ( elevator+1 == desiredfloor ) { //elevator to go up one floor
            return floorup(elevator);
        }
        else if ( desiredfloor < 0 && elevator <= 0 && elevator > desiredfloor ) { //traversing around the basement levels to go down
            int counter = elevator-desiredfloor; //how many times should the elevator move down
            for (int i=counter-1; i>=0; i--) { //loop to move the elevator
                if ( i != 0) {
                    int num = desiredfloor + i;
                    moving(2);
                    printf("\nPassing through basement floor %d...", num*-1);
                }
                else if ( i == 0) { //arriving at the desired floor
                    openandclose();
                    floordecider(desiredfloor);
                    return desiredfloor;
                }
            }
        }
        else if ( elevator > 0 && desiredfloor < 0  ) { //traversing from the upper floors to the basement
            int counter = elevator; //how many times should the elevator move down
            for (int i=1; i<=counter; i++) { //loop to move the elevator
                if ( i != counter ) {
                    int num = elevator - i;
                    moving(2);
                    printf("\nPassing through floor %d...", num);
                }
                else if ( i == counter ) { //arriving at the desired floor
                    moving(2);
                    printf("\nPassing through ground floor...");
                }
            }
            return directfloor(0, desiredfloor, false);
        }
        else if ( elevator < 0 && desiredfloor < 0 && elevator < desiredfloor  ) { //traversing around the basement levels to go up
            int counter = (elevator*-1)-(desiredfloor*-1); //how many times should the elevator move up
            for (int i=counter-1; i>=0; i--) { //loop to move the elevator
                if ( i != 0) {
                    int num = desiredfloor - i;
                    moving(2);
                    printf("\nPassing through basement floor %d...", num*-1);
                }
                else if ( i == 0) { //arriving at the desired floor
                    openandclose();
                    floordecider(desiredfloor);
                    return desiredfloor;
                }
            }
        }
        else if ( elevator < 0 && desiredfloor >= 0 &&elevator < desiredfloor  ) { //traversing from the basement floors to the higher floors
            if ( desiredfloor != 0 ) {  //if the desired floor is not ground floor
                int counterbasement = elevator*-1; //how many times should the elevator move up till it reaches ground floor
                for (int i=1; i<=counterbasement; i++) { //loop to move the elevator
                    if ( i != counterbasement ) {
                        int num = elevator + i;
                        moving(2);
                        printf("\nPassing through basement floor %d...", num*-1);
                    }
                    else if ( i == counterbasement ) { //arriving at the desired floor
                        moving(2);
                        printf("\nPassing through ground floor...");
                    }
                }
                return directfloor(0, desiredfloor, false);
            }
            else if ( desiredfloor == 0 ) { //if the desired floor is ground floor
                int counter= elevator*-1; //how many times should the elevator move up till it reaches ground floor
                for (int i=1; i<=counter; i++) { //loop to move the elevator
                    if ( i != counter ) {
                        int num = elevator + i;
                        moving(2);
                        printf("\nPassing through basement floor %d...", num*-1);
                    }
                    else if ( i == counter ) { //arriving at the desired floor
                        openandclose();
                        floordecider(desiredfloor);
                        return 0;
                    }
                }
            }
        }
        else if ( elevator > desiredfloor) { //traversing through the higher floors ( above ground level ) down
            int counter = elevator-desiredfloor; //how many times should the elevator move down
            for (int i=counter-1; i>=0; i--) { //loop to move the elevator
                if ( i != 0) {
                    int num = desiredfloor + i;
                    moving(2);
                    printf("\nPassing through floor %d...", num);
                }
                else if ( i == 0) { //arriving at the desired floor
                    openandclose();
                    floordecider(desiredfloor);
                    return desiredfloor;
                }
            }
        }
        else if ( elevator < desiredfloor) { //traversing through the higher floors ( above ground level ) up
            int counter = desiredfloor-elevator; //how many times should the elevator move up
            for (int i=1; i<=counter; i++) { //loop to move the elevator
                if ( i != counter) {
                    int num = elevator + i;
                    moving(2);
                    printf("\nPassing through floor %d...", num);
                }
                else if ( i == counter) { //arriving at the desired floor
                    openandclose();
                    floordecider(desiredfloor);
                    return desiredfloor;
                }
            }
        }
}

void printfloor ( int floor ) { //used to print out the current floor we are on
    if ( floor > 0 ) { //elevator is above ground level
        printf("Floor: %d\n", floor);
    }
    else if ( floor == 0 ) { //elevator is ground floor
        printf("Floor: G\n");
    }
    else { //elevator is below ground level
        printf("Floor: B%d\n", floor*-1);
    }
}


int main() { // MAIN PROGRAM STARTS HERE
    
    char command; //the main command used in the program
    int floor = 0; //starting from the ground floor which is ZERO and with one passenger which is the user
    //the floors are categorized by the following: from -3 to -1 are Basement floors, 0 is Ground floor and from 1 till 5 are the higher floors
    bool exit = false; //boolean for the while loop to repeat until it is true ( elevator is exited )


    help();
    printf("Starting from the ground floor.\n");


    do { //beggining of the do-while loop

        srand(time(0)); //used for the rand() function

        int currentfloor = floor; //save the last state of the floor and passengers
        printpassengers(passengers); //print the current number of passengers
        command = inputchar();

            switch ( command ) { //switch case to go through one of the cases ( commands )
                case 'G': //move to ground floor
                    floor = directfloor(floor, 0, true);
                    break;
                case '1': //move to floor 1
                    floor = directfloor(floor, 1, true);
                    break;
                case '2': //move to floor 2
                    floor = directfloor(floor, 2, true);
                    break;
                case '3': //move to floor 3
                    floor = directfloor(floor, 3, true);
                    break;
                case '4': //move to floor 4
                    floor = directfloor(floor, 4, true);
                    break;
                case '5': //move to floor 5
                    floor = directfloor(floor, 5, true);
                    break;
                case 'D': //move one floor down
                    floor = directfloor(floor, floor-1, true);
                    break;
                case 'U': //move one floor up
                    floor = directfloor(floor, floor+1, true);
                    break;
                case 'E': //exit the elevator
                    exit = true;
                    break;
                case 'P': //print the current floor
                    printfloor(floor);
                    break;
                case 'H': //bring up the help functions
                    help();
                    break;
                case 'B': //basement floors
                        printf("Please enter which basement floor you would like to travel to [1/2/3]: ");
                        command = inputchar();
                            switch ( command ) { //switch case to go through one of the cases ( commands )
                                case '1': //basement floor 1
                                    floor = directfloor(floor, -1, true);
                                    break;
                                case '2': //basement floor 2
                                    floor = directfloor(floor, -2, true);
                                    break;
                                case '3': //basement floor 3
                                    floor = directfloor(floor, -3, true);
                                    break;
                                default: //if none of the cases matched
                                    printf("Error input. Try again.");
                                    break;
                            }
                    break;
                default: //if none of the cases matched
                    printf("\nCommand error. Try again.\n");
                    break;
            }
    } while ( exit == false ); //exiting the while loop

    printf("Elevator has been exited. Goodbye!");

    //end of program
    return 0; 
}