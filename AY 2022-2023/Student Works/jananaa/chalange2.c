#include <stdio.h>
int main(){
	int i, j, k;
	int values[10];
	printf("Enter 10 integers: ");

	// taking input and storing it in an array
	for(i = 0; i < 10; ++i) {
		scanf("%d", &values[i]);
	}

	for (i = 0; i < 10; ++i)
	{
		for (j = i+1; j < 10; ++j)
		{
			if (values[i]>values[j])
			{
				k = values[i];
				values[i] = values[j];
				values [j] = k;
			}
		}
	}

	printf("")
}