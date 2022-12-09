#include <stdio.h>
int main()
{
	int arr[10],a;
	for (int i = 0; i < 10; ++i)
	{
		printf("Enter number in array \n");
		scanf("%d",&arr[i]);

	}
	for (int i = 1; i < 10; ++i)
	{
		            for (int j = i + 1; j < 10; ++j)
            {
                if (arr[i] > arr[j]) 
                {
                    a =  arr[i];
                   arr[i] = arr[j];
                    arr[j] = a;
                }
			}
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n", arr[i]);
		
	}
	return 0;
}