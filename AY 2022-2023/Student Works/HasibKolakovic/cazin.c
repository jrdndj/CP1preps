#include <stdio.h>
#include <string.h> // for string operations such as strlen

int main() {

char sWord[12];
int v=0, dlen=0;
printf("gurl gimme a word(max 12characters)\n");
scanf("%s", sWord); // no & ampersand
printf("\n You have entered the word:%s \n", sWord);
dlen=strlen(sWord);
for(int i=0;i<dlen;i++){
switch(sWord[i]){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
	v++;
	sWord[i]='X';
	break;
case '\0': break;
default: break;
}
}
printf("\n Your word is %s and number of letters in it is %d \n\n",sWord,v );
return 0;
}