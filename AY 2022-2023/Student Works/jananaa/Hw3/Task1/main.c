#include <stdio.h>
void elevator(int current, int destination);

    int main(){
        int current = 0, destination = 0;

        printf("Elevator simulator\n");
        
        printf("Select a floor from -3 to 5")

        printf("Enter the current floor: ");
        scanf("%d", &current);
        
        printf("Enter the destination floor: ");
        scanf("%d", &destination);
        elevator(current, destination);
        
        return 0;
    }
    

    void elevator(int current, int destination){
        int visited[8];
        int i;
        
        for (i = 0; i < 8; i++){
            visited[i] = 0;
        }
        
        if (current == destination){
            printf("Same floor!\n");
            return;
        }
        
        if (current & destination < -3 || current & destination > 5){
            printf("Invalid floor!\n");
            return;
        }
     
        if (current & destination <= -4 || current == 5 && destination > 5){
            printf("Last floor!\n");
            return;
        }
     
        if (current < destination){
            printf("Moving up...\n");
            for (i = current; i <= destination; i++){
                if (visited[i] != 1){
                    visited[i] = 1;
                    printf("%d floor\n", i);
                }
            }
        }
     
        if (current > destination){
            printf("Moving down...\n");
        for (i = current; i >= destination; i--){
            if (visited[i] != 1){
                visited[i] = 1;
                printf("%d floor\n", i);
            }
        }

    }

 printf("You have arrived!\n");

}