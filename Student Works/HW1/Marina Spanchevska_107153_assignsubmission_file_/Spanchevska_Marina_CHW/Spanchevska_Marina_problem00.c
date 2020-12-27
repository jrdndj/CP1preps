#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main() {

    //declaring variables
    double dbSideA;
    double dbSideB;
    double dbSideC;
    double dbAngleC;
    double dbVal;

    //asking user for input
    printf("\n This is a program that determines whether a triangle is:\n -a right triangle\n -an acute triangle \n -an obtuse triangle \n");
    printf("\n Input side a: ");
    scanf("%lf", &dbSideA);
    printf("\n Input side b: ");
    scanf("%lf", &dbSideB);
    printf("\n Input angle C: ");
    scanf("%lf", &dbAngleC);

    dbVal = PI / 180.0;
    dbSideC = sqrt(dbSideA*dbSideA+dbSideB*dbSideB-2*dbSideA*dbSideB*(cos(dbAngleC*dbVal)));
   
    double adbArray[3]= {dbSideA, dbSideB, dbSideC};
    double dbBiggest;
    dbBiggest = adbArray[0];
    for (int dCtr=1; dCtr<3; dCtr++){
        if(adbArray[dCtr]>dbBiggest){
            dbBiggest=adbArray[dCtr];
        }//end if
    }//end for
   
    if (dbBiggest != dbSideA && dbBiggest != dbSideB){
        
        double dbSum = 0;
        double dbCSq = dbSideC*dbSideC;
        dbSum = dbSideA*dbSideA+dbSideB*dbSideB;
        if (dbSum == dbCSq) {
        printf("\nRight Triangle");
        }
        else if (dbSum < dbCSq) {
        printf("\nObtuse Triangle");
        }
        else {
        printf("\nAcute Triangle");
        }
        
    }//end if
    else if (dbBiggest != dbSideA && dbBiggest != dbSideC){
        
        double dbSum = 0;
        double dbBSq = dbSideB*dbSideB;
        dbSum = dbSideA*dbSideA+dbSideC*dbSideC;
       
        if (dbSum > dbBSq) {
        printf("\nAcute Triangle");
        }
        else if (dbSum < dbBSq) {
        printf("\nObtuse Triangle");
        }
        else {
        printf("\nRight Triangle");
        }
        
    }
    else {
        
        double dbSum = 0;
        double dbASq = dbSideA*dbSideA;
        dbSum = dbSideC*dbSideC+dbSideB*dbSideB;
       
        if (dbSum > dbASq) {
        printf("\nAcute Triangle");
        }
        else if (dbSum < dbASq) {
        printf("\nObtuse Triangle");
        }
        else {
        printf("\nRight Triangle");
        }
        
    }
    

}//end main
