#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float average;
    int sum;
    int count;
while(a!=0){
    printf("Insert positive number \n");
    scanf("%d", &a);
    sum+=a;
    count++;
    if(a<0){
        printf("ERROR enter positive number");
        return 1;
    }
}
average=sum/count;
printf("The average is %f", average);
    return 0;
}
