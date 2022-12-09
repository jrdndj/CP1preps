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

  // loop to access each array element
  for (int i = 0; i < 10 - 1; i++) {
      
    // loop to compare array elements
    for (int j = 0; j < 10 - i - 1; j++) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[j] > array[j + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  for(int i=0; i<10; i++)
  {
  	printf("%d", array[i]);
  }
}