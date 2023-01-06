#include <stdio.h>

int MagicSTDJohnson(int);

int main() {
	int AreYouMagic = 0;
	printf("Enter a number to check if it is a magic number: ");
	scanf("%d", &AreYouMagic);
	if(MagicSTDJohnson(AreYouMagic) == AreYouMagic)
		printf("It's a Magic Number\n");
	else
		printf("No, Kebab v Jufki :(\n");
	int ArrayLen = 0;
	printf("Input array length plz:");
	scanf("%d", &ArrayLen);
	int Array[ArrayLen];
	for(int i=0; i<ArrayLen; i++)
	{
		printf("Insert %d Number: ", i+1);
		scanf("%d", &Array[i]);
		if(MagicSTDJohnson(Array[i]) == Array[i])
			printf("It's a Magic Number\n");
		else
			printf("No, Kebab v Jufki :(\n");
	}
	int Len=0, Sum;
	printf("Enter another length to check if numbers given are magic\n");
	scanf("%d", &Len);
	int Arr[Len];
	for(int i=0; i<Len; i++)
	{
		printf("Insert %d Number: ", i+1);
		scanf("%d", &Arr[i]);
		Sum+=Arr[i];
	}
	if(MagicSTDJohnson(Sum) == Sum)
		printf("The array Sum is a Magic Number\n");
	else
		printf("No, it aint\n");
	return 0;
}

int MagicSTDJohnson(int n) {
	int SumOfNum = 0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		SumOfNum+=i;
	}
	return SumOfNum;

}