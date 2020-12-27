#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for(;;){
         printf("Enter the number \n");
         scanf("%d",&num);
         if(num!= -999 && num<99 && num>0){
            printf("%d%d%d",num,num,num);
            continue;
         }
         else{
            return 0;
         }
    }
    return 0;
}
