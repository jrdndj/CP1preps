#include <stdio.h>
int multiply(int dNum1, int dNum2){

	if(dNum2 == 0){
    	return 0;
    }
    else{
    	return(dNum1 + multiply(dNum1, dNum2-1));
    }

}
main(){
	int dNum1, dNum2, prod;
    printf("\n Input your numbers: \n");
	scanf("%d%d", &dNum1,&dNum2);
    
    prod=multiply(dNum1,dNum2);
    printf("\n The multiplication of two numbers is: %d \n", prod);
}
