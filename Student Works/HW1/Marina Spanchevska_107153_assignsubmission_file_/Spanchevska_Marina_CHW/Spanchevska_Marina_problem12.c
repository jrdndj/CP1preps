#include<stdio.h>

typedef struct{
   char *dSym;
   int dVal;
}dNumeral;

int maxNume(dNumeral *sNu, int dNum){
    int dCtr;
    int dIndex;
    for(dCtr = 0; dCtr<15; dCtr++){//15 numerals in array
      if(sNu[dCtr].dVal <= dNum)
         dIndex = dCtr;
    }
   //greatest value numeral index, not greater than number
   return dIndex;
}//end maxNume

void decToRoman(dNumeral *sNu, int dNum){

    //declare variable
    int dMax;

    if(dNum != 0){
        dMax = maxNume(sNu, dNum);
        printf("%s", sNu[dMax].dSym);
        dNum -= sNu[dMax].dVal;//decrease number
        decToRoman(sNu, dNum);//recursively print numerals
    }//end if
}//end void

int main() {

    //declaring variables
    int dNumber;
    dNumeral aNume[15] = {{"I",1},{"IV",4},{"V",5},{"IX",9}, {"X",10},{"XL",40},{"L",50},{"XC",90},
    {"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000},{"MMMM",4000},{"V'",5000}};

    //asking the user for input
    printf("Enter a Arabic number: ");
    scanf("%d", &dNumber);

        //Let's make the limit 5000 instead of 1000 :)
        if(dNumber >0 && dNumber <= 5000){//checking input number
            printf("The Roman equivalent of %d is ", dNumber);
            decToRoman(aNume, dNumber);
        }//end if
        else {
            printf("Invalid Input");
        }//end else
            printf("\n");
}//end main
