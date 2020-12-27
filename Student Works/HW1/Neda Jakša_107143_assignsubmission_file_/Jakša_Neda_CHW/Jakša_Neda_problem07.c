//This code was written by Neda Jakša, unfortunately
#include<stdio.h>
int main(){
	
	//declaring variables
    int dN;

    printf("Please enter a one or two-digit number.\n If you want to exit the code, enter 999. \n");

    //*weird duplicative noises*
    while(scanf("%d", &dN)){

        if(dN==999){
            break;
        }//endif
        else if(dN < 1 || dN > 99){
            printf("Why are you doing this. All i ever do is write these error messages. You're doing it wrong on purpose, aren't you?\n");
        }//endelseif
        else{
            printf("%d%d%d\n", dN,dN,dN);
        }//endelse
        
    }//endwhile
    
}//endmain
