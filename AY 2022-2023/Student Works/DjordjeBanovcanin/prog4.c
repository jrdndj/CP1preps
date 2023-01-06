#include<stdio.h>

int main(){
/*
	int n = 1;

	for(; n <= 10; n++){
		printf("\n %d x %d = %d \n", n, n, n*n);
	}

************
	int n = 1, m;

	for(; n <= 10; n++){
		for(m = 1; m <= 10; m++){
			printf(" %d ", n*m);
		}
		printf("\n");
	}


**************	


	int arr[10], br = 0;
	for(int i = 0; i < 10; i++){
		printf("\nEnter a number in slot %d: ", i);
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){
			br++;
		}
	}
	printf("\nThere are %d even numbers in our array", br);
**************
*/


	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int temp;
	int n = sizeof(arr[10]);
	for(int i=0;i < n - 1;i++){
    	for(int j = i+1;j < n - 1; j++) { 
        	if(arr[i]>arr[j]){
            	temp=arr[i];
            	arr[i]=arr[j];
            	arr[j]=temp;
         	}
      	}
    }


    for (int i = 0; i < n / 2; i++){
    	printf("\n%d ", arr[i]); 
    	for (int j = n ; j >= n / 2; j--){
      		printf("\n%d ", arr[j]);
    	}
    } 
        
 
    





	return 0;
}