# include <stdio.h>
int main(){
	
int dFactor = 3;

for(; dFactor<=10; dFactor++){
	printf("%d X %d = %d\n", dFactor, dFactor, dFactor*dFactor);
}
printf("number of rows times number of columns:\n");



for (int i=1; i<=10; i++){
for (int j=1; j<=10; j++){
	printf("%2d ", i*j);
}
printf("\n");
}
printf("\n");
for (int i=1; i<=10; i++){
for (int j=10; j>0; j--){
	printf("%2d ", i*j);
}
printf("\n");
}
printf("\n");
for (int i=1; i<=10; i++){
for (int j=1; j<i; j++){
	printf("%2d ", i*j);
}
printf("\n");
}
printf("\n");
for (int i=1; i<=10; i++){
for (int j=10; j>i; j--){
	printf("%2d ", i*j);
}
printf("\n");
}





return 0;
}