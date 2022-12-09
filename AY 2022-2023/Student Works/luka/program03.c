#include <stdio.h>


int main(){



	printf("Enter a number: \n");
	
	int dNum1,dNum2;
	scanf("%d",&dNum1);
	dNum2=dNum1;

	for(int i=1;i<=dNum1;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=dNum2;k++)  
       {  
           printf("*");  
       }  
       dNum2--;  
     
      printf("\n");  
    }  



	return 0;
}
