#include <stdio.h>
#include <stdlib.h>

void change(char *p1, int *p2){
    if (*p1=='s'){
        *p2 *= *p2;
    }
    else if (*p1=='+') {
        *p2= *p2 +1;
    }
    else {
        *p1 = 'e';
    }
}
int main(){
    char c;
    int p;

    //ask for input
    printf("value for char c: ");
    scanf("%c", &c);
    printf("value for int p: ");
    scanf("%d", &p);
    
    //call function
    change(&c, &p);

    //print
    printf("%c %d \n", c, p);

    return 0;
}
