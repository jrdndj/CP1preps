#include <stdio.h>
#include <stdlib.h>

int* magic (int a){
    int *p;
    p=&a;

    return p;
}

int main(){
    int a =4;
    int *p;

    p=magic(a);

    printf("%d\n", *p);

    return 0;
}