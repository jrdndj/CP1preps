/*
    Problem 15
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int length(char* ca) {
    int offset[128];
    int max = 0;
    int len = 0;
    int index = 0;
    // memset() is used to fill a block of memory with a particular value
    memset(offset, 0xff, sizeof(offset));
    while (*ca != '\0') {
        if (offset[*ca] == -1) {
            len++;
        }
        else {
            if (index - offset[*ca] > len)
            {
                len++;
            }
            else
            {
                len = index - offset[*ca];
            }
        }
        if (len > max)
        {
            max = len;
        }
        offset[*ca++] = index++;
    }

    return max;
}
int main(void)
{
    char* ca = "xyzxyzyy";
    printf("\nOriginal String: %s", ca);
    printf("\nLength of the longest substring without repeating characters: %d\n", length(ca));
    return 0;
}