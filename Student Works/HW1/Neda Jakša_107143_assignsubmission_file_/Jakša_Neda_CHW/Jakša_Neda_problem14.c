//This code was written by Neda Jakša, unfortunately.
#include<stdio.h>
int main(){
	
	//defining variables
	int n=25;
	int dArray[n];
	int dCtr1,dCtr2=0;
	int dTemporary;
	int dDuplicates=0;
	
	//interactive input
	printf("Please enter the elements of your array. To exit, enter 999.\n");
	
	//*weird duplicative noises*
	for(dCtr1=0; dCtr1<n; dCtr1++){
		scanf("%d",&dArray[dCtr1]);
		if(dArray[dCtr1]==999){
			break;
		}//endif
		dCtr2++;
	}//endfor
	
	if(dCtr2<5){
		printf("You keep doing this to me. Breaking the rules. Don't do that dude. Cmon. I don't writing these error messages, you know.");
	}//endif
	else{
	
	for (dCtr1=0; dCtr1<n; dCtr1++) {     
        for (dCtr2=dCtr1; dCtr2<n-1; dCtr2++) {     
           if(dArray[dCtr1] > dArray[dCtr2]) {    
               dTemporary = dArray[dCtr1];    
               dArray[dCtr1] = dArray[dCtr2];    
               dArray[dCtr2] = dTemporary;    
           }   //endif  
        } //endfor    
    }//endfor 
    
    for (dCtr1=0; dCtr1<n-1; dCtr1++){
    	
    		if(dArray[dCtr1]==dArray[dCtr1+1]){
    			if(dArray[dCtr1]==0)
    			{
				}//endpointlessif
				else{
    			dDuplicates++;
    			}//endif
			}//endif	
	}//endfor
	printf("The total number of duplicates is %d\n",dDuplicates);
}//endelse
}//endmain
