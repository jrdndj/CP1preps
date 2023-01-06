#include<stdio.h>
void fibbonaci(int n);

int main(){
	int n;
printf("Enter the number n");
scanf("%d",n);
fibbonaci(n);

return 0;
	
}void fibbonaci(int n){
	int f1=0;
	int f2=1;
	for(int i=o;i<n;i++){
		int fib=f1+f2;
		f1=f2;
		f2=fib;
	return fib;
}
printf("%d",fib)

}
