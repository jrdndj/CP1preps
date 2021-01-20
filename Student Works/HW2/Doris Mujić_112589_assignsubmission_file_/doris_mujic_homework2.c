/*
This program will find the minimum positive integer K such that K!
is a multiple of the square of N!
Made by: Doris Mujic-89201086
*/

#include<stdio.h>
#include<math.h>

//c skeleton
int main (){


	//declare variables
	int dUserInput,dCounter,dCounter2,dK,dN;
	double lfUserFact,lfKFact,lfFactSq,lfMod;

	//interactive input
	printf("\nPlease enter how many numbers you want to have: \n");
	scanf("%d",&dUserInput);

	//creating array where user chooses the size
	int darrMultiple[dUserInput];

	//check whether dUserInput is within the 1<dUserInput<200000 constraint
	if(dUserInput > 1 && dUserInput < 200000){
            //prompt the user to enter the numbers into an array
            printf("Please enter the integers\n");
        //scanning for the array elements
		for(dCounter=0; dCounter<dUserInput; dCounter++){
                //the problem here was the \n after %d and that added another line but its FIXED
             scanf("%d",&darrMultiple[dCounter]);
		}//end for

		//Creating the base for the factorial for dUserInput
		for(dCounter=0; dCounter<dUserInput; dCounter++){
        //check whether arrMultiple is within the 1<dInt<200000 constraint
		if(darrMultiple[dCounter]> 1 && darrMultiple[dCounter] < 200000){
        //setting the UserFact to double
		dN=darrMultiple[dCounter];
        lfUserFact=(double)(darrMultiple[dCounter]);


	//making factorial of dUserInput
	//going for the first element in the array but minus 1 and thus repeat the for loop until 0 but each time subtract 1(hence dCounter2--)
	for(dCounter2=darrMultiple[dCounter]-1; dCounter2>0; dCounter2--){
            //creating the type double for userfact
		lfUserFact=lfUserFact*(double)dCounter2;
	}//end of for loop

	//setting the square of the factorial
	lfFactSq=lfUserFact*lfUserFact;

	//making factorial for lfKFact
	for(dK=dN+1;dK<200000;dK++){
            int dfinal=dK;
            //transferring the KFact to a double
		lfKFact=(double)dK;

    //for loop in order to get KFact
		for(dCounter2=dK-1;dCounter2>0; dCounter2--){
            lfKFact=lfKFact*(double)dCounter2;
		}

		//lfmod-percentage sign but for the double
		lfMod=fmod(lfKFact,lfFactSq);
		if(lfMod==0){

			//printing K
		printf("The smallest integer value of K is %d\n",dfinal);
	break;
	}//end 3rd if

	}//end of 3rd loop

	}//end 2nd if

	//when dUserInput is not ok
	else{
		printf("Choose the number in the range next time\n");
	}//end else

	}//end 1st for

	}//end if
	//else
	else{
	printf("You need to choose in the range,how many times must I tell you this\n");
	}//end else

return 0;
}//end main
