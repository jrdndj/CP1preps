//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
int main(){
	
	//declaring variables
	int dN;
	int dCtr1, dCtr2;
	
	//interactive input
    printf("Please enter your desired number of rows \n");
    scanf("%d", &dN);
	
	//*weird star shape noises*
	for(dCtr1=0; dCtr1<dN; dCtr1++)
    {
		 for(dCtr2=0; dCtr2<=dCtr1; dCtr2++)
    		{
            printf("*");
        	}//endfor
        	
        for(dCtr2=dCtr1; dCtr2<dN; dCtr2++)
        	{
            	printf(" ");
        	}//endfor
        
        printf("\n");
    }//endfor
    for(dCtr1=1; dCtr1<dN; dCtr1++)
    {
  		for(dCtr2=dCtr1; dCtr2<dN; dCtr2++)
    		{
            printf("*");
        	}//endfor
        
        for(dCtr2=0; dCtr2<=dCtr1; dCtr2++)
        	{
            	printf(" ");
        	}//endfor
      
        printf("\n");
    }//endfor
}//endmain
