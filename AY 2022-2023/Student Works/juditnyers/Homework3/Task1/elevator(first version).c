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
