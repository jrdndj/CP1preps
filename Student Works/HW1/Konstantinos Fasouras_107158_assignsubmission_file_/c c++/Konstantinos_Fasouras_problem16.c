#include<stdio.h>
int NthPrime (int input){
    //declaration
    
    int n, flag=0, count=0;
    
    for(int i=2; i>0; i++){
        flag=0;
        for(int j=2; j<i; j++){
            if(i%j==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) count++;
        if(count==input){
            return i;
            break;
        }
    
    }

    return 0;
}
int main(){
    int num;
    printf("Enter the Nth number:\n");
    scanf("%d", &num);
    
    printf("%d",NthPrime(num));
    return 0;;
}