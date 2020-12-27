/* I WANTED TO MAKE SOMETHING DIFFERENT AND FEEL CHRISTMAS SPIRIT! */

#include <stdio.h>

int main()
{
  int i=-1,j=0,rows;

  printf("Tell me how big your Christmas tree you want to be: \n");
  scanf("%d",&rows);

  while(j++<rows)
  {
    printf(" ");
  }
  while(++i<rows)
  {
      for(j=-2;++j<rows-i;)
          printf(" ");
      for(j=0;++j<2*i;)
      {
          printf("*");
      }
      printf("\n");
          }
    for(int b=1;b<=3;b++)

        {
        for(int a=1;a<=i-1;a++)
            {
            printf(" ");
            }
        printf("*"); 
        printf("\n");
        }
        printf("\n WE WISH YOU A MERRY CHRISTMAS AND A HAPPY NEW YEAR!!!");
}