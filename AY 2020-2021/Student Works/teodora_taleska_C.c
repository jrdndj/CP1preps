/*
 This C program was written by Teodora Taleska -- Functions 
*/

#include<stdio.h>

/* function declaration */
char getString();
int getValue();
double multiplication( int, double );
void printValue( double );

int main() {

  //declaring our local variables
   char cName[50];
   int strength, intelligence, agility;
   double mSum1, mSum2, mSum3;
   double a = 21;
   double b = 19;
   double c = 0.2;
  
  //function call 
  getString( cName );
 
  printf("\n What value do you want your strength to be: ");
    strength = getValue();
  
  printf("\n What value do you want your intelligence to be: ");
    intelligence = getValue();
  
  printf("\n What value do you want your agility to be: ");
    agility = getValue();
  
  printf("\nNow, calculating your HitPoints, ManaPoints and DamageReducedFactor.");
  
  /* multiplication */
    //hitpoints
  printf("\n-HitPoints: ");
  mSum1 = multiplication( strength, a );
  printValue( mSum1 );
    //manapoints
  printf("\n-ManaPoints: ");
  mSum2 = multiplication( intelligence, b );
  printValue( mSum2 );
    //damage reduced factor
  printf("\n-DamageReduceFactor: ");
  mSum3 = multiplication( agility, c );
  printValue( mSum3 );
  
 return 0;
} //entmain

/* function definition */
char getString() {
   //local variables declaration
   char cName[50];
   printf("\n How would you like to name your hero? -->");
   scanf("  %c", cName);
   return cName[50];
} //end getString 

int getValue() {
   //local variable
   int valueNum; 
   scanf("%d", &valueNum);
   return valueNum;
}//end getValue

double multiplication( int dNum1, double dNum2 ) {
  //local variable
  double mSum;
  mSum = dNum1 * dNum2;
  return mSum;  
} //end multiplication

void printValue( double dNum ) {
    printf("\n %.2f", dNum);
}//end print 


