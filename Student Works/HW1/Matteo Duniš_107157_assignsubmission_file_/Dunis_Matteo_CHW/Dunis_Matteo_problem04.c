#include <stdio.h> 
int main() {
	int n, b, i, m,counter = 0;

	printf("Enter the number upto which do you want to print prime numbers \n");
	scanf_s("%d", &m);
	for (b = 2;b <= m;b++){
		i = 2;
		while (b % i != 0){
			i++;

			
		}
		if (i == b)	
		{
			counter++;
			
		}
	}
	printf("The number of prime numbers less than or equal %d is %d\n", m, counter);
	return 0;
}