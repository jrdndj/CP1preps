#include <stdio.h>

int main() {
    //Declaring variables
	int n = 0;
	double sum = 0.0;
	int input;
    float average;

    //Input integer
	printf("Please, type one positive integer: ");
	scanf("%d", &input);

	//Checking value of integer
	while(input != 0){
		if(input > 0){
			sum += input;
			n++;
		}else{
			printf("Error"); //If it is negative, eror
		}
		printf("Please, type one positive integer: ");
	    scanf("%d", &input);
	}
	if(n>0){
		average = (float) sum / n; //Average
        printf("\nThe average value of the said numbers is %f\n", average);
	}else{
	    printf("No average");
	}
	return 0;
}


