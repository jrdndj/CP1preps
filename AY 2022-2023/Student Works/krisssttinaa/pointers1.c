#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=12, b=6;
    int *p1=&a;
    int *p2=&b;

    int mul = (*p1)*(*p2);
    int add = (*p1)+(*p2);
    int sub = (*p1)-(*p2);
    float dev = (*p1)/(*p2);
    printf("%d\n", mul);
    printf("%d\n", add);
    printf("%d\n", sub);
    printf("%f\n", dev);

    p1=NULL;
    p2=NULL;

    free(p1);
    free(p2);
    return 0;
}