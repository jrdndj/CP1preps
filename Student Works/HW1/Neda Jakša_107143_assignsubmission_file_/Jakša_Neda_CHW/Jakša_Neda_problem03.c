//This code was written by Neda Jakša, unfortunately
#include<stdio.h>
int main(){
	
	//defining variables
	int n=6969;
	char dArray[n];
	double fSum=0;
	int dCtr;
	double fAverage;
	
	//interactive input
	printf("Please enter the values of your array. Don't enter negative numbers! When you want to exit, enter 0\n");
	
	for(dCtr=0; dCtr<n; dCtr++){
		scanf("%d",&dArray[dCtr]);
		if(dArray[dCtr]==0){
			break;
		}
		if(dArray[dCtr]<0){
			printf("You have entered a negative number. I've told you not to do that. This is why we can't have nice things. Try again. \n");
		}
	}//endfor
	
	//*weird addition noises*
	for(dCtr=0; dCtr<n; dCtr++){
		if(dArray[dCtr]>0){
			fSum=fSum+dArray[dCtr];
		}
		if(dArray[dCtr]==0){
			break;
		}
	}
	
	//*weirdly average noises*
	fAverage=fSum/dCtr;
	printf("The average of all of your numbers is %f",fAverage);
	
}//endmain
