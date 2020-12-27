#include<stdio.h>
int main (int argc, char const *argv[]){
    //declaration
    int n, count;
    int array[25], dup[25];
    //create array
    printf("Enter the dimension of your array, they should be between 5-25 elements\n");
    scanf("%d", &n);
    //input elements and find duplicate elements
    printf("Please enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
        dup[i]=-1;
    }
        for(int i=0; i<n; i++){
            count = 1;
            for (int j=i+1; j<n; j++){
                if(array[i]==array[j]){
                    count++;
                    dup[j]=0;
                }
            }
            if(dup[i]!=0)  dup[i]=count;
        } 
        //print the duplicate elements
        printf("\n Duplicate elements in array are: ");
        for(int i=0; i<n; i++){
            if(dup[i]>1)  printf("\n %d", array[i]);
        }
    return 0;
}