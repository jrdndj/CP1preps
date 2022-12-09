#include <stdio.h>

int main(){
int dNum1, dNum2, division=0;
printf("Enter the first number: ");
scanf("%d", &dNum1);
printf("Enter the second number: ");
scanf("%d", &dNum2);


while(dNum1 != 0){
	dNum1 -= dNum2;
	division+=1;
}

printf("The devision is %d \n", division);

return 0;
}
