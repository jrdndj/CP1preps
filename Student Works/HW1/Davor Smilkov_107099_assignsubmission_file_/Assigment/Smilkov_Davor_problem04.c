#include<stdio.h> 
 
int isPrime(int n) 
{ 
    int i,val=1; 
     
	for(i=2; i<n; i++) 
	{ 
		if(n%i == 0) 
		{ 
			val = 0; 
			break; 
		} 
	} 
	return val; 
} 
 
int main() 
{ 
	int j,n,count=0; 
	printf("Enter a number: "); 
	scanf("%d",&n); 
	printf("Prime numbers upto %d are: ",n); 
	for(j=2; j<=n; j++) 
	{ 
	    if(isPrime(j)) 
	    { 
	        printf("%d ",j); 
	        count++; 
	    } 
	} 
	printf("\nTotal primes found = %d",count); 
} 
