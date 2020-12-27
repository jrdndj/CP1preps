//This code was written by Neda Jakša, unfortunately.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	
	//declaring variables
    char cFloor = 'G';
    bool bExited = false;

	//*weird elevator music noises*
    while( !bExited){
        switch ( cFloor){
        	case'G':
        	{
                printf("You are at the ground floor.\n");
                printf("First floor: 1 \n");
                printf("Second floor: 2 \n");
                printf("Third floor: 3 \n");
                printf("Fourth floor: 4 \n");
                printf("Leave elevator: X \n");
            break;
    	    }//endcase
            case '1':
            {
                printf("You are at the first floor.\n");
                printf("Ground floor: G \n");
                printf("Second floor: 2 \n");
                printf("Third floor: 3 \n");
                printf("Fourth floor: 4 \n");
                printf("Leave elevator: X \n");
            break;
    	    }//endcase
             case '2':
            {
                printf("You are at the second floor.\n");
                printf("Ground floor: G \n");
                printf("First floor: 1 \n");
                printf("Third floor: 3 \n");
                printf("Fourth floor: 4 \n");
                printf("Leave elevator: X \n");
            break;
        	}//endcase
             case '3':
            {
                printf("You are at the third floor.\n");
                printf("Ground floor: G \n");
                printf("First floor: 1 \n");
                printf("Second floor: 2 \n");
                printf("Fourth floor: 4 \n");
                printf("Leave elevator: X \n");
            break;
        	}//endcase
             case '4':
           	{
                printf("You are at the fourth floor.\n");
                printf("Ground floor: G \n");
                printf("First floor: 1 \n");
                printf("Second floor: 2 \n");
                printf("Third floor: 3 \n");
                printf("Leave elevator: X \n");
            break;
        	}//endcase
        }//endswitch

     char cNextLvl;
	 scanf(" %c",&cNextLvl);

        switch( cNextLvl){
            case '1':
                cFloor = '1';
            break;
             case '2':
                cFloor = '2';
            break;
             case '3':
                cFloor = '3';
            break;
             case '4':
                cFloor = '4';
            break;
             case'G':
               cFloor = 'G';
            break;
            case'X':
            {
               cFloor = 'X';
               printf("Goodbye! Hope to see ya soon \n");
               bExited = true;
            break;
        	}//endcase
        }//endswitch
    }//endwhile
}//endmain
