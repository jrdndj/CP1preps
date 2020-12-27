#include<stdio.h>
#include<math.h>


int main(){
	
	int math [100][100];
	int math1 [100][100];
	int result[100][100];
	int R;
	int C;

	printf("\n Enter two positive numbers R and C: ");
	scanf("%d",&R);
	scanf("%d",&C);
	
	printf("\nPlease enter elements\n");

	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
		scanf("%d",&math[i][j]);
	}
	}
	printf("\nFirst matrix:\n");
	for(int i=0; i<R; ++i){
	for(int j=0; j<C; ++j){
		printf("%d  ",math[i][j]);
	}
	printf("\n");
	}

	printf("\nPlease enter elements of the second matrix\n");
	int R2=C;
	int C2=R;
	
	for(int i=0; i<R2; i++){
		for(int j=0; j<C2; j++){
		scanf("%d",&math1[i][j]);
	}
	}
	
	printf("\nSecond matrix:\n");
	for(int i=0; i<R2; ++i){
	for(int j=0; j<C2; ++j){
		printf("%d\t",math1[i][j]);
	}
	printf("\n");
	}
	
	for(int i=0; i<R; ++i){
		for(int j=0; j<C2; ++j){
		result[i][j]=0;
	}
	}

	for (int i = 0; i < R; ++i) {
      for (int j = 0; j < C2; ++j) {
         for (int k = 0; k < C; ++k) {
            result[i][j] += math[i][k] * math1[k][j];
         }
      }
}
	printf("\nResult of multiplication of matrices:\n");

	for(int i=0; i<R; ++i){
	for(int j=0; j<C2; ++j){
		printf("%d\t",result[i][j]);
	}
	printf("\n");
	}
return 0;
}