//Smallest element in an array
#include<stdio.h>

int main() {

int i, n, smallest; //making i for loop, and n for number of elements
printf("Please enter the number of elements: ");
scanf("%d", &n);
int arr[n];

for (i = 0; i < n; i++) { //Interactive elements adding 
    scanf("%d", &arr[i]);
} //endfor

smallest = arr[0];              /*lets suppose that the first element is smallest so then
                                we can compare to every element in an array and assign a new value to it*/
for (i = 0; i < n; i++) { 
        if (arr[i] < smallest) {
        smallest = arr[i];
       }
} //endfor

printf("\nThe smallest element is: %d\n", smallest); //Basically calling the new smallest number 


return 0;
} //endmain
