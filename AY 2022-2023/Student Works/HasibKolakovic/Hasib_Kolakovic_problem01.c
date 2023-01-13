#include <stdio.h>
#include <string.h> // for string operations such as strlen

int main() {
printf("Enter your n\n");
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
	for(int j=0;j<i;j++){
		printf(" ");
	}
	for(int j=0;j<n-i;j++){
		printf("*");
	}
	printf("\n");
}




return 0;
}