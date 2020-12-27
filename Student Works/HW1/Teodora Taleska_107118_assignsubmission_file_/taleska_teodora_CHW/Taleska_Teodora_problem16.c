/*
  This program in C is written by Teodora Taleska and will find the 1001st prime number!!! :)
*/

#include<stdio.h>
#include<stdlib.h>
int main() {

  //variable declaration
  char *s;
  int i;
  int ctr = 0;
  int n = 10000;
  int a1001st = 1001;
   s = calloc(n, sizeof *s);
  
  //finding the 1001st prime number
  for (i = 2; i < n; i++) {
    if (!s[i]) {
      int j;
      ctr++;
      if (ctr == a1001st) {
        printf("--The 1001st prime number is: %d \n", i);
        break;
      }//enf nested if
      for (j = i*2; j<n; j+=i) {
        s[j] = 1;
      }
    }//enf if
  } //end for
  
  return 0;
}//endmain
