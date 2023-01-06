#include <stdio.h>
#include <string.h> // for string operations such as strlen

int main() {

char ch;
char ans;
printf("Which animal? (d-dog,c-cat,b-bird,r-reptile)\n");
scanf("%c",&ch);
getchar();
if(ch=='d'){
	printf("Is the dog neutered?\n");
	scanf("%c",&ans);
	if(ans=='y'){
		printf("It will cost you $50.\n");
	}
	else if(ans=='n'){
		printf("It will cost you $80.\n");
	}
	else{
		printf("Mistake!\n");
	}
}
else if(ch=='c'){
	printf("Is the cat neutered?\n");
	scanf("%c",&ans);
	if(ans=='y'){
		printf("It will cost you $40.\n");
	}
	else if(ans=='n'){
		printf("It will cost you $60.\n");
	}
	else{
		printf("Mistake!\n");
	}
}
else if(ch=='b'||ch=='r'){
	printf("Is will cost you nothing. :D\n");
}
else{
	printf("MISTAKE!\n");
}


return 0;
}