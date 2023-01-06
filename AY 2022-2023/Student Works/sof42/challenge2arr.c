#include<stdio.h>
int main(){
	int dArr[10], a, dCtr=0, temp=0;
	printf("\n Please enter 10 values in this array");
	while(dCtr<10){
		printf("\n Enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		dCtr++;
	}
		//print array
		printf("Elements of original array: \n");    
    	for (int i = 0; i < 10; i++) {     
        printf("%d \n", dArr[i]);
      
    }    

    //sort the array
    for (int i = 0; i < 10; i++) {     
        for (int j = i+1; j < 10; j++) {     
           if(dArr[i] > dArr[j]) {    
               temp = dArr[i];    
               dArr[i] = dArr[j];    
               dArr[j] = temp;    
           }     
        }     
    }     

    printf("\n");    
        
    //elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < 10; i++) {     
        printf("%d \n", dArr[i]);    
    }    
    return 0;    
	}
	