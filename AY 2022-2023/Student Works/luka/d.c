#include <stdio.h>

int main(){
	int dFactor, dFactor2;
	
	for (dFactor = 1; dFactor<= 10; dFactor++){
		
		for (dFactor2 = 1; dFactor2 <= dFactor; dFactor2++)
		{
			printf(" %d ",dFactor*dFactor2);

		}
		printf("\n");
	}
	

	

	return 0;
}
