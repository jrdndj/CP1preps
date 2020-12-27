#include<stdio.h>
int main() {
    //declaration
    int n; 
    double avg;
    int array[100];
    int total;
    int len = sizeof(array)/sizeof(array[0]);
    printf("Please enter positive integers, when you would like to stop the proccess you can type 0.\n");
    scanf("%d", n);

    while (n>0)
    {
        if(n>0)  scanf("%d", n);
        //input in array
        for(int i=0; i<len; i++){
            scanf("%d", &array[i]);
        }
        //find the average
        for(int i=0; i<len; i++){
            total += array[i];
        }
        avg = total/len;
    
        if(n<0)  printf("ERROR! Please insert a positive number\n");
    }//end while
    
    

    if(n==0){
        printf("This is the end of the program, the average of the integers is: %f", avg);
    }

   
    return 0;
}