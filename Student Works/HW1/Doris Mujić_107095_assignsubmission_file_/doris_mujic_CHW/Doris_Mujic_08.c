#include<stdio.h>


int main(){

	//declare variable
	int a;

	//user input
	printf("\n Please insert for which number do you want the multiplication table\n");
	scanf("%d",&a);
	
	//making the multiplication prettier and indicating what the table does
	printf("X ");
	
	//printing the horizontal line for the wanted number
	for(int i=1; i<a+1; i++){
	printf("   %d",i);
	printf(" ");
	}
	
	//print a new line
	printf("\n"); 
	
	//printing the vertical column to 10
	for(int c=1; c<11; c++){
		printf("%d",c);
		printf("| ");
		//printing the results by multiplying the the horizontal-also j- to vertical row
		for(int j=1; j<=a; j++){
			int multi=j*c;
			printf("  %d",multi);
			printf("  ");
	}
	printf("\n");
}

return 0;
}//end main