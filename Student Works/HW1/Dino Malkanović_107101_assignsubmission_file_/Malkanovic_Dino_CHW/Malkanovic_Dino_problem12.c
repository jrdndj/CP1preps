#include<stdio.h>

int main ()

{
    
    int dUser; //declaring variable
    
    printf("Enter a number between 1 and 1000: "); //prints message
    scanf("%d", &dUser); //user input
    
    if (dUser>1000 || dUser<1) { //if number is above or under limit print message
        printf("Number must be between 1 and 1000"); }
        
    else {

    if (dUser==1000) { //If number is 1000 prints M
    printf("M"); }
    
    else {
        switch(dUser/100){ //first digit
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

    switch((dUser/10)%10){ //2nd digit
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

    switch(dUser%10){ //third digit
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
    
    } //end 1st else
    
    } //end 2nd else
    
    return 0;

}