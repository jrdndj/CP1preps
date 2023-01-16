#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

bool isItOver(char wordGuess[], int wrongs){
  if(wrongs == 6)
    return false;
  for (int i = 0; i < 6; i++) {
    if(wordGuess[i] == '_')
      return true;
  }
  return true;
}

void print(int wrongs) {
	if(wrongs == 1) {
    printf(" 0 \n");
  }
  else if (wrongs  == 2) {
    printf(" 0 \n");
    printf(" I \n");
  }
  else if (wrongs  == 3) {
    printf(" 0 \n");
    printf(" I \n");
    printf(" I \n");
  }
  else if (wrongs  == 4) {
    printf(" 0 \n");
    printf(" I \n");
    printf(" I \n");
    printf("J L \n");    
  }
  else if(wrongs == 5){
    printf(" 0 \n");
    printf(" I \n");
    printf(" I \n");
    printf(" I \n");
    printf("J L \n");
  }
  else if(wrongs == 6){
    printf("-0-\n");
    printf(" I \n");
    printf(" I \n");
    printf(" I \n");
    printf("J L \n");
  }
    
}


void hangMan(char word[],char wordGuess[]){
  int wrongs = 0;
  char input;
  bool counter;
  while(isItOver(wordGuess, wrongs)){
    counter = true;
    printf("Enter your letter in lowercase \n");
    scanf(" %c", &input);
    for(int i = 0;i < 7;i++){
      if(word[i] == input){
        counter = false;
        wordGuess[i] = input;
        }
    }
    if(counter){ 
      wrongs++;
      print(wrongs);
      }
    printf("The word is %s \n", wordGuess);
    
  }
}

int main(void) {
  printf("Uros hangman \n");
  int m = 4, n = 0;
  int num = n + rand() % (m - n + 1);
  char wordsOptions[4][7] = {"rad", "uros", "jordan", "matija"};
  char word[7], wordGues[7];
  for (int i = 0; i < 6; i++) {
    wordGues[i] = '_';
  }
  wordGues[6] = ' ';
  strcpy(word, wordsOptions[num]);
  printf("%s \n", word);
  hangMan(word, wordGues);
  return 0;
}