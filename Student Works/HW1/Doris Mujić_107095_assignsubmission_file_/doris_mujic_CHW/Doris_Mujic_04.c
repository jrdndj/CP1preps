#include<stdio.h>

int main(){
  	
	//declare and initialize variables
	int a;
	int isPrime;
	int i;
	int n;
	int count=0;

	//user input
	printf("\nUp until which number do you want to go\n");
	scanf("%d",&a);

	//checking to see whether number is prime 
	for(n=1; n<a; n++){
	isPrime=1;
	for(i=2; i<n; i++){
	if(n%i==0){
	isPrime=0;
	break;
	}
	}
	//if it is count how many numbers there are
	if(isPrime){
	count++;
	}
	}
	//printing the results
	printf("There are %d prime numbers before %d ",count,a);
return 0;
}