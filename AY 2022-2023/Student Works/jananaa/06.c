
#include <stdio.h>
int main()
{
    int i;
    printf("Please enter one or two-digit integers: \n");
    scanf("%d", &i);
    while (i != 999){
        printf("%d%d%d\n", i, i, i);
        scanf("%d", &i);
    }
    printf("Terminating");
    return 0;
}