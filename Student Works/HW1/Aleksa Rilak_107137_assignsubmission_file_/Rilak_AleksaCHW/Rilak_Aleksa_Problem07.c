//Enter input 3 times, if 999 then exit.
#include<stdio.h>

int main() {

int n;
printf("\nPlease enter the number: \n");

while(n != 0) {
scanf("%d", &n);

if(n == 9 || n == -9) { //if we enter 9 or -9 we finish
    printf("%d%d%d\n",n,n,n);
    return 0;//finish the code
    }//end if
    printf("%d%d%d\n",n,n,n);//print out int 3 times 
} //endwhile

return 0;
}//endmain
