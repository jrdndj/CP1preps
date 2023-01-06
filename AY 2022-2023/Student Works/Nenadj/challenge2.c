#include <stdio.h>
void bubbleSort(int array[]);
int main(){
	int dArr[10];
	for(int i=0; i<10; i++)
	{
		printf("Insert %d value: ",i+1);
		scanf("%d", &dArr[i]);
	}
	printf("Basic array: ");
	for(int i=0; i<10; i++)
	{
		printf("%d ", dArr[i]);
	}
	printf("\n");
	bubbleSort(dArr);
}
void bubbleSort(int array[]) {
  for (int i = 0; i<10-1; i++) {
    for (int j = 0; j<10-i-1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  printf("\nEven numbers:\n")
  for(int i=0; i<10; i++)
  {
  	if(array[i]%2==0)
  		printf("%d ", array[i]);
  }
  printf("\nOdd numbers:\n")
  for(int i=10; i>0; i--)
  {
  	if(array[i]%2!=0)
  		printf("%d ", array[i]);
  }
}
