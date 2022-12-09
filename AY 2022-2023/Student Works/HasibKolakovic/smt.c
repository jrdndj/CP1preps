#include <stdio.h>

int main() {

int a,b;
printf("\n Unesi prvi broj: \n ");
scanf("%d",&a);
printf("\n Unesi drugi broj: \n");
scanf("%d",&b);
if(a==1&&b==0){
	printf("Bazinga\n");
}
else if(a==0&&b==1){
	printf("Booyeah\n");
}
else if(a==b){
	printf("Alakazam\n");
}
else printf("greska\n");
return 1;
}
