#include <stdio.h>

int main(){

    //declare variables
    int dInput;
    int sum=0;
    int count=0;
    int result;


    do {
    	
	//prompt the user for an input
	printf("\nEnter a positive integer. Type '0' when you want to calculate an average. ");
	scanf("%d", &dInput);



        if (dInput < 0){
            printf("\nERROR, please enter a positive integer. ");
            continue;
        }//end if

	else if(dInput > 0){
            sum += dInput;
            count++;
        }//end else if

	else if(dInput==0){

            if (count == 0){
                printf("\nNO AVERAGE. \n");
            }//end if

	    else{
		result=sum/count;
                printf("\nAVERAGE IS %d. \n", result);
            }//end else

        }//end else if

    } while (dInput!=0);  //end do-while

    return 0;

}//end main
