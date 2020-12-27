#include<stdio.h>
int main() {

	char kind;
	int dec=1;
	printf("\n Please enter the kind of your animal! \n");
	printf("\n Note that: \n d or D is a dog\n c or C is a cat \n b or B is a bird\n r or R is a reptile\n Any other kind of animal will not be found!!!\n ");
	scanf("%c",&kind);



		if (kind=='d' || kind=='D') {
			printf("\nA dog that has been neutered costs $50.\nA dog that has not been neutered costs $80.");

		}
		else if (kind=='c' || kind=='C') {
			printf("\nA cat that has been neutered costs $40.\nA cat that has not been neutered costs $60.");
		}
		else if (kind=='b' || kind== 'B' || kind=='r' || kind=='R') {
			printf("\nA bird or reptile costs nothing!");

		}
		else {
			printf("\nI am sorry we do not take care of those animals!");

		}//endif

	printf("\nWas your pet neutered?\n");
	printf("\n[1] Yes\n[2] No\n");
	scanf("%d", &dec);

	if (dec == 1 && (kind == 'd' || kind=='D')) {
		printf("\nYou need to pay $50");
	}
	else if (dec == 1 && (kind == 'c' || kind=='C')) {
		printf("\nYou need to pay $40");
	}
	else if (dec == 2 && (kind == 'd' || kind=='D')) {
		printf("\nYou need to pay $80");
	}
	else if (dec == 2 && (kind == 'c' || kind=='C')) {
		printf("\nYou need to pay $60");
	}
	else {
		printf("\nYou do not need to pay!!");
	}
	

	return 0;
}