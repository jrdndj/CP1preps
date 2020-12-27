#include<stdio.h>
int check(int *s,int e,int curr);

int main(int argc, char const *argv[])
{
	int n;
	printf("Input length of array (must be >=5,<=25): ");
	scanf("%d", &n);
	if (n < 5 || n > 25)
	{
		printf("Invalid length give. Run program again");
		return 1;
	}
	int arr[n];
	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		printf("Input number in array \n");
		scanf("%d",&arr[i]);
		if (check(arr,arr[i],i) == 0){
			counter++;
		}
	}
	printf("Number of duplicates in array is %d \n", counter);
}

int check(int *s,int e,int curr)
{
	printf("%ld \n",sizeof(s));
	for (int i = 0; i < curr; ++i)
	{
	 if (s[i] == e)
	 	return 0;
	}
	return 1;
 }