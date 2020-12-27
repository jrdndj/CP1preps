#include<stdio.h>
#include<math.h>
int main(){
    //declare 
    
    float number, counter=0, suming = 0,average;
    

    //checking the stopping condition
    if(number<0){
        printf("\n ERROR, please try again: \n");
        scanf("%f", &number);
    }

    // input
    while(number != 0){
        printf("\n Hello User, please insert one POSITIVE inteer: \n");
        scanf("%f", &number);
            if(number<0){
            printf("\n ERROR, please try again: \n");
            scanf("%f", &number);
        }
        suming += number;
        counter ++;
    }

    //calculating average
    average = suming / counter;
    if(average != 0){
    printf("Average = %f\n", suming/((float)counter - 1));;
    }else{
        printf("NO AVERAGE!");
    }


    return 0;
}