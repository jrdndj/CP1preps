#include <stdio.h>
#include <string.h>
#include <limits.h>


/*
//EX0
int main(){

	char a;
	int b;
	printf("Enter the coresponding letter for the animal of your choosing, and 1 or 0 if you want it nurtured or not");
	scanf("%c", &a);
	scanf("%d", &b);
	if((a == 'D' || a == 'd') && b == 1){
		printf("A nurtured dog costs 50$");
	}else if((a == 'D' || a == 'd') && b == 0){
		printf("An unnurtured dog costs 80$");
	}else if((a == 'C' || a == 'c') && b == 1){
		printf("A nurtured cat costs 40$");
	}else if((a == 'C' || a == 'c') && b == 0){
		printf("An unnurtured cat costs 80$");
	}else if(a == 'B' || a == 'b'){
		printf("A bird costs nothing");
	}else if(a == 'R' || a == 'r'){
		printf("A reptile costs nothing");
	}else{
		printf("Error: invalid input(no other animals exist)");
	}



	return 0;
}
***********************************
//EX1
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			if(i < j){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}





	return 0;
}
***********************************

//EX2
int main(){
  int n, numbers, i=0,Sum=0;
  float Average;


  while(n != 0)
   {
     scanf("%d",&n);
     if(!(n < 0)){
		
		Sum = Sum + n;
     	i++;
     }else{
		printf("Error: wrong input");
     }
     
   }

  Average = Sum/i;

  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);

  return 0;
}
***********************************
//EX4
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i > j){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			if(i+j < n){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}

	return 0;
}
***********************************
//EX5
int main(){
	int arr[10], small=INT_MAX;
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		if(arr[i] < small){
			small = arr[i];
		}

	}
printf("\nsmol=%d\n", small);


	return 0;
}
**********************************
//EX6
int main(){
  int n;
  while(n != 999){
     	scanf("%d", &n);
		printf("%d%d%d\n", n, n, n); 
   }
  return 0;
}
**********************************

//EX8
main() {
	int n, c = 0;
	printf("Enter any number n:");
	scanf("%d", &n);


	for (int i = 1; i <= n; i++) {
	    if (n % i == 0) {
	    	c++;
	        if (c == 2) {
	        	printf("\n%d ", n);
	 		}
	    }
	}

	  

  return 0;    
}
*/