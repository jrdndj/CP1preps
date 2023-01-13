#include<stdio.h>

int main(){
    int dInput=0;
    while(dInput!=999){
        printf("Enter one or two-digit integer: ");
        scanf("%d", &dInput);
        if(dInput>99)
            continue;
        if(dInput==999)
            continue;
        printf("%d%d%d\n",dInput, dInput, dInput);
    }
    return 0;
}