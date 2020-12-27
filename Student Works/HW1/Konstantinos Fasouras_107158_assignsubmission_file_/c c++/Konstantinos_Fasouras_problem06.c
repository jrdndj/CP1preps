#include<stdio.h>

int main(){
    //declaration
    int array[10];
    int min = array[0];
    //input integers
    printf("Please enter 10 integers:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    //printing the array
    printf("The array is: ");
    for (int i=0; i<10; i++){
        printf("%d  ", array[i]);
    }
    //finding the smallest integer
    for (int i = 0; i < 10; i++){
        if(min>array[i]){
            min=array[i];
        }   
    }
    printf("\nThe smallest integer is %d.", min);
    

    return 0;
}