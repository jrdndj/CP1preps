#include<stdio.h>
main() {
	int dNumb;
	int i;
	int j;
	scanf("%d",&dNumb);
	for (i=1;i<=dNumb-1;i++){
		for (j=1;j<=i;j++) { printf("*");}
		printf("\n");}
		
		for (i=dNumb;i>0;i--){
			for (j=i;j>0;j--) {printf("*");}
			
					printf("\n");}
					return 0;
		}
	
