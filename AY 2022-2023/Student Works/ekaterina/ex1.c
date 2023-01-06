#include<stdio.h>

//mainfunction
void ex1();
int main(){
	
ex1();

return 0;
	
}//endmain

//exercise 1

/*void ex1(){
	int dNum1;
	float fNum2;
	double dNum3;
	double Sum;


	printf("Please enter the variable int");
	scanf("%d",&dNum1);

	printf("Please enter the variable float");
	scanf("%f",&fNum2);

	printf("Please enter the variable double");
	scanf("%lf",&dNum3);

	Sum=dNum1+fNum2+dNum3;
	printf("The sum is: %lf", Sum);
	
}*/

voiid ex2(){
	int pNum;
	int counter =0;


	printf("Enter a number\n");
	scanf("%d",&pNum);

	for(int i=0;i<pNum;i++)
	{
		if(pNum%i==0){
			counter++;

		}
	}if(counter==2)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number  is not file");
	}
}





















