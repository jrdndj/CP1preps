//This code was written by Neda Jakša, unfortunately
/*
REMARK: I've come to realise if my K starts from 0, and my N is, for example, 4, my K will also result to 4.
So I've made K look at numbers from N onwards.
Hope that makes sense. I'm not very good at explaining.
*/
#include<stdio.h>
#include<math.h>
int main(){
	
	//declaring variables
	int dN,dK,dT;
	double lfNFact, lfKFact, lfNFinal;
	
	//counters
	int dCtr,dCtr2;
	
	double lfmod; //i hate that i just now find out about this goddamit
	
	//user input
	printf("Please enter how many elements will be in your array\n");
	scanf("%d",&dT);
	
	int dArray[dT];
	
	//checking array size limit
	if(dT>1 && dT<200000){
		
		printf("Enter the elements of your array!\n");
		
		//entering values in the array
		for(dCtr=0;dCtr<dT;dCtr++){
			scanf("%d",&dArray[dCtr]);
		}//endfor
		
		//big for loop
		for(dCtr=0;dCtr<dT;dCtr++){
			
			//checking size of element
			if(dArray[dCtr]>1 && dArray[dCtr]<200000){
				
				//i did casting just in case
				dN=dArray[dCtr];
				lfNFact=(double)(dArray[dCtr]);
				
				//factorials
				for(dCtr2=dArray[dCtr]-1;dCtr2>0;dCtr2--){
					lfNFact=lfNFact*(double)dCtr2;
				}//endfor
				
				lfNFinal=lfNFact*lfNFact;
				
				//factiorials again.
				for(dK=dN+1;dK<200000;dK++){
				int final=dK;	
				lfKFact=(double)dK;
				
				
				for(dCtr2=dK-1;dCtr2>0;dCtr2--){
					lfKFact=lfKFact*(double)dCtr2;
				}//endfor
				
				//put in final because why not, adds a little bit of spice, don't ya think
				lfmod=fmod(lfKFact,lfNFinal);
				if(lfmod==0){
					printf("%d\n",final);
					break;
				}//endif
				
			}//endfor
				
			}//endif
			else{
				printf("Please. Just please. Work with me here. Don't do this.\n");
			}//endelse
		}//endfor
	}//endif 
	else {
		printf("Don't break the rules please.\n");
		//ironic, huh lol
	}//endelse
}//endmain
