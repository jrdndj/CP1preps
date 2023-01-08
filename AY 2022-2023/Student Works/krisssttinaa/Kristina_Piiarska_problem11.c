#include <stdio.h>
#include <stdbool.h>

//function prototype
bool isPrime(int n);

int main(void) {
  int count = 0;
  int i = 2;
  while (count < 1001) {
    if (isPrime(i)) {
      count++;
    }
    i++;
  }
  printf("The 1001st prime number is: %d\n", i - 1);
  return 0;
}

//function to check if it's prime
bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0){
    return false;
    }
  }
  return true;
}