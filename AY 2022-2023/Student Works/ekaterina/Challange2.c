/*Ask the user to enter 10 integers in an array.Print the contents of the array.Then sort the array in ascending order then print the sorted array.Consider duplicate numbers in your sollution.*/
#include<stdio.h>

int main(){

//saving the array
int dArr[10];
int temp;
printf("\n Enter the array:");

//the user enters the array 
for(int i=0;i<10;i++){
	scanf("%d\n", &dArr[i]);
}//endfor



temp=dArr[0];
for(int i=0;i<10;i++)
{
	for(int j=i+1;j<10;j++)
	{
	if(dArr[i]>dArr[j])
	{
	temp=dArr[i];
	dArr[i]=dArr[j];
	dArr[j]=temp;
	}
}
}
printf("The numbers arranged in ascending order are given below \n");
        for (int i = 0; i < 10;i++){
            printf("%d\n", dArr[i]);
        }
 
    



	return 0;
}//endmain