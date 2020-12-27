#include<stdio.h>
int main(){
    //declaration
    int array[10];
    //input integers
    printf("Please enter 10 integers:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    //printing the array
    printf("The array is: ");
    for (int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    //create even array
    printf("\nThe even array is: \n");
    for (int i=0; i<10; i++){
        if(array[i]%2==0){
            printf("%d ", array[i]);
        }
    }
    //create odd array
    printf("\nThe odd array is: \n");
    for (int i=0; i<10; i++){
        if(array[i]%2==1){
            printf("%d ", array[i]);
        }
    }

    return 0;
}