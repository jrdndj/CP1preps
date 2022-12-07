#include <stdio.h>
int main(){
int dNum1;
int dNum2;
int multiplication = 0;

printf("\n Enter the first number: ");
scanf("%d", &dNum1);
printf("\n Enter the second number: ");
scanf("%d", &dNum2);

while(dNum2 != 0){
	multiplication+=dNum1;
	dNum2-=1;
}
printf("\n Multiplication is : %d \n", multiplication);
return 0;
}
