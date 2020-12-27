#include<stdio.h>

int main(){
    //declaring variable
    int dNum;

    //ask the user for input
    printf("Input an integer(1-10) for your Multiplication table: ");
    scanf("%d", &dNum);

    //if the int is not 1-10 print error
    if(dNum<1 || dNum>10) {
        printf("Error\n");
    }//end if

    else {

        //for loop for rows
        for(int dCtr1=0; dCtr1<=10;dCtr1++){
            //printing the side 
            if(dCtr1 == 0){
                printf("x\t");
            }//end if
            else{
                printf("%d\t", dCtr1);
            }//end else

            //printing the table
            for(int dCtr2=1; dCtr2<=dNum; dCtr2++){
                if(dCtr1 == 0){
                    printf("%d\t", dCtr2);
                }//end if
                else{
                    printf("%d\t", dCtr1*dCtr2);
                }//end else
            }//end for
            printf("\n");
        }//end outer for

    }//end outer else

    return 0;

}//end main
