//This code is written by Lana Jurisic, 89201033, BF1 - EN
//First we need to include library that we will be using for this task

#include<stdio.h>

//In this part I declared what methods besides int main I will be using in order
unsigned long long factor(int);
int revFactor(unsigned long long);
int minFactor(int);
void printResults(int[], int);

int dLim = 200000; //The number that was given in the task as a constrain(limit), we will use it as a constrain here as well. It's declared here because it will be used everywhere

int main (int argc, char *argv[]) {
//First we need to introduce the user to the program (let them know what it does) and ask them to enter numbers
	printf("Hello, we are going to find a minimum positive integer K, such that K! is a multiple of the square of entered number! \nplease enter the number of test cases you want to have (note it must be between 1 and 200000): ");
	int dTestcase;
	scanf("%d", &dTestcase);
//We need to let the user know if they entered
	if (dTestcase < 0 || dTestcase > dLim) {
		printf("I'm sorry but the number of test cases must be between 1 and %d\n\n", dLim);
		return 1;
	}
	int dTest[dTestcase]; //we are declaring the numbers that user has entered as an array with the number of the input cases as number of members in the array
	// Now we get number that the user has entered
	int dCount = 0;
	while (dCount < dTestcase) {
		printf("%d number : ", dCount + 1);
		scanf("%d", &dTest[dCount]);
		if (dTest[dCount] < 0 || dTest[dCount] > dLim) {
			printf("I'm sorry, but the number must be between 1 and %d\n", dLim); //We need to notify them that they need to enter numbers in a certain range
			continue;
           }
		++dCount;
	 }
	printResults(dTest, dTestcase); //we are calling the method for printing which is the last one
return 0;
}

/*
In this part we are doing the equation to find the factorial of the entered number
 */
unsigned long long factor (int num) {
	unsigned long long res = 1; //we are starting with 1 because 1 is the smallest result of a factorial and 1 has multiplication identity
	for (int i = 1; i <= num; ++i) {
		res *= i; //we are doing this because N! = 1*2*3*...*N and the easiest way to do it is with for loop
	    }
    return res;
}

//now that we have out factorial, we need to find the reverse factorial
int revFactor(unsigned long long lluFactor) {
	int dCount = 2; //2 is the smallest number that can divide other numbers and getting a different result
	while (lluFactor % dCount == 0) {
		lluFactor = lluFactor / dCount;
		if (lluFactor == 1)	return dCount;
		++dCount;
	}
	return 0;
}

//Now that we have reverse factor as well as factor, we can find the number that our task is looking for!!
int minFactor (int n) {
	unsigned long long lluN = factor(n);
	lluN = lluN * lluN;
	for (int i = 1; i < dLim; ++i) {
		int k = revFactor(lluN * i);
		if (k != 0) {
			return k;
		}
	}
	return 0;
}

// Lastly, we will use this method to print the results. I tried to recreate the table that was shown in the task and make it more artsy
void printResults (int Test[], int dTestcase) {
    //Trying to create a table here
    printf("__________________________________\n");
	printf("\n|Entered number:     Result:      |\n");
	printf("__________________________________\n");
	for (int i = 0; i < dTestcase; ++i) {
		if (Test[i] < 1 || Test[i] > 200000) continue;
		printf("\n|  %-15d|" , Test[i]);
		printf("|  %-10d |", minFactor(Test[i]));
	}
	printf("\n__________________________________\n");
}






