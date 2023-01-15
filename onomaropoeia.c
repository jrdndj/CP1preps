/*
We have the word onomatopoeia
user enters a number: 4
4 letters groupings
onom
noma
omat
mato
atop
topo
opoe
poei
oeia
9 groupings
*/

#include<stdio.h>
#include<string.h>
int main(){

char sWord[12] = "onomatopoeia";

int dChar = 0;

scanf("%d", &dChar);

int dLen = strlen(sWord);
int n = dLen;

for (int i = 0; i <= n-dChar; i++){
	for (int j = i; j < i + dChar; j++){
		printf("%c", sWord[j]);
	}
	if (i != n-dChar){
		printf(", ");
	}

}
printf("\n");
}

