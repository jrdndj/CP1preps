#include<stdio.h>
main() {
printf("\nPlease enter a number\n");
int dNumb;
scanf("%d",&dNumb);
int i;
int j;
int k;
	for (i=1;i<=dNumb;i++) {
			for (j=1;j<i;j++) {printf(" ");}
			for (k=i;k<=dNumb;k++) {printf("*");}
			printf("\n");}

	
	
return 0;
}
