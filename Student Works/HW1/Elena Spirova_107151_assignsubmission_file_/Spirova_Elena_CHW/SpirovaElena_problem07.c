/*Problem 07.c
Request the user to enter one or two-digit integers, then print that input but three times, until the
user enters -999. If the user enters ‘1’ then it should print “111”. If the user enters ‘8’ then it
should print ‘888’. The program will never stop asking for an input until the user enters 999.
 */
#include<stdio.h>

int main(){

//declare variables
int dInt,i;
while(dInt!=999){
//prompt user for input
printf("\nPlease enter a one, or two digit integer:\n");
scanf("%d",&dInt);
if(dInt<0 || dInt>99){
printf("Eror.");
}//endif
 else{
    printf("\n%d%d%d\n",dInt,dInt,dInt);
 }//end else
 }//endwhile

return 0;
}//endmain
