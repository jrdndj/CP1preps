#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int main() {
  char haiku[MAX_LEN];
  char name[MAX_LEN];
  int count_the = 0;
  int count_will = 0;

  printf("Enter your Japanese haiku: ");
  fgets(haiku, MAX_LEN, stdin);

  printf("Enter your name: ");
  fgets(name, MAX_LEN, stdin);

  // Remove newline character at the end of name
  name[strlen(name) - 1] = '\0';

  // Check for duplicate words
  char *token = strtok(haiku, " ");
  while (token != NULL) {
    if (strcmp(token, "the") == 0) {
      count_the++;
    }
    if (strcmp(token, "will") == 0) {
      count_will++;
    }
    token = strtok(NULL, " ");
  }
  if (count_the > 0) {
    printf("The word \"the\" was used %d times.\n", count_the);
  }
  if (count_will > 0) {
    printf("The word \"will\" was used %d times.\n", count_will);
  }

  // Check if sentences are in sentence case
  if (islower(haiku[0])) {
    haiku[0] = toupper(haiku[0]);
  }
  if (haiku[strlen(haiku) - 2] != '.') {
    haiku[strlen(haiku) - 1] = '.';
    haiku[strlen(haiku)] = '\0';
  }

  // Print edited poem with name concatenated on it
  printf("%s -%s\n", haiku, name);

  return 0;
}
