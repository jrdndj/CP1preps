/*
Create a C program with functions that performs the following task: 
receive an input string from the user. this will be used as the name of a hero character.
receive number input from the user. this will be used to get attributes of the hero. use this function to get the strength, intelligence, agility values of the user. 
compute for the HITPOINTS of the hero based on their strength value. value is strength x 21. print it. 
compute for the MANAPOINTS of the hero based on their int value. value is intel x 19. print it. 
compute for the DAMAGE REDUCED FACTOR of the hero based on their agi value. value is agi x 0.2. print it. 
for the previous 3 compute values, use only one function to 2 parameters: the attribute and the multiplier. return the value and print it. 
use functions. the multiplication symbol should only be used once in this entire program!
use local variables and parameter passing.

*/

#include<stdio.h>
float getValueOfAttribute();
float getValueOfPoints(float,float);
int main(){

    //declaring variables
    char sName[100];
    float dStrength, dIntelligence, dAgility;

    //promt the user
    printf("\n Hello user! Please input thr name for your hero (be careful, you have only one chance to do that): ");
    scanf("%s", sName);
    printf("\n Ok...I like that name...Now input %s's attributes: ", sName);
    printf("\n First enter strength: ");
    dStrength = getValueOfAttribute();
    printf("\n Now intelligence: ");
    dIntelligence = getValueOfAttribute();
    printf("\nAnd the last thing but less important, agility: ");
    dAgility = getValueOfAttribute();
    printf("\nHITPOINTS of %s: ",sName);
    getValueOfPoints(dStrength,21);
    printf("\n%s's MANAPOINTS:",sName);
    getValueOfPoints(dIntelligence,19);
    printf("\nDEMAGE REDUCED FACTOR of your hero: ");
    getValueOfPoints(dAgility,0.2);

    return 0;
}

float getValueOfAttribute(){
    //declare local variables
    float n = 0;
    scanf("%f", &n);
    return n;
}
float getValueOfPoints(float dAttribute, float m){
    //declare local variables
    float dValueOfPoints;
    dValueOfPoints = dAttribute * m;
    printf("%g",dValueOfPoints);
    return dValueOfPoints;
}
