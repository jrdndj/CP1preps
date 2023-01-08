#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int floors[] = {0, 1, 2, 3, 4, 5};
    char cfloors[] = {'G', '1', '2', '3', '4', '5'};
    int corrinput, quit = 0;
    char gotofloor, currfloor = cfloors[0], leave;;
    int gotofloorint, currfloorint = 0;
    
    printf("\nYou're on floor G. Enter the floor you want to go to: ");
    scanf("%c", &gotofloor);
    
    while(quit == 0){
        
    if(gotofloor == 'q'){
        quit = 1;
        printf("\nYou left the elevator.\n");
        continue;
    }
    
    corrinput = 0;
    
    //checking if they entered a valid floor
    for(int i=0; i<6; i++){
        
        if(gotofloor == cfloors[i]){
            corrinput = 1;
            gotofloorint = i;
        }
        
    }
    
    if(corrinput == 0){
        printf("Invalid input. There's no %c floor.", gotofloor);
        continue;
    }
    
    if(gotofloorint - currfloorint > 0){
        
        for(int i=currfloorint+1; i<gotofloorint; i++){
            
            printf("\nYou're on floor %c. Would you like to leave the elevator? [y/n] ", cfloors[i]);
            scanf(" %c", &leave);
            
            if(leave == 'y'){
                
                printf("\nYou left the elevator.\n");
                exit(0);
                
            } else if(leave == 'n'){
                
                continue;
                
            } else {
                
                printf("\nInvalid input.\n");
                i--;
                
            }
            
        }//end for
        
        currfloorint = gotofloorint;
        currfloor = gotofloor;
        
    }//end if up
    
    if((gotofloorint - currfloorint) < 0){
        
        for(int i=currfloorint-1; i>gotofloorint; i--){
            
            printf("\nYou're on floor %c. Would you like to leave the elevator? [y/n] ", cfloors[i]);
            scanf(" %c", &leave);
            
            if(leave == 'y'){
                
                printf("\nYou left the elevator.\n");
                exit(0);
                
            } else if(leave == 'n'){
                
                continue;
                
            } else {
                
                printf("\nInvalid input.\n");
                i--;
                
            }
            
        }
        
        currfloorint = gotofloorint;
        currfloor = gotofloor;
        
    }//end if down
    
    printf("\nYou arrived on floor %c. Would you like to leave the elevator? [y/n] ", currfloor);
    scanf(" %c", &leave);
    
    if(leave == 'y'){
        
        quit = 1;
        printf("\nYou left the elevator.\n");
        continue;
        
    } else if(leave == 'n'){
        
        printf("\nWhat floor would you like to go to? ");
        scanf(" %c", &gotofloor);
        continue;
        
    } else {
        
        printf("\nInvalid input. I kicked you out of the elevator until you learn to input valid values.\n");
        exit(0);
        
    }

    }//end while

    return 0;
    
}
