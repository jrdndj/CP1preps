#include<stdio.h>
int Palindrome(int n);

int main(){
	//initializing the variable n
	int n;
	printf("Enter  the number ");
	scanf("%d",&n);
	Palindrome(n);
	if(n==Palindrome(n)){
	printf("the number is a palindrome");

	}
	else
	{
		printf("the number is not a palindrome");
	}
	return 0;
}
int Palindrome(int n){
	int rev=0;

	while(n>0){
	int d=n%10;  //printing the last digiit of the palindrome
	rev=rev*10+d;
	n/=10; 
	}
	return rev;
}