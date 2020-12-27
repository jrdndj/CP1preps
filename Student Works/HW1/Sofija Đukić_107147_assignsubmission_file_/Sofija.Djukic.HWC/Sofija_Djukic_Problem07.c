#include<stdio.h>
main() {
	int dNumb;
	int dNumb2;
	scanf("%d",&dNumb);
while (dNumb!=-999 && dNumb!=999){
	if(dNumb<100 && dNumb>=0) {printf("%d%d%d", dNumb, dNumb, dNumb);}
	else if(dNumb>-100 && dNumb<0) {dNumb2=abs(dNumb);
	printf("%d%d%d", dNumb2, dNumb2, dNumb2);}
	else {printf("\n Error, enter one or two digit number\n");}
	scanf("%d",&dNumb);
	}	
	if (dNumb!=-999 || dNumb!=999) {printf("\n The game has ended, thanks for playing!\n");}
	
	
return 0;}
