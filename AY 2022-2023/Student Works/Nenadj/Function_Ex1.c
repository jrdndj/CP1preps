#include <stdio.h>

int PowerJeremyFragrance( int n, int p);

int main() {
	// 1.
	int nNumber, pPower;
	printf("Enter a number:");
	scanf("%d", &nNumber);
	printf("On what power:");
	scanf("%d", &pPower);
	int rez = PowerJeremyFragrance(nNumber,pPower);
	printf("%d on the power %d is %d\n", nNumber, pPower, rez);
	// 2.
	int aNum, bNum, cNum;
	printf("2 to the power of what: ");
	scanf("%d", &aNum);
	printf("3 to the power of what: ");
	scanf("%d", &bNum);
	printf("4 to the power of what: ");
	scanf("%d", &cNum);
	int Sygma = PowerJeremyFragrance(2,aNum)+PowerJeremyFragrance(3,bNum)-PowerJeremyFragrance(4,cNum);
	printf("2^%d+3^%d-4^%d=%d\n", aNum, bNum, cNum, Sygma);
	return 0;
}

int PowerJeremyFragrance(int n, int p) {
	int rez = 1;
	if(p == 0)
		return 1;
	else
	{
		while(p>0)
		{
			rez *= n;
			p--;
		}
		return rez;
	}
}