#include <stdio.h>
#include <math.h>
void PointToME(int *pInt, char *pChar) {
	if(*pChar = 's')
		printf("%d\n",*pInt*(*pInt));
	else if(*pChar == '+')
		printf("%d\n", *pInt+1);
	else
	{
		printf("'e' change\n");
	}
}
int main() {
	char Input;
	int a1 = 3;
	scanf("%c", &Input);
	PointToME(&a1, &Input);
	return 0;
}