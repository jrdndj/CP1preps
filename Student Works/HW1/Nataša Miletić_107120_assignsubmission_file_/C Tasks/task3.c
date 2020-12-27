#include<stdio.h>
int main() {

int x, sum = 0,max = 0;
double average;

  printf("Type an integer: ");
  scanf("%d", &x);
  if (x > 0 ) {
  sum += x; max++;
}

    else if (x<0){
    printf("ERROR");

}
      while(x!=0){
        if(max == 0){

        printf("NO AVERAGE");
}
          else {
            average = sum/max;
     printf("The average is: %f ",average);
}
}

return 0;
}
