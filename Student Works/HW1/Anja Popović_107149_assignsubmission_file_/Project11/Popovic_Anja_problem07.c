#include<stdio.h>
int main() {
	int num=0;
	
	while(num!= 999) {
		printf("\nPlease enter one or two-digit integer!\n");
		scanf("%d", &num);
		if(num != -999) {
			for (int i = 0; i < 3; i++) {
				printf("%d",num);
			}//endfor
		}//endif
	}//endwhile


	return 0;
}