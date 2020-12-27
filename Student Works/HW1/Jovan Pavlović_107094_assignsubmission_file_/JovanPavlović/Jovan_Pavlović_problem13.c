#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Input size of the array: ");
	scanf("%d", &n);
	int arr[n];
	int e = 0; // even numbers counter
	int o = 0; // odd numbers counter
	for (int i = 0; i < n; ++i)
	{
		printf("Input number in array\n");
		scanf("%d",&arr[i]);
		if (arr[i] % 2 == 0)
			e++;
		else
			o++;
	}

	int even[e];
	int odd[o];
	int Ie = 0;
	int Io = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0){
			even[Ie] = arr[i];
			Ie++;
		}
		else{
			odd[Io] = arr[i];
			Io++;
		}
	}
	printf("Even numbers are \n");
	for (int i = 0; i < e; ++i)
	{
		printf("%d ",even[i] );
	}
	printf("\n Odd numbers are \n");
	for (int i = 0; i < o; ++i)
	{
		printf("%d ",odd[i] );
	}
	return 0;
}