#include <stdio.h>
#include <string.h>

int main(){
    int dNum1;
    char sWord[12]= "onpomatopoeia"
    printf("\n rnter a number: ");
    scanf("%d", &dNum1);
    for (int i = 0; i < strlen(sWord); i++)
    {
        for (int j = i; j < dNum1; j++)
        {
                printf("\n %c ", sWord[j])
        }
        if (i != strlen(sWord)-dNum1){
            printf (", ");
        }
        
    }
    
    
    return 0;
}