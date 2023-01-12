#include <stdio.h>

/*
    User is currently on the ground floor,
    so we firstly need to make a function that will
    allow the user to choose on which floor they would
    like to go to. We will use switch statement because of 
    multiple floors.
*/
    char pressbutton()
    {   
       char button;
       printf("Please press the button to get to the desired floor: ");
       scanf("%c",&button);
       
       switch(button)
       {
            case 'G':
                printf("You pressed button G!\n");
                break;
            case '1':
                printf("You pressed button 1!\n");
                break;
            case '2':
                printf("You pressed button 2!\n");
                break;
            case '3':
                printf("You pressed button 3!\n");
                break;
            case '4':
                printf("You pressed button 4!\n");
                break;
            case '5':
                printf("You pressed button 5!\n");
                break;
            default:
                printf("Please waite!\n");
    
       }
            return button;
           
        
  }
  /*
    We are now going to create a function that will move lift
    from users current location to their desired floor.
  */
    void liftDirection(char startFloor, char finalFloor) 
    {
       
        printf("Lift is going from %c floor to %c floor!\n", startFloor, finalFloor);
        startFloor = finalFloor;
        printf("You have arrived at %c floor!\n", finalFloor);
           
}

    int main() {
         char startFloor = 'G'; 
         char finalFloor;
         bool passenger=true; //lift can only have one passenger
         int ans;
         char newfloor;
    printf("The lift finally arrived! You are currently on the %c floor!\n", startFloor);
    finalFloor=pressbutton();
    liftDirection(startFloor, finalFloor);
    printf("Would you like to leave? If yes press number 1, if not number 2:\n");
    scanf("%d", &ans);
    
    if(ans==1)
    {
        printf("Goodbye! Hopefully you enjoyed the ride!\n");
    } else  {
        printf("Which floor would you like to go to?\n");
        scanf("%c", &newfloor);
        finalFloor=pressbutton();
        liftDirection(startFloor, finalFloor);
    }
   
    return 0;
}