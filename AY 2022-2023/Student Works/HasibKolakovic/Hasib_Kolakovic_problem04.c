#include <stdio.h>
#include <string.h> // for string operations such as strlen

int main() {
printf("Number?\n");
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
	for(int j=0;j<i;j++){
		printf("*");
	}
	printf("\n");
}
for(int i=n-1;i>=0;i--){
	for(int j=0;j<i;j++){
		printf("*");
	}
	printf("\n");
}

return 0;
}