#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h> 
#include <stdbool.h> 
 
int max(int num1, int num2) 
{ 
    return (num1 > num2 ) ? num1 : num2; 
} 
 
int min(int num1, int num2) 
{ 
    return (num1 > num2 ) ? num2 : num1; 
} 
 
bool ValidateLevel(char level[]) 
{ 
    if(!strcmp(level, "B3")  !strcmp(level, "B2")  !strcmp(level, "B1")  !strcmp(level, "G")  !strcmp(level, "1")  !strcmp(level, "2")  !strcmp(level, "3")  !strcmp(level, "4")  !strcmp(level, "5")) 
    { 
        return true; 
    } 
    else 
    { 
        return false; 
    } 
} 
 
int ConvertLevel(char level[]) 
{ 
    if(!strcmp(level, "B3")) 
    { 
        return 0; 
    } 
    else if(!strcmp(level, "B2")) 
    { 
        return 1; 
    } 
    else if(!strcmp(level, "B1")) 
    { 
        return 2; 
    } 
    else if(!strcmp(level, "G")) 
    { 
        return 3; 
    } 
    else if(!strcmp(level, "1")) 
    { 
        return 4; 
    } 
    else if(!strcmp(level, "2")) 
    { 
        return 5; 
    } 
    else if(!strcmp(level, "3")) 
    { 
        return 6; 
    } 
    else if(!strcmp(level, "4")) 
    { 
        return 7; 
    } 
    else if(!strcmp(level, "5")) 
    { 
        return 8; 
    } 
} 
 
int main() 
{ 
    int i, choice, pos = 3, converted_level, up_till = 0, down_till = 8; 
    int people_waiting_to_board[9]; 
    for(i = 0; i < 9; i++) 
    { 
        people_waiting_to_board[i] = 0; 
    } 
    char level[20]; 
    bool dirn_elevator = true;  //this is to track the direction of elevator, true means up and false means down 
    printf("Elevator Simulator Program\n"); 
    printf("\nThe elevator is currently at Ground floor (level G) and currently empty!\n"); 
    while(1) 
    { 
        printf("Please choose the number corresponding to the action to be performed:\n1 - A new user wishes to board the elevator at some level\n2 - Let the elevator travel\n3 - Exit Program\n"); 
        scanf("%d", &choice); 
        while((getchar()) != '\n'); 
        if(choice == 1) 
        { 
            printf("\nPlease enter the level from which the new user wishes to board the elevator: "); 
            scanf("%s", &level); 
            if(ValidateLevel(level)) 
            { 
                converted_level = ConvertLevel(level); 
                people_waiting_to_board[converted_level]++; 
                if(converted_level > pos) 
                { 
                    up_till = max(up_till, converted_level); 
                } 
                if(converted_level < pos) 
                { 
                    down_till = min(down_till, converted_level); 
                } 
            } 
            else 
            { 
                printf("\nInvalid level entered! Please enter appropriate input!\n"); 
            } 
        } 
        else if(choice == 2) 
        { 
            if(dirn_elevator) 
            { 
                if(up_till > pos) 
                { 
                    pos++; 
                    printf("\nElevator traveled one level higher, the travelers can get off, if they wish to!\n"); 
                } 
                else if(down_till < pos) 
                { 
                    dirn_elevator = false; 
                    up_till = 0; 
                    pos--; 
                    printf("\nElevator traveled one level lower, the travelers can get off, if they wish to!\n"); 
                } 
                else 
                { 
                    printf("\nThe elevator did not move\n"); 
                } 
            } 
            else 
            { 
                if(down_till < pos) 
                { 
                    pos--; 
                    printf("\nElevator traveled one level lower, the travelers can get off, if they wish to!\n"); 
                } 
                else if(up_till > pos) 
                { 
                    dirn_elevator = true; 
                    down_till = 8; 
                    pos++; 
                    printf("\nElevator traveled one level higher, the travelers can get off, if they wish to!\n");
} 
                else 
                { 
                    printf("\nThe elevator did not move\n"); 
                } 
            } 
            if(pos == 0) 
            { 
                printf("\nThe elevator is now at level B3\n"); 
            } 
            else if(pos == 1) 
            { 
                printf("\nThe elevator is now at level B2\n"); 
            } 
            else if(pos == 2) 
            { 
                printf("\nThe elevator is now at level B1\n"); 
            } 
            else if(pos == 3) 
            { 
                printf("\nThe elevator is now at level G\n"); 
            } 
            else if(pos == 4) 
            { 
                printf("\nThe elevator is now at level 1\n"); 
            } 
            else if(pos == 5) 
            { 
                printf("\nThe elevator is now at level 2\n"); 
            } 
            else if(pos == 6) 
            { 
                printf("\nThe elevator is now at level 3\n"); 
            } 
            else if(pos == 7) 
            { 
                printf("\nThe elevator is now at level 4\n"); 
            } 
            else if(pos == 8) 
            { 
                printf("\nThe elevator is now at level 5\n"); 
            } 
        } 
        else if(choice == 3) 
        { 
            printf("\nExiting the Program...\n"); 
            break; 
        } 
        else 
        { 
            printf("\nInvalid choice! Please enter a valid choice.\n"); 
        } 
        if(people_waiting_to_board[pos]) 
        { 
            printf("%d people boarded the elevator at this level", people_waiting_to_board[pos]); 
            people_waiting_to_board[pos] = 0; 
            printf("\nPlease enter the level to which the new person wishes to travel to: "); 
            scanf("%s", &level); 
            while(!ValidateLevel(level)) 
            { 
                printf("\nInvalid level entered! Please re-enter the level to travel to: "); 
                scanf("%s", &level); 
            } 
            converted_level = ConvertLevel(level); 
            if(converted_level > pos) 
            { 
                up_till = max(up_till, converted_level); 
            } 
            if(converted_level < pos) 
            { 
                down_till = min(down_till, converted_level); 
            } 
        } 
    } 
}
