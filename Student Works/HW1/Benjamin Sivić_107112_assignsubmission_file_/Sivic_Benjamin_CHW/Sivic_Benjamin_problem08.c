/*
    Program takes number of columns from the user input then prints out a multiplication table up to 10
    The way its made is kind of brute forced, there is probably a more elegant way of doing it
    The commented code at the bottom is me trying to make this with 2 for loops but all it would change was the number of rows
*/
#include <stdio.h>
int main() {
//declare vars
int dColumn;

printf("Please input an integer from 1 to 10\n");
scanf(" %d",&dColumn);
//checking user input
if(dColumn<1 || dColumn>10){
    printf("\nRange is 1 to 10!");
    return 1;
}//EndIf

//Printing the table with a for loop for each row
printf(" x");
for(int i=1; i<=dColumn; i++){
    printf(" %d",i);
}//EndForFirstRow
printf("\n 1");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*1);
}//EndFor1
printf("\n 2");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*2);
}//EndFor2
printf("\n 3");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*3);
}//EndFor3
printf("\n 4");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*4);
}//EndFor4
printf("\n 5");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*5);
}//EndFor5
printf("\n 6");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*6);
}//EndFor6
printf("\n 7");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*7);
}//EndFor7
printf("\n 8");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*8);
}//EndFor8
printf("\n 9");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*9);
}//EndFor4
printf("\n 10");
for(int i=1; i<=dColumn;i++){
    printf(" %d",i*10);
}//EndFor10



/*for (int i=1; i<=dColumn; i++) {
        printf(" %d",i);
        for (int j=1; j<=10; j++) {
            if (i<=dColumn){printf(" %d",i*j);}
        }//EndForJ
        printf("\n");
    }//EndForI*/

return 0;
}
