#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int counter=0;
    int array[25];
    printf("Insert number of ellements");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((array[i]==array[j]) && i!=j){
                counter++;
            }
        }
    }
    printf("The number of duplicates is %d\n", counter);
    return 0;
}
