#include <stdio.h>

int main(){
	
int dFactor1,dFactor2;
for(dFactor1=1; dFactor1<=10; dFactor1++){

	for(dFactor2=10; dFactor2>=0; dFactor2--){
		printf(" %d ",dFactor1*dFactor2 );
	}
	printf("\n");

}



	return 0;
}