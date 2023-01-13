#include <stdio.h>
//function for moving up from current floor to wanted floor
int going_up(int dCurrentFloor,int dDestinationFloor){
    for(int i=dCurrentFloor; i<dDestinationFloor; i++){
        printf("Floor %d\n", i);
    }//end for
    dCurrentFloor=dDestinationFloor;
    return dCurrentFloor;
}
//function for moving down from current floor to wanted floor
int going_down(int dCurrentFloor,int dDestinationFloor){
    for(int i=dCurrentFloor; i>dDestinationFloor; i--){
        printf("Floor %d\n", i);
    }//end for
    dCurrentFloor=dDestinationFloor;
    return dCurrentFloor;
}
//function for handling input
int input(){
    int dDestinationFloor;
    char sFloor;
    printf("\nIf you want to alight press A.");
    printf("\nOn which floor do you like to go to?(G, 1, 2, 3, 4, 5) ");
    printf("\nFloor: ");
    scanf(" %c", &sFloor);
    printf("\n");
    switch(sFloor){
        case 'G':
        case 'g':
            return dDestinationFloor=0;
            break;
        case '1':
            return dDestinationFloor=1;
            break;
        case '2':
            return dDestinationFloor=2;
            break;
        case '3':
            return dDestinationFloor=3;
            break;
        case '4':
            return dDestinationFloor=4;
            break;
        case '5':
            return dDestinationFloor=5;
            break;
        case 'a':
        case 'A':
            return dDestinationFloor=8;     //i just chose random number
            break;
        default:
            printf("Invalid input! Enter valid floor.\n");
            input();
            break;
    }
}
//this function is for asking wheter the user is going to use the elevator again after alighting
int alight(){
    char cAlight;
    printf("Are you going to use the elevator again?(y/n)");
    scanf(" %c", &cAlight);
    return cAlight;
}

int main()
{
    int dDestinationFloor, dCurrentFloor=0;   //it is zero bcs we start on the ground floor
    printf("You are currently on the ground floor.\n");

    while(1){
        
        printf("\nCurrent floor: %d", dCurrentFloor);
        dDestinationFloor=input();
        
        //checking what the user is going to do after alighting
        if(dDestinationFloor==8){
            char cAlight=alight();
            //if they are going to use the elevator again
            if(cAlight=='y'||cAlight=='Y'){
                printf("\nCurrent floor: %d", dCurrentFloor);
                dDestinationFloor=input(); 
            }//if they are not going to use it again
            else if(cAlight=='n'||cAlight=='N'){
                printf("\nExiting the elevator. Goodbye! ");
                break;
            }else{
                printf("\nInvalid input!\n");   //handling invalid input
                alight();
            }
        } 
        
        //if the wanted floor number is bigger than the current one the elevator is going up
        if(dDestinationFloor>dCurrentFloor)
            dCurrentFloor=going_up(dCurrentFloor,dDestinationFloor);
        //if the wanted floor number is less than the current one the elevator is going down
        else if(dDestinationFloor<dCurrentFloor)
            dCurrentFloor=going_down(dCurrentFloor,dDestinationFloor);
        //if the user entered floor number where he/she is currently
        else if(dDestinationFloor==dCurrentFloor){
            printf("You are already on floor %d\n", dCurrentFloor);
            continue;
        }
    }
    return 0; 
}