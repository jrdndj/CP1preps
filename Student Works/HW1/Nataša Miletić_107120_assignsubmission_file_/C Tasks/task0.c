
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int x,y,z,longest;

    printf("Input side a:\n");
    scanf("%d", &x);
    printf("Input side b:\n");
    scanf("%d", &y);
    printf("Input side c:\n");
    scanf("%d", &z);
    if((x<=0) || (y<=0) || (z<=0)) {
      printf("This is not a fittable triangle.\n");
    } else {
        if((x + y <= z) || (x + z <= y) || (y + z <= x)) {
        printf("This is not a fittable triangle.\n");
        } else {

            longest = z;
            if (longest < x) {
                z = longest;
                longest = x;
                x = z;
            }
            if (longest < y) {
                z = longest;
                longest = y;
                y = z;
            }

            if( x * x + y * y == longest * longest ) {
                printf("This is a right-angled triangle.\n");
            } else if( x * x + y * y > longest * longest) {
                printf("This is an acute-angled triangle.\n");
            } else printf("This is an obtuse-angled triangle.\n");
        }
  }

  return 0;
}
