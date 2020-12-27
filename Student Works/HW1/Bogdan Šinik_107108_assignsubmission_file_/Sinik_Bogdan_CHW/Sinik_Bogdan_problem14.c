#include <stdio.h>

void main()
{
    //declaring variables
    int dArr1[100], dArr2[100], dArr3[100], dSize,dMm=1,dCtr=0,i, j;
        //inserting elements in array
       printf("Input the size of the array: ");
       scanf("%d",&dSize);
       for(i=0;i<dSize;i++){
	      scanf("%d",&dArr1[i]);
	    }
        //copying to other array
		for(i=0;i<dSize; i++)
        {
		dArr2[i]=dArr1[i];
		dArr3[i]=0;
        }
    //marking duplicates
	for(i=0;i<dSize; i++){
		for(j=0;j<dSize;j++){
			if(dArr1[i]==dArr2[j]){
				dArr3[j]=dMm;
				dMm++;
				}
		}
		dMm=1;
    }		

   for(i=0; i<dSize; i++){
      if(dArr3[i]==2){
          dCtr++;
      }  
    }
      printf("The total number of duplicate elements is: %d \n", dCtr);
    
	  printf("\n\n");		
}