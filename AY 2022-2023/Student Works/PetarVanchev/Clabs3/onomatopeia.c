#include <stdio.h>
#include <string.h>

int main (){
	char a[14] = "onomatopoeiaja";
	int num;
	int n = strlen(a);
	scanf("%d", &num);
	for(int i=0;i<n-(num-1);i++){
		for(int j=i;j<(i+num);j++){
			printf("%c", a[j]);
		}
		printf("\n");
	}
	printf("%d\n", n-(num-1));
}
