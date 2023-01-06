#include <stdio.h>

int main (){
//declare variables

int dNum1;

printf("\n Please enter the dimensions you want: ");
scanf("%d", &dNum1);

for (int i=dNum1; i>0;i--){
for (int j=dNum1; j>0;j--){
if (i>=j){
printf("*");}
else {
printf(" ");
}
}
printf ("\n");
}
return 0;
}//end line
