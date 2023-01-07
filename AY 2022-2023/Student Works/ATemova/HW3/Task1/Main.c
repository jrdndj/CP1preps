//Student ID: 89221055 
//Student: Anastasija Temova

#include <stdio.h>
//Main function
int main()
{
//Declare a variable to store the current_floor of the elevator
    int current_floor=0;
//Enter an infinite loop
    while(1>0)
    {
//Variable to store the number of floor requests
        int n;
//Read in the number of floor requests from the user
        scanf("%d", &n);
//Declare an array to store the floor requests
        int string[10000];
//Initialize each element of the array to -1
        for(int i=0;i<10000;i++)
        {
        string[i]=-1;
        }
//Read in the floor requests from the user and store them in the array
        for(int i=0;i<n;i++)
        {
        int j;
        scanf("%d", &j);
        string[i]=j;
        }
//Declare a variable to keep track of the current floor request being processed
        int i=0;
//Loop through the array of floor requests
        while(string[i]!=-1)
        {
//Move the elevator to the requested floor
            while(current_floor!=string[i])
            {
//Check if the requested floor is invalid
                if(string[i]>5 || string[i]<0)
                {
//Print an error message if the floor is invalid
                printf("\nThe floor does not exist");
//Exit the loop
                break;
                }
//If the current floor is below the requested floor, move the elevator up one floor
                if(current_floor<string[i])
                {
//Print the current floor
                printf("\nThe elevator is on %d",current_floor);
//Move the elevator up one floor
                current_floor++;
                }
//If the current floor is above the requested floor, move the elevator down one floor
                else
                {
//Print the current floor
                printf("\nThe elevator is on %d",current_floor);
//Move the elevator down one floor
                current_floor--;
                }
            }
//Check if the requested floor is invalid
            if(string[i]>5 || string[i]<0)
            {
//Print an error message if the floor is invalid
            printf("\nThe elevator did not reach the requested %d",string[i]);
            printf(" floor ");
            }
//If the requested floor is valid
            else
            {
//Declare a variable to store the number of additional floor requests
            int k;
//Print a message indicating that the elevator has reached the requested floor
            printf("\nThe elevator reached the requested %d",string[i]);
            printf(" floor ");
//Read in the number of additional floor requests from the user
            scanf("%d", &k);
//Read in the additional floor requests from the user and store them in the array
            for(int j=0;j<k;j++)
                {
                int x;
                scanf("%d", &x);
                string[j+n]=x;
                }
            }
//Move on to the next floor request
            i+=1;
        }
    }
//Return statement
    return 0;
}
