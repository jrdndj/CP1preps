#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int length_of_longest_substring(char *str1)
{
    //Making a method
    int offset[128];
    int substr_max_len = 0;
    int len = 0;
    int index = 0;

    memset(offset, 0xff, sizeof(offset));
    while (*str1 != '\0') {
        if (offset[*str1] == -1) {
            len++;
          }
		  else {
            if (index - offset[*str1] > len)
				{
                len++;
            }
			else
			{
	        len = index - offset[*str1];
            }
        }
        if (len > substr_max_len)
		{
            substr_max_len = len;
        }
        offset[*str1++] = index++;
    }

    return substr_max_len;
}

int main(void)
 {
     //Printing string
    char *str1 = "xyzxyzyy";
	printf("\nOriginal String: %s", str1);
	printf("\nLength of the longest substring without repeating characters: %d\n", length_of_longest_substring(str1));
	return 0;
}
