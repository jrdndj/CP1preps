//program that asks for array length and then sepparates even and odd numbers in their own arrays 

#include<stdio.h>

int main() {

    int i;
    int n;
    int j = 0;
    int k = 0;
    printf("\nPlease enter a number of array elements: \n");
    scanf("%d", &n);
    int arr[n];
    int evenarr[n];
    int oddarr[n];

    printf("\nPlease enter %d elements to an array: \n", n); //interactive array input 
        
        for (i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        } //endfor

        printf("\nThe elements in an array are: "); //printing elements of original array
        for (i=0; i<n; i++) {
            printf("%d ", arr[i]);
        } //endfor

        for (i=0; i<n; i++) { //even and odd numbers adding
            if (arr[i] % 2 ==0) {
                   evenarr[j] = arr[i];
                    j++; //we put first even number at position j, which is zero, and then j++ for next even number. Same for the odds
            } //endif
            else {
                oddarr[k] = arr[i];
                    k++;
}//endelse
        } //enf for 

 printf("\nThe even elements in an array are: "); //printing elements of original array
        for (i=0; i<j; i++) {
            printf("%d ", evenarr[i]);
        } //endfor

 printf("\nThe odd elements in an array are: "); //printing elements of original array
        for (i=0; i<k; i++) {
            printf("%d ", oddarr[i]);
        } //endfor





return 0;
} //endmain
