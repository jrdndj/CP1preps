#include <stdio.h>
#include <unistd.h>

int isValid(char floor){
  switch(floor){
    case 'G':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
      return 1;
    default:
      return 0;
  }
}

char* convert(char floor){
  switch(floor){
    case 'G':
      return "Ground";
    case '1':
      return "first";
    case '2':
      return "second";
    case '3':
      return "third";
    case '4':
      return "fourth";
    case '5':
      return "fifth";
  }
}
  


int main(){
  char floor;
  char current_floor = 'G';
  for(int i=0; i<1000; i++){
    printf("You are on the %s floor\n", convert(current_floor));
    printf("Choose the floor from the list: \n");
    printf("G   3\n1   4\n2   5\n\n");
    scanf(" %c", &floor);
    if(isValid(floor) == 0){
      printf("Not correct choice!\n");
      continue;
    }
    printf("The elevator goes to the %s floor\n", convert(floor));
    printf("...\n");
    sleep(1);
    printf("...\n");
    sleep(1);
    current_floor = floor;
    printf("You are on the %s floor\n", convert(current_floor));
    printf("Do you want to exit?[y/n]\n");
    char answer;
    scanf(" %c", &answer);
    if(answer == 'y'){
      break;
    }
  }

  
  return 0;

}
