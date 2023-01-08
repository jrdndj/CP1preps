#include <stdio.h>

int nPower(int n, int p);

int main(){
	int a, b, c, result;
	scanf("%d %d %d", &a, &b,&c);

	result = nPower(2,a) + nPower(3,b) - nPower(4,c);
	printf("%d\n",nPower(2,a));
	printf("%d\n",result );


	return 0;
}

int nPower(int n, int p){
	int result = 1;
	if (p==0){
		result = 1;
	}
	else{
		for (int i = 0; i < p; ++i)
		{
			result *= n;
		};
	}
	return result;
}