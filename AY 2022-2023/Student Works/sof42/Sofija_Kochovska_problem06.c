#include<stdio.h>
int main(){
//declare variables
	int dNum;

//while loop to keep asking for input, while dNum is NOT equal to 0
		while(dNum!=999){

//prompt the user for input
			printf("\nInsert a one or two digit integer number: ");
			scanf("%d", &dNum);

//check whether dNum is a one or two digit integer
			if(dNum>99 && dNum!=999){	
				printf("\nProvide a VALID argument!");
			}//endif
			else if(dNum==999){
				printf("\nBYE!\n");
			}
			else{
				printf("The sought after number is: ");
				for(int i=0; i<3; i++){
					printf("%d", dNum);
				}//endfor
			}//endelse
			printf("\n");
		}//endwhile
return 0;
}//endmain