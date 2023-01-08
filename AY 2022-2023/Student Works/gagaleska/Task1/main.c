#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

//checking if the entry is valid
int ValidEntry(char entry[])
{
    int length;
    int floor;
    length=strlen(entry);
    //if there are entered more than two entries then it is not valid and we return 0
    if(length>2)
    {
        return 0;
    }
    //if there is one entry 
    if(length==1)
    {
    	//the variable floor is of the type int, so we need to substract the appropriate ASCII sign for 0 and get char
        floor=entry[0]-'0';
        //we check if the entry is BASEMENT or one of the floors between 0 (for GROUND FLOOR) and 6
        if(entry[0]=='B' || (floor>0 && floor<6) )
        {
            return 1;
        }
        //not a valid entry
        else
        {
            return 0;
        }
    }
    //if there are exactly two entries 
    else if (length==2)
    {
        floor=(entry[1]-'0');
        if(entry[0]=='B' && (floor>0 && floor<4) )
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    
}

int Entry(char entry[])
{
    int length;
    int floor;
    length=strlen(entry);
    
    
    if(length==1)
    {
    	//isalpha function to check the character
        if(isalpha(entry[0]))
        {
            floor = 0;
        }
        else
        {
            floor=entry[0]-'0';
        }
    }
    else if (length==2)
    {
        floor=(-1)*(entry[1]-'0');
    }
    return floor;
    
}
//function to continue asking if the user wants to use the elevator
//if the user enters Y then the elevator is still working and if the user enters anything else the elevator stops and the passengers go out 
int continuing(char k)
{
    if(toupper(k)=='Y')
    {
        return 1;
    }
    return 0;
}
//function for the possible floors
void floors()
{
    printf("Choose your desired floor \n");
    printf("5 4\n");
    printf("3 2\n");
    printf("1 G\n");
    printf("B1 B2\n");
    printf("B3 \n");
}

//function for going up and going down 
void moving(int current_floor, int floor, char entry[])
{
	//if the selected floor is the current floor, the program doesn't do anything
    	if(current_floor==floor)
        {
            printf("You are already on this floor \n");
        }
        //if the desired floor is above the current floor, the elevator goes up
        else if(current_floor<floor)
        {
            for(int i=current_floor; i<floor; i++)
            {
                printf("GOING UP...\n");
                sleep(1);
            }
            printf("You are on %s floor \n", entry);
        }
        //if the desired floor is below the current floor, the elevator goes down
        else
        {
            for(int i=current_floor; i>floor; i--)
            {
                printf("GOING DOWN...\n");
                sleep(1);
            }
            printf("You are on %s floor \n",entry);
        }
}



int main()
{
    char entry[30];
    int check, floor;
    int whether_to_continue=1;
    char k;
    
    int current_floor=0;
    
    printf("You have entered the elevator! \n You are on the ground floor \n");
    while(whether_to_continue)
    {
        floors();
        scanf("%s",entry);
        
        
        check=ValidEntry(entry);
        if(check==0)
        {
            printf("\n");
        }
        else
        {
            floor=Entry(entry);
        }
        
        moving(current_floor,floor,entry);
        current_floor=floor;
        
        printf("Do you want to keep moving \n Enter Y for YES and anything else for NO \n");
        scanf(" %c",&k);
        whether_to_continue=continuing(k);
        
    }

    return 0;
}
