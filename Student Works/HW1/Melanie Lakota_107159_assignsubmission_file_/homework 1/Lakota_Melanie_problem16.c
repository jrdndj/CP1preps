/*
This program was written by Melanie Lakota on 15th December 2020. I am not 100% sure it works perfectly, but here is my idea (also Google confused me, it's not telling me exactly what is the 1001st prime number so...?)
*/
#include <stdio.h>


int main()
{

    //declare variables
    int ctr = 0;
    int count = 2; //the first prime number
    int num = 3;
    int div = 2;  
    
    //write formula for how we're going to find prime numbers
    while(count <= 1001){
        while(div < num){  
            if(num%div == 0){ 
            ctr += 1; 
            }
            div += 1;
        }
        if(ctr == 0){ 
            count += 1;
        }
        num += 1;
        ctr=0;
        div=2;
    }   
    printf("%d",num);
    
    return 0;
}