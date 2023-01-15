#include<stdio.h>
#include<string.h>

int main() {


int nofloors = 5;
int floor;
char ground = 'G';
int elevatormovement = 0; //-1 for down, 0 still, +1 for up

printf("Which floor do you want to go to?\n");
printf("1 2 3 4 5\n");
scanf("%d",&floor);

if(floor == ground) {
    printf("You're on the ground floor.");
}

while(floor>5 || floor <1) {
    printf("Invalid floor, try again\n");
    scanf("%d",&floor);
}

switch(floor) {
    case 1:
        printf("You're on the first floor.\n");
        break;
    case 2: 
        printf("You're on the second floor.\n");
        break;
    case 3:
        printf("You're on the third floor.\n");
        break;
    case 4:
        printf("You're on the fourth floor.\n");
        break;
    case 5: 
        printf("You're on the fitfh floor.\n");
        break;
    default :
        printf("Error, try again.\n");
    }
if(floor == ground) {
    printf("You're on the ground floor.");
}

 return 0;
}