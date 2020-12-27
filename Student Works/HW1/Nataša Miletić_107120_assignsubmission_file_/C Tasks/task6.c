#include<stdio.h>

int main(){

int nums[10];
int i,min;

     printf("Enter 10 numbers:");
       for(i=0;i<10;i++){
         scanf("%d",&nums[i]);

}

           min=nums[0];
            for(i=0;i<10;i++){
              if(min>nums[i]){
                min=nums[i];

}

}

printf("Smallest integer is: %d",min);

return 0;

}

