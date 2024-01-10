#include <stdio.h>

int main(){
	//declare var
	int dSum=0, dNum;
	
	//loop while so no negative nums can be entered and program doesnt break
	while(1){
		//take user input
		printf("Enter a number.\n");
		scanf("%d",&dNum);
		
		//if 0 is entered and dsum is still 0 no elements have been entered so NO AVG
		if (dSum == 0 && dNum == 0)
		{
			printf("NO AVERAGE\n");
			return 0;
		}
		//if 0 is entered stop the program
		if(dNum==0){
			break;
		}

		if (dNum<0)
		{
			printf("ERROR!\n");
			continue;//continue if negative
		}
		else{
			dSum+=dNum;//sum numbers if everythings fine
		}

	}//endwhile
	//cast dSum to float to get average and .2f 2 decimals
	printf("%.2f is average of the numbers you provided.\n", (float)dSum/2);

	return 0;
}//endmain
