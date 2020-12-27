/*
    Accepts input of 10 integers and finds the smallest one
*/
#include<stdio.h>
int main(){
//Declare vars
int a,b,c,d,e,f,g,h,i,j;
int dSmall=0;

//Prompt user
printf("\Please input 10 numbers: \n");
scanf(" %d%d%d%d%d%d%d%d%d%d,",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

//brute forcing the finding of the smallest number by comparing them one by one
if(a<b){dSmall=a;}
else{dSmall=b;}//EndElse
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
}
