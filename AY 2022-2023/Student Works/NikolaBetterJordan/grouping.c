#include <stdio.h>
#include <string.h>
int main(){
	char sWord[12] = "onomatopoeia"; int dLen; int n; int combinations;
	dLen = strlen(sWord);
	combinations=1;
	printf("\n Enter a number: ");
	scanf("%d", &n);
	for(int i=0;i<=dLen-n;i++){
		for(int j=i;j<i+n;j++){
			printf("%c", sWord[j]);
		}
		if (i!=dLen-n){
			printf(", ");
			combinations++;
		}
	}
	printf("\n There are %d groupings. ", combinations);


	return 0;
}