#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void try(char *str,char *str1){   //parameter with pointers
int life=10;   //ammount of tries
printf("%s\n",str);   //+++++
char a;    //pivot

for(int i=1;i<=life;i++){
printf("Tries left %d\n",(life-i+1));
int counter1=0;
if(strcmp(str,str1)==0){   //checks if you've completed the word
printf("You did it!\n");
break;
}
else{      //This is if you run out of tries
if(i==life){
printf("GAME OVER\n");
printf("The word you didn't guess: %s",str1);
}
else{
printf("TRY!\n");
scanf("%c",&a);
getchar();

for(int j=0;j<strlen(str1);j++){  //checks if a is in the string
if(a==str1[j]){
str[j]=str1[j];
counter1++;
}

}//for j

}//end of second else
printf("%s\n",str);
} //end of first else

if(counter1!=0){
i--;}

}//for i
} //end of try function

void guess(char **sstring,int num){

int life=10;
int n=strlen(sstring[num]);
//printf("%d %s\n",n,sstring[num]);
char String2[n];
char String4[n];
strcpy(String4,sstring[num]);

for(int i=0;i<n;i++){
String2[i]='*';
}

//printf("%s\n",String2);
char String3[n];
strcpy(String3,String2);
printf("Guess the letter in the word!\n");
try(String3,String4);


}                           //end of function


int main() {      //main function
srand(time(NULL));    //refreshes the program every time you run it, so you get random variables
int n=rand()%4;
char *String[]={"house","garden","tops","bottoms","crime","what"};    //put here words that you want to guess
printf("\n--------------------\n");
guess(String,n);
printf("\n--------------------\n");
return 1;
}
