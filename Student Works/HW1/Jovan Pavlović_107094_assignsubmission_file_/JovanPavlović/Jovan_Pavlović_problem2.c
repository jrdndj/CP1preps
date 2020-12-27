#include <stdio.h>
int main(int argc, char const *argv[])
{
	int dN;
	while (1){
		printf("N = ");
		scanf("%d",&dN);
		for (int i = 0; i <= dN; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				if (j = i){
					printf("* \n");
				}
				else{
					printf("*");
				}
			}
		}
	}
	return 0;
}