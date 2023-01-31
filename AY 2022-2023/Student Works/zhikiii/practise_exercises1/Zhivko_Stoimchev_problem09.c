#include<stdio.h>
#include<stdlib.h>

int main(){
    int dNumbers;
    printf("Enter number of numbers you want to enter: ");
    scanf("%d", &dNumbers);
    
    int *dArray;
    dArray=malloc(sizeof(int)*dNumbers);
    
    for(int i=0; i<dNumbers; i++)
        scanf(" %d", &dArray[i]);

    int *dEvenArray=malloc(sizeof(int)*dNumbers);
    int *dOddArray=malloc(sizeof(int)*dNumbers);
    int dEvenIndex=0;
    int dOddIndex=0;

    for(int i = 0; i < dNumbers; i++){
        if(dArray[i]%2==0){
            dEvenArray[dEvenIndex]=dArray[i];
            dEvenIndex++;
            continue;
        }
        else{
            dOddArray[dOddIndex]=dArray[i];
            dOddIndex++;
        }
    }

    printf("Elements of the even array: ");
    for(int i=0; dEvenArray[i]!='\0'; i++)
        printf("%d ", dEvenArray[i]);
    
    printf("\n");

    printf("Elements of the odd array: ");
    for(int i=0; dOddArray[i]!='\0'; i++)
        printf("%d ", dOddArray[i]);
    printf("\n");
    return 0;
}