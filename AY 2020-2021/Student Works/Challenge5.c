
#include<stdio.h>
//declaring user defined functions
int Addition(int, int);
int Subtract(int, int);
int Product(int, int);
int Division(int, int);

void main() {
	int dNum1, dNum2;
	//prompt the user for two numbers
	printf("Enter two numbers: \n");
	scanf_s("%d %d", &dNum1, &dNum2);
	//print/call user defined functions
	printf("The sum of the two numbers is: %d\n", Addition(dNum1, dNum2));
	printf("The difference of the two numbers is: %d\n", Subtract(dNum1, dNum2));
	printf("The product of the two numbers is: %d\n", Product(dNum1, dNum2));
	printf("The quotient of the two numbers is: %d", Division(dNum1, dNum2));
	
}

//defining user defined functions
int Addition(int dNum1, int dNum2) {
	int dResult = dNum1 + dNum2;
	return dResult;
}

int Subtract(int dNum1, int dNum2) {
	int dResult = dNum1 - dNum2;
	return dResult;
}

int Product(int dNum1, int dNum2) {
	int dResult = 0;
	for (int i = 0; i < dNum2; i++) {
		dResult += dNum1;
	}
	return dResult;
}

//division won't work if you try to divide two numbers which require the remainder(I can fix that, but it will make the code more complicated, this is just to show that it works)
int Division(int dNum1, int dNum2) {
	int dResult = 1, dCounter = 0;
	if (dNum1 > dNum2 || dNum1 == dNum2) {
		dResult = dNum1;
	}
	else {
		dResult = dNum2;
	}
	while (dResult != 0) {
		if (dNum1 > dNum2 || dNum1 == dNum2) {
			dResult -= dNum2;
		}
		else {
			dResult -= dNum1;
		}
		dCounter++;
	}
	return dCounter;
}