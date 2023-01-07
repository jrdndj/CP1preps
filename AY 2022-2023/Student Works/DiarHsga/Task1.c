#include <stdio.h>

int main()
{
    //variable declaration
    char cInput, cInput1='y', cInput2='n';
    int dLaststep=0, dInput;
    printf("You are currently on floor G .\n");
    
    while(cInput1=='y'){//startwhile
    printf("\nIn which floor do you want to go to?\n");
    scanf("\n%c", &cInput);
    if(cInput=='G'||cInput=='1'||cInput=='2'||cInput=='3'||cInput=='4'||cInput=='5'){
    if(cInput=='G'){
        int dInput=0;
    } else{
        int dInput=cInput-'0';
    } 
    printf("Here you are %d",dInput);
    if(dLaststep>dInput){
        while(dLaststep>dInput && cInput2=='n'){
            dLaststep--;
            if(dLaststep=='0'){
                printf("You are now on the ground floor");
            }else{
            printf("You are now on floor %d",dLaststep);
            }
            if(dLaststep==dInput){
            break;
            }
            printf("\nDo you want to stop(y or n)?\n");
            scanf("\n%c", &cInput2);
        }
    
    }else if(dLaststep<dInput){
        while(dLaststep<dInput && cInput2=='n'){
        dLaststep++;
        printf("You are now on floor %d",dLaststep);
        printf("Here you are %d",dInput);
        if(dLaststep == dInput){
            break;
        }
        printf("\nDo you want to stop(y or n)?\n");
        scanf("\n%c", &cInput2);
    }
        
    }
    else{
        printf("Okay,we'll stay\n");
    }
    if(dInput==0){
        cInput='G';
    }else{
    cInput=(char)dInput;
    }
    printf("\nWe're here, so now what?\n ");
    printf("\nDo you wish to choose another floor(y or n)?\n");
    scanf("\n%c", &cInput1);
    }else{
        printf("\nSorry your input was not correct!");
        printf("\nPlease try again!\n");
    }
    }
    printf("Thank you for choosing our elevator and have a good day!");
}
