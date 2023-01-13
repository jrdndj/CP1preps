#include<stdio.h>
int max(int dNum1, int dNum2, int dNum3);
int min(int dNum1, int dNum2, int dNum3);
int main(){
	int dNum1;
	int dNum2;
	int dNum3;

//entering the first number
	printf("Enter number:");
	scanf("%d",&dNum1);

	//entering thr second number
	printf("Enter second number ");
	scanf("%d",&dNum2);

	//entering the third number
	printf("Enter third number ");
	scanf("%d",&dNum3);

	printf("\nThe biggest number is %d\n", max(dNum1,dNum2,dNum3));
	printf("\nThe smallest number is %d\n",min(dNum1,dNum2,dNum3));
	int Sum=0;
	Sum=dNum1+dNum2+dNum3;
	printf("\nThe sum of the three numbers is %d\n",Sum);
	double a = Sum/3;
	printf("\nThe average is %lf\n",a);
	return 0;
}
int max(int dNum1, int dNum2, int dNum3){
	 if(dNum1>dNum2 && dNum1 >dNum3){
	 	return dNum1;
	 }
	 else if(dNum2>dNum1 && dNum2>dNum3){
	 	return dNum2;
	 }
	 else {
	 	return dNum3;
	 }

}

//smaller number of three
int min(int dNum1, int dNum2, int dNum3){
	 if(dNum1<dNum2 && dNum1 <dNum3){
	 	return dNum1;
	 }
	 else if(dNum2<dNum1 && dNum2<dNum3){
	 	return dNum2;
	 }
	 else {
	 	return dNum3;
	 }

}




