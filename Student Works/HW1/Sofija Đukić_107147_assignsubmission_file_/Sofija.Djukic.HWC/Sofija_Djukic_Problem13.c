#include<stdio.h>
main() {
int arr[10];
int i;
int counteven=0;
int countodd=0;
int counteven2=0;
int countodd2=0;
for (i=0;i<10;i++) {
	scanf("%d",&arr[i]);}
	
for (i=0;i<10;i++) {
	if (arr[i]%2==0) {counteven++;}
	else {countodd++;}
}
int arreven[counteven];
int arrodd[countodd];

for (i=0;i<10;i++) {
	if (arr[i]%2==0) {arreven[counteven2]=arr[i];counteven2++;}
	else {arrodd[countodd2]=arr[i];countodd2++;}}
for (i=0;i<counteven;i++) {printf("%d, ",arreven[i]);}
printf("\n");
for (i=0;i<countodd;i++) {printf("%d, ",arrodd[i]);}
return 0;
}