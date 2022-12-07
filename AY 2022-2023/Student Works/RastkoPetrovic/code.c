#include <stdio.h>

int main() {
  int n=5,m=5,f=0;  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=0;j<=f;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m--;
        f++;
    }  

  int h,k,sum;
  scanf("%d", &h);
  scanf("%d", &k);
  sum = h;
  for(int i = 1; i < k; i++){
    sum+=h;
  }
  printf("sum is %d",sum);
  
  

    return 0;
}
  
