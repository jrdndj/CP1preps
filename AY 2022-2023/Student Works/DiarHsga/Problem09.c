#include<stdio.h>

int main(){
	//declare variables
	int dInput, dEven=0,dOdd=0;

	printf("\n input the size of array: ");
	scanf("%d", &dInput);

	int dAr[dInput];

	for(int i=0;i<dInput;i++ ){
		printf("\n Elements to be inserted in the array: ");
	    scanf("%d", &dAr[i]);
	}

	

	for(int i=0;i<dInput;i++){
		if(dAr[i]%2==0){
			dEven++;
		}else{
			dOdd++;
		}	
	}

	int dAr1[dEven];
	int dAr2[dOdd];

	for(int i=dInput-1;i>=0;i--){
		if(dAr[i]%2==0){
			dAr1[dEven]=dAr[dEven];
			dEven--;
		}else{
			dAr2[dOdd]=dAr[dOdd];
			dOdd--;
		}	
	}

	printf("\n Array of even elements: ");
	for(int i=0;i<dEven;i++){
		printf("%d ", dAr1[i]);
	}

	printf("\n Array of odd elements: ");
	for(int i=0;i<dOdd;i++){
		printf("%d ", dAr2[i]);
	}



	return 0; 
		
}//end main
