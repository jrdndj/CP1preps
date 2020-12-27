
#include<stdio.h>
/*
    Write a program that asks the user to type 10 integers and returns the smallest integer in the
list
*/
int main(){
//Declare variable
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int dSmall=0;

//User input
printf("\Please enter 10 numbers: \n");
scanf(" %d%d%d%d%d%d%d%d%d%d,",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

//The finding of the smallest number
if(a<b){dSmall=a;}
else{dSmall=b;}
if(dSmall>c){dSmall=c;}
if(dSmall>d){dSmall=d;}
if(dSmall>e){dSmall=e;}
if(dSmall>f){dSmall=f;}
if(dSmall>g){dSmall=g;}
if(dSmall>h){dSmall=h;}
if(dSmall>i){dSmall=i;}
if(dSmall>j){dSmall=j;}
printf("\nThe smallest number is %d",dSmall);


return 0;
}//End
