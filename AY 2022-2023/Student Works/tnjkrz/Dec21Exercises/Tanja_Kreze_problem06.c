#include <stdio.h>

int main()
{
    //declaring variable
    short int num;
    
    //infinite loop until num == 999
    while (1){
        printf("\nEnter one or two-digit integers.\nWrite 999 to exit. \n");
        scanf("%hu", &num);
        if (num != 999){
            printf("%hu%hu%hu", num, num, num);
        } else {
            return 0;
        }
    }
}
