#include <stdio.h>
#include <string.h>

int main(){
char sWord [20] = "tfuwuftruuwuuuwufftr";
int uwu_count=0;
int dLen = strlen(sWord);

for i=0 to dLen-2
    sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2] == 'u'{
        uwu_count++;
    }

printf("number of uwu is %d \n ", uwu_count);
return 0;
}