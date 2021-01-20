//Code written by Emilija Volarev 89201005

/*  I had some troubles understanding the question of the exercise itself. So I have just done it how I understood it. I think it is incorrect, but the parts that I did understand I have done. 
	And those parts that I did not understand I really tried hard to them as well. */

//pre processor headers
#include<stdio.h>

//function declarartions

int getNum();  //empty because it dose not receive anything from the caller
//it has int which means it has return type int
//using this function we will ask user to provide a number

int computeFact(int);  // with the help of this function we will compute factorial of provided number

int computeSquareFact(int); // with the help of this function we will compute the square of the factorial of the provided number

int IsMultiple(int,int); // K! is a multiple of N!^2 

void printIntK(int); //function to print the minimum positive integer




int main(){

	//declaration and initialization of local variables
	int dNum=0, dFact=0, dSqFact=0, dMinPosInt=0, dMinPosIntFact=0;
	int arr[25];

	//interactive input
	dNum = getNum(); //function call

	dFact = computeFact(dNum); //function call

	dSqFact = computeSquareFact(dFact); //function call

	//check whether K! is a multiple of N!^2
	if (IsMultiple(dMinPosIntFact, dSqFact )){  //if they are multiple 

		for ( int dCtr1 = dMinPosIntFact; dCtr1 >= 1; dCtr1-- ){  //for loop which will go from K, K-1, K-2 ...... 1

			for(int dCtr2=0; dCtr2 < dMinPosIntFact; dCtr2++){  //enter values of K, K-1, K-2 ...... 1 into an array in order to extract K
									    //array will be in decreasing order since the counter of the outer for loop is decreasing

	  			arr + dCtr2;

	  		}//end inner for

		dMinPosInt = arr[0]; So the first element of the array is the wanted K


		}//end outer for

	}//end if


	printIntK(dMinPosInt); //function call


	return 0;
}//end main

//function definitions

int getNum(){

	//declaration and initialization of the local variables
	int dUserInput=0;

	//reusable interacitve input
	printf("\nPlease enter a positive integer: ");
	scanf("%d", &dUserInput);

	return dUserInput;

}//end getNum


int computeFact( int dNum ){

	//declare local variables
	int dFact=1, dCtr; //counter


	//with the help of for loop we can go from 1 to provided number, to get the factorial of that number(by multiplying everything from provided number up to 1, including also both of them)
	for ( dCtr=1; dCtr <= dNum; dCtr++ ){

		dFact *= dCtr;

	}

	return dFact;

} // end computeFact


int computeSquareFact( int dFact ){

	//declare local variables
	int dSqFact=1;

	dSqFact = dFact*dFact;

	return dSqFact;

}//end computeSquareFact  


int IsMultiple( int dMinPosIntFact, int dSqFact ){

	return dMinPosIntFact % dSqFact == 0;


}// end IsMultiple              



void printIntK( int dMinPosInt ){

	printf("\n%d\n", dMinPosInt);

}
