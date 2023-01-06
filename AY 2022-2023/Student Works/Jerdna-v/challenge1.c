#include <stdio.h>

int main() {
	int dArr[10],dArr1[5],dArr2[5];
	for (int i= 0; i < 10; ++i)
	{
		if (i<5) printf("Enter even number %d: ", i+1);
		if (i>=5) printf("Enter odd number %d: ", i+1);
		scanf("%d", &dArr[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		dArr1[i]=dArr[i];
		dArr2[i]=dArr[i+5];
	}
	for (int i = 0; i < 5; ++i)
	{
		int dTemp=dArr[i];
		int dInd=i;
		for (int j = i; j < 5; ++j)
		{
			if (dTemp>dArr[j]){
				dTemp=dArr[j];
				dInd=j;
			}
		}
		int dtemp=dArr[i];
		dArr[i]=dTemp;
		dArr[dInd]=dtemp;
	}
		for (int i = 0; i < 5; ++i)
	{
		int dTemp=dArr[i];
		int dInd=i;
		for (int j = i; j < 5; ++j)
		{
			if (dTemp>dArr[j]){
				dTemp=dArr[j];
				dInd=j;
			}
		}
		int dtemp=dArr[i];
		dArr[i]=dTemp;
		dArr[dInd]=dtemp;
		
	}
	for (int i = 0; i < 5; ++i)
	{
		dArr[i]=dArr1[i];
		dArr[i+5]=dArr2[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("Element %d: %d\n", i+1, dArr[i]);
	}

	return 0;
}