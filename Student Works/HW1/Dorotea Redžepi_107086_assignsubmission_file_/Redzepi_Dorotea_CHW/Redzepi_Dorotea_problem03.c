#include<stdio.h>

int main(){

	int dUserInput=1; // we put the inital value of UserInput to 1, to make sure that we enter the loop at least once
	int dCounter=0, dSum=0;
	double fAverage;
	
	while (dUserInput != 0) {
	
		printf("Please eneter a positive integer: ");
		scanf("%d", &dUserInput);
		
		if ( dUserInput>=0 ){
			dSum+=dUserInput; //adding value to the sum
			dCounter++; // increasing value of counter by 1
		} // end of if statement
		else{ // if user entered the  negative value we provide error message
			printf("The value you entered is not positive, please eneter positive integer.\n");
		} // end of else statement
		
	} // end of while loop
	
	if (dSum>0){
		fAverage = dSum*1.0 / dCounter;
		printf("Average is: %.2lf\n", fAverage);
	}
	else{
		printf("NO AVERAGE.\n");
	}
	
	return 0;
}
