#include <stdio.h>


int main()
{
//declare variables
int dn, i=0,j=0;
printf("Enter your favorite number:\n");
scanf("%d",&dn);
if(dn<0){
    dn=(-1)*dn;
}
for(i=dn;i>=0;i--){
    for(j=0;j<i;j++){
        printf(" * ");
    }
   printf(" *\n");

}


    return 0;
}
