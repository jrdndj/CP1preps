/* enter a num between 1 and 10. 
the prog prints inverted right riangle 
with the input num as the base or max num
of asterisks
inp 5
output

for 0 to n ++
	for 0 to n-1 ++
	print " "
for n to n-(n-1) --
print "*"
print \n

*/
#include <stdio.h>
int main()
{

	int n, j, k;
	printf("\n Give me an int: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		for (j = 0 ; j < n-1  ; ++j)
		{
			printf(" ");
		}
		for (k = 0; k < n-(n-1) ; --k)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}