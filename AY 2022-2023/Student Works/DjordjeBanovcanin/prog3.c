#include<stdio.h>

/*int main(){

	int n;

	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i<=j){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}

	

	return 0;
}//end main*/

/*int main(){

	int res = 0;
	int n,m;
	scanf("%d%d", &n, &m);
	int stepen = m;
	
	while(stepen-- != 0){
		res += n;
	}
	printf("\n%d\n",res);
	

return 0;
}

*/

int main(){

	//int res = n;
	int n,m;
	int counter = 0;
	scanf("%d%d", &n, &m);
	
	
	while(n > 0){
		n-=m;
		counter++;
	}
	printf("\n%d\n",counter);
	

return 0;
}