#include<stdio.h>
int main(){
//declare variables
	int dNum;

//prompt the user for input
	printf("\nInsert the maximum value of asterixes: ");
	scanf("%d", &dNum);

//if user inserts a value less than, or equal to 0, the program outputs an error message
	if(dNum<=0){
		printf("ERROR! Invalid value!\n");
	}//endif

//else printing the asterixes for every value of dNum, getting the desired output
	else{
	for(int i=1;i<=dNum; i++){//for
		printf("\n N=%d\n", i);
		for (int i = 0; i<=dNum; i++ ){//for1
			for (int j = 0; j <=dNum; j++){//for2

				if(j>i){
					printf("*");
				}//endif

				else{
					printf(" ");
				}//endelse

			}//endfor2
			printf("\n");
		}//endfor1
	}//endfor
}//endelse
	return 0;
}//endmain