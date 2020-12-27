#include<stdio.h>


int main(){

	int arr[1229]={0};
	int a;
	int isPrime;
	int i;
	int n;
	
	
	//checking to see whether number is prime 
	for(n=1; n<9973; n++){
	isPrime=1;
	for(i=2; i<n; i++){
	if(n%i==0){
	isPrime=0;
	break;
	}
	}
	//if it is count how many numbers there are
	if(isPrime){
	arr[n]=n;
	}
	}
	
	printf("\nThe 1001st prime number is &d",arr[1001]);
return 0;
}