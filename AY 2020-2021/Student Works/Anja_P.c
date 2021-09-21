#include<stdio.h>

int getNum();
int Sum(int, int);
int Div(int, int);
int Mult(int, int);
int Dif(int, int);
void PrintNum(int);

int main() {
	//declaring variables
	int N1, N2,nSum=0, nMult=1, nDif = 0, nDiv = 1;
 

	N1 = getNum();
	N2 = getNum();
	nSum = Sum(N1, N2);
	nDiv = Div(N1, N2);
	nMult = Mult(N1, N2);
	nDif = Dif(N1, N2);
	//to print the values
	PrintNum(N1);
	PrintNum(N2);
	printf("\nSum is: %d", nSum);
	printf("\nQuotient is: %d", nDiv);
	printf("\nProduct is: %d", nMult);
	printf("\nDifference is: %d", nDif);

	


	return 0;
}//end main

	int getNum() {

		//local variables her
		int Number = 0;
	
		//t interactive input
		printf("\n Please enter a number: ");
		scanf_s("%d", &Number);

		return Number;


	}//end getNum()

	int Sum(int a, int b) {
		
		return a+b;
	}//end Sum()
    int Div(int a, int b) {
		int div;
		if (a != 0 && b != 0) {
				div = a / b;
		
		}
		else {
				printf("\nWrong input!");
		}

		
			return div;
	}//end Div()
	
	int Mult(int a, int b) {
		
		
		return a * b;
	}//end Mult()
	int Dif(int a, int b) {
		
		return a - b;;
	}//end Dif()
	
	void PrintNum(int a) {
		printf("\nValue you entered is: %d", a);
	}//end PrintNum()