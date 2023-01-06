#include <stdio.h>
int main()
{

  int number,counter=0, sum = 0, avg;
  //printf("Enter a number: ");
  

 while(number != 0){
  printf("Enter a number: ");
    scanf("%d", &number);
    sum += number;
    
    counter++;
    }

  printf("Sum = %d\n",sum);
  if (counter == 0){
  printf("No average!");}
  else{
  avg = sum / counter;
  printf("Average = %d\n", avg);
  return 0;}
}