#include <stdio.h>

void nMagic(int n);

int main(){
	int n;
	printf("Please enter a number.\n");
	scanf("%d",&n);
	nMagic(n);

	return 0;
}

void nMagic(int n){
	int res = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n%i==0){
			res+=i;
		}
	}
	if(res == n){
		printf("Number %d is magic.\n",n);
	}
	else{
		printf("%d is not magic.\n",n);
	}
}