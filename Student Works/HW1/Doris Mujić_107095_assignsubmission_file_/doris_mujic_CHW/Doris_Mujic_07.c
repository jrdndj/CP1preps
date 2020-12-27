#include<stdio.h>


int main(){
    
	int sInput;
	printf("\nPlease enter the numbers that have 1-2digits and are integers\n");
	printf("\nType 999 or-999 when you want the program to stop\n");
	
	while(scanf("%d", &sInput)){
		if(sInput == -999 || sInput==999){
			break;
		}
		else if(sInput<1 || sInput >99){
			printf("\nEnter only positive integers that have 2 digits, we discussed this");
		}
		else{
		printf("%d%d%d\n",sInput,sInput,sInput);
		}
		}
return 0;
}