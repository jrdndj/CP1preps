#include <stdio.h>

int main() {
int n;
int m;

printf("Input an integer: ");
scanf("%d", &n);
printf("Input an integer: ");
scanf("%d", &m);

printf("\n this is for n = %d\n", n);
for (int i=0; i<n; i++){
for(int j=0; j<n; j++){
if (i>j) printf(" ");
else printf("*");
}
printf("\n");
}
printf("\n");

//how to do it with for?
int product;
printf("\nmultiplication: ");
for (int i = 1; i<=m; i++){
product+=n;
} 
printf("\nproduct is %d\n" , product);

int quotient = 0;
//6%2 = 6-2-2-2
int remainder;
printf("\ndivision: ");



for (int i = n-m; i>=0; i-=m){
quotient++;

}
printf("\nquotient is %d\n" , quotient);





return 0;

}
