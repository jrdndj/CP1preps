#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i =0; i<n; i++){
		for(int j=0; j<=i; j++){
		printf(" ");
		}
		for(int k=n;k<n+(n-i); ++k){
		printf("*");
		}	
		
	printf("\n");
	}
return 0;
}
