#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 

void Hangman(int dMistakes, char* sHangman) {
	switch(dMistakes) {

		case 6: sHangman[6] = '\\'; break;
		case 5: sHangman[5] = '/'; break;
		case 4: sHangman[4] = '\\'; break;
		case 3: sHangman[3] = '|'; break;
		case 2: sHangman[2] = '/'; break;
		case 1: sHangman[1] = ')', sHangman[0] = '('; break;
		default: break;

	}

	printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        %c %c\n"
	       "\t|             \n"
	       "\t|             ", sHangman[0], sHangman[1], sHangman[2], sHangman[3], sHangman[4], sHangman[5], sHangman[6]);
}

int main()
{
    char sHangman[20]="           ";
    srand(time(0));
    int dRand = rand()%5;
    char sAr[5][10] = { "books", "talks", "movie", "zebra", "horse"};
    char sSecret[5];
    strcpy(sSecret,sAr[dRand]);
    char sCovered[9]="_ _ _ _ _";
    int dMistakes=0;
    int dNot=0, dYes=0;
    
    while(dMistakes<7 && dYes<5){
    char sGuess;
    dYes=0;dNot=0;
    
    printf("\nWhat letter do you guess?\n");
    scanf("%c", &sGuess);
    for(int i=0;i<5;i++){
        if(sGuess==sSecret[i]){
            sCovered[2*i]=sGuess;
            dYes++;
        }else{
            dNot++;
        }
    }//endfor
        if(dNot==5){
            dMistakes++;
        }
        if(dMistakes==7){
            printf("You have lost!");
            break;
        }
        printf("%s \n", sCovered);
        
        if(sSecret==sCovered){
        printf("You have won!");
        break;
        }
        
         Hangman(dMistakes,sHangman);
    }//endwhile
    
    return 0;
}
