// onomatopoeia
//user enters a number:4
// 4 letter groupings
//example onom noma omat mato atop topo opoe poei oeia
// groupings should be dynamic

#include <stdio.h>
#include <string.h>

int main(){
	int dNum1;
	char sWord[12]= "onomatopoeia";
	printf("\n Hey, give me a number : ");
	scanf("%d", &dNum1);
	for (int i=0; i<=strlen(sWord)-dNum1; i++){
		for (int j=i; j<i+dNum1; j++ ){
			printf("%c", sWord[j]);
		}
		if (i != strlen(sWord)-dNum1){
			printf(", ");
		}
	}
	return 0;
}