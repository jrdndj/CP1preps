#include <stdio.h>
int* Pointer(int a*){
	

	return a;
}



int main(){
	int a=4 
	
	printf("%d\n",*Pointer(&a));
	return 0;
}
