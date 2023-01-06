#include <stdio.h>
int main(){
	int dNum1, dDigit1, dDigit2;


     printf("\n Please enter a number: ");
     scanf("%d", &dNum1);

    dDigit1 = dNum1/10;

    dDigit2 = dNum1%10;

    if( dDigit1 && !dDigit2){

    printf("\n Bazinga! \n");
    }
    else if ( !dDigit1 && dDigit2){
	printf("\n Booyeah! \n");
    }
    else printf("\n Alkazam! \n");
    return 0;


}
