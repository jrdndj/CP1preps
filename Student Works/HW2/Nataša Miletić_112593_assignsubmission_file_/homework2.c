#include<stdio.h>
#include <math.h>

int main(){
//declaring variables
int test, a, b, n, k;
//factorial1 is for n, factorial2 is for k
double factorial1, factorial2, square, c;

//asking for number of input
printf("\n  Please type number of cases you want to input: ");
scanf("%d", &test);

// checking the number of test cases
if (test>=1 && test<= 200000){
  for(a=1; a<=test; a++){
    //asking for a positive integer
    printf("\n Please enter a positive number (integer):");
     scanf("%d", &n);
      //cheking the value of N
      if(n>=1 && n<=200000){
       // declaring factorials (setting them to value 1 each time we enter the loop)
       factorial1 = 1;
       factorial2 = 1;
       // n factorial
       for (b=1; b<=n; b++){
        factorial1*=b;
    }
       //n square factorial
       square=factorial1*factorial1;
       // k factorial
       for(k=1; ;k++){
       factorial2=factorial2*k;
       //making sure factorial2 (k factorial) is a multiple of factorial1 (n factorial)
       c=fmod(factorial2,square);
       if(c==0){
       //printing the value if the upper one is correct
       printf("%d",k);
       break;
      }
   }
}

else {
       //case when value n is not satisfied
       printf("\n Please make sure you typed a correct valued number");
      }
   }
}

else {
      //case when value of test cases is not satisfied
     printf("\n Please make sure you typed a correct value for test cases");
    }
return 0;
}
