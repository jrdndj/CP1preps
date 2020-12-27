#include<stdio.h>
main() {
	int dNumb;
	int i;
	int j;

		scanf("%d",&dNumb);
		for(i=1;i<=dNumb;i++){
				int dDev=0;
		for(j=1;j<=dNumb;j++){
			if (i%j==0) {dDev++;}}
			if (dDev==2) {printf("\n %d is a prime number", i);}
			}
	
		if (dNumb==1) {printf("\n %d is a prime number", dNumb);}
		
		return 0;
	}
