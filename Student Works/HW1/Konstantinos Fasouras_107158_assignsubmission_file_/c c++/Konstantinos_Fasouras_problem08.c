#include<stdio.h>
int main(){
//declaration
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    //printint of original array
    printf("The array is: ");
    for(int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    //input a number
    printf("\nInput  number between 1-10: \n");
    scanf("%d", &n);
    //printing converting array
    printf("\nThe converted array is:  ");
    for(int i=0; i<10; i ++){
        array[i] *= n;
        printf("%d ", array[i]);
    }   


    return 0;
}