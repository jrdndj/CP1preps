#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N; // assigning a data type
    scanf("%d", &T); // scanning the input for the number of traversals
    for(int i = 0;i<T;i++) //  for loop that will load all the variables and scan for input
    {
        scanf("%d", &N);
        N*=2;               // increasing the value of N by multiplying by 2
        printf("%d\n", N);  // the output of the variable N after it was modified
                            // once the for loop ends, the variable i is increased the loop is waiting for another input
    }
    return 0;
}
