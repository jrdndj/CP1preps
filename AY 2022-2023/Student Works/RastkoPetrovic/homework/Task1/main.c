#include <stdio.h>

int main(void) {
  char floor_curr = 'g';
  char floor_to;
  char answer[5];
  do {
    printf("You are current on the floor %c where would you like to "
           "go?\n Enter the floor: ",
           floor_curr);
    scanf("%c", &floor_to);

    switch (floor_to) {

    case 'g':
      printf("you arrived at the ground floor --> g ");
      floor_curr = floor_to;
      break;

    case '1':
      printf("you arrived at the first floor --> 1");
      floor_curr = floor_to;
      break;

    case '2':
      printf("you arrived at the second floor --> 2");
      floor_curr = floor_to;
      break;

    case '3':
      printf("you arrived at the third floor --> 3");
      floor_curr = floor_to;
      break;

    case '4':
      printf("you arrived at the fourth floor --> 4");
      floor_curr = floor_to;
      break;

    case '5':
      printf("you arrived at the fifth floor --> 5");
      floor_curr = floor_to;
      break;

    default:
      printf("Please enter valid floor \ng\n1\n2\n3\n4\n5\n");
    }
    printf("\nWould you like to continue? ");
    scanf("%s", &answer);
    if (strcmp(answer, "yes") != 0 || strcmp(answer, "no") != 0) {
      printf("enter yes/no");
      scanf("%s", &answer);
    }
  } while (strcmp(answer, "no") != 0);
  return 0;
}
