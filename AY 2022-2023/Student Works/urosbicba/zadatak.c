#include<stdio.h>
#include<stdbool.h>
int main() {

int dNum1;
printf("\n Please enter number: ");
scanf("%d", &dNum1);
int dNum2;
printf("\n Please enter number: ");
scanf("%d", &dNum2);
int suma = 0;
for (int i = 0; i < dNum1; ++i)
{	
	suma += dNum2;
}
printf("\n  %d" , suma);
printf("\n");
int razlika = dNum1;
int counter = 0;
while(razlika > dNum2){
	razlika -= dNum2;
	counter++;
}
printf("\n  %d" , counter);
printf("\n");
} //endmain
