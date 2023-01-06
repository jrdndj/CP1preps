#include <stdio.h>
#include <unistd.h>

int isValid(int floor){ // check the validity of chosen floor 
  switch(floor){
    case -3:
    case -2:
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return 1;
    default:
      return 0;
  }
}

char* convert(int floor){ // convert floor to the corresponding string
  switch(floor){
    case 0:
      return "Ground";
    case 1:
      return "first";
    case 2:
      return "second";
    case 3:
      return "third";
    case 4:
      return "fourth";
    case 5:
      return "fifth";
    case -1:
      return "first basement";
    case -2:
      return "second basement";
    case -3:
      return "third basement";
  }
}

int convert_to_int(char *f){ // convert input to the number
  if(strcmp(f, "B1") == 0){
    return -1;
  }
  else if(strcmp(f, "B2") == 0){
    return -2;
  }
  else if(strcmp(f, "B3") == 0){
    return -3;
  }
  else if(strcmp(f, "G") == 0){
    return 0;
  }
  else if(strcmp(f, "1") == 0){
    return 1;
  }
  else if(strcmp(f, "2") == 0){
    return 2;
  }
  else if(strcmp(f, "3") == 0){
    return 3;
  }
  else if(strcmp(f, "4") == 0){
    return 4;
  }
  else if(strcmp(f, "5") == 0){
    return 5;
  }
}
  


int main(){
  char f[2]; // for string input
  int current_floor = 0;  
  int floor;
  
  for(int i=0; i<1000; i++){ // just loop, can be infinite
    printf("You are on the %s floor\n", convert(current_floor));
    printf("Choose the floor from the list: \n");
    printf("B1   G   3\nB2   1   4\nB3   2   5\nPress: ");
    scanf("%s", f);
    floor = convert_to_int(f); // convert string input to integer
    if(isValid(floor) == 0){ // check the validity of input
      printf("Choose the correct floor!\n");
      continue;
    }
    printf("The elevator goes to the %s floor\n", convert(floor));
    if(current_floor < floor){ // check if the elevator goes up or down
      printf("Moving up\n...\n");
      sleep(1);
      printf("...\n");
      sleep(1);
      current_floor = floor;
      printf("You are on the %s floor\n", convert(current_floor));
      printf("Do you want to exit?[y/n]\n"); // check is passenger exit or not
      char answer;
      scanf(" %c", &answer);
      if(answer == 'y'){
        break;
      }
    }
    else{
      printf("Moving down\n...\n");
      sleep(1);
      printf("...\n");
      sleep(1);
      current_floor = floor;
      printf("You are on the %s floor\n", convert(current_floor));
      printf("Do you want to exit?[y/n]\n");
      char answer;
      scanf(" %c", &answer);
      if(answer == 'y'){
        printf("Bye bye!");
        break;
      }
    }
  }
  return 0;
}
