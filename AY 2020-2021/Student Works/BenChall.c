#include<stdio.h>

//Function declaration
char getName();
int getAtr();
int printAtr();

int main(){
//declare local vars
int dHP=21;
int dMP=19;
float fDRF=0.2;
char sName;
int *dPtMP,*dPtHP;
float *fPtDRF;
dPtMP=&dMP;
dPtHP=&dHP;
fPtDRF=&fDRF;
//getName
sName=getName();

//Attributes
printf("--Intelligence--");
printAtr(getAtr(),*dPtMP);
printf("\n--Strength--");
printAtr(getAtr(),*dPtHP);
printf("\n--Agility--");
printAtr(getAtr(),*fPtDRF);

return 0;
}//EndMain
//getName
char getName(){
    //declare local var
    int sInput=0;

    printf("\nEnter your name, hero:\n");
    scanf(" %s", &sInput);
    return sInput;
}//EndGetName
//GetAtr
int getAtr(){
//declare local var
int dAtr;

printf("\nInput the value of the attribute:\n");
scanf(" %d", &dAtr);
return dAtr;
}//EndgetAtr
//PrintAtr
int printAtr(int fAtri,int fMulti){//It gives me error:conflicting types for "printAtr" if I declare fAtri and fMulti as float, it only accepts int for whatever reason
//Local vars
int dVal=fAtri*fMulti;
printf(" %d",&dVal);
return dVal;
}//EndprintAtr
