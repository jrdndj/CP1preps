#include<stdio.h>

int main () {
  int dInput; // Variable Declaration
  
 while( dInput>1000 || dInput<1) { // While loop between the numbers
  printf("Please Enter a Number (0-1000): "); // Print Message to User
  scanf("%d", &dInput); // Scan user Input
 }

  if (dInput==1000) // Statement for M (Roman)
  printf("M"); 
  else {

   switch (dInput/100) { // From here, using Case, Switch for all Letters;
      case 1:
      printf("C");
      break;
      case 2:
      printf("CC");
      break;
      case 3:
      printf("CCC");
      break;
      case 4:
      printf("CD");
      break;
      case 5:
      printf("D");
      break;
      case 6:
      printf("DC");
      break;
      case 7:
      printf("DCC");
      break;
      case 8:
      printf("DCC");
      break;
      case 9:
      printf("CM");
      break;
  }

  switch ((dInput/10)%10) { // Same goes here
      case 1:
      printf("X");
      break;
      case 2:
      printf("XX");
      break;
      case 3:
      printf("XXX");
      break;
      case 4:
      printf("XL");
      break;
      case 5:
      printf("L");
      break;
      case 6:
      printf("LX");
      break;
      case 7:
      printf("LXX");
      break;
      case 8:
      printf("LXXX");
      break;
      case 9:
      printf("XC");
      break;
  }

  switch (dInput%10) { // As well as Here 
      case 1:
      printf("I");
      break;
      case 2:
      printf("II");
      break;
      case 3:
      printf("III");
      break;
      case 4:
      printf("IV");
      break;
      case 5:
      printf("V");
      break;
      case 6:
      printf("VI");
      break;
      case 7:
      printf("VII");
      break;
      case 8:
      printf("VIII");
      break;
      case 9:
      printf("IX");
      break;
  }
}
printf("\nThank You for Using My Program");
}
