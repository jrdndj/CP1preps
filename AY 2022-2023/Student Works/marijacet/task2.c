#include <stdio.h>

int main(){
	
	int kap = 5432;
	int x;
	printf("First digit is %d\n", kap/1000); //thousands
	x = (kap-(kap/1000)*1000); 
	printf("Second digit is %d\n", (kap-(kap/1000)*1000)/100); //hundreds
	printf("Third digit is %d\n", (x-(x/100)*100)/10); //tens
	printf("Fourth digit is %d\n", (x-(x/100)*100)%10); //last digit
	return 0;
}