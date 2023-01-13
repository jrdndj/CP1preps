#include<stdio.h>

void print_arr(int arr[], int size){

	for(int i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void copy_arr(int arr1[], int arr2[], int size[]){

	for(int i = 0; i < size; i++){
		
	}
}

void add1arr(int arr[]){

	arr[0] = arr[0]+1;
}

int main(){

	int arr[3] = {4,8,15};

	print_arr(arr,3);

	add1arr(arr);

	print_arr(arr,3)
}