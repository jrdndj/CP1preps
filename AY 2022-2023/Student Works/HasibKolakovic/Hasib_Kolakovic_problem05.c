#include <stdio.h>
#include <string.h> // for string operations such as strlen

int main() {
int Input[10];
printf("Enter 10 numbers\n");
for (int i = 0; i < 10; i++){
	scanf("%d",&Input[i]);
}

int max=Input[0];
for(int i=0;i<=9;i++){
	if(max<Input[i]){
		max=Input[i];
	}
}
printf("Max is %d\n",max );




	return 0;
}