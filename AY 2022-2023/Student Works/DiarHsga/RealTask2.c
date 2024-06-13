#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 

/*function declaration*/
void Hangman(int dMistakes, char* sHangman);

int main()
{
    //variable declaration
    char sHangman[20];
    srand(time(0));
    int dRand = rand()%5;//for randomness
    char sAr[6][10] = { "books", "talks", "movie", "zebra", "horse"};
    char sSecret[6];
    char sCovered[10]="_ _ _ _ _";
    int dMistakes=0, dNot=0, dYes=0;
    
    strcpy(sSecret,sAr[dRand]);
    
    
    while(dMistakes<6 && dYes<5){//startwhile
    char sGuess;
    dNot=0;
    
    printf("\nWhat letter do you guess?\n");//prompt user for input
    scanf(" %c", &sGuess);
    for(int i=0;i<5;i++){//startfor
        if(sGuess == sSecret[i] && sCovered[2*i] == '_'){//check if they match(2nd is for nonrepetition of correct value)
            sCovered[2*i]=sGuess;
            dYes++;
        }else{
            dNot++;
        }
    }//endfor
        if(dNot==5){//checkifmistake
            dMistakes++;
        }
        if(dMistakes==6){//checkifover
            Hangman(dMistakes,sHangman);
            printf("\nYou have lost!");
            break;
        }
        
        if(dYes==5){//checkifwin
        printf("You have won!\n");
        printf("The word was %s!", sSecret);
        break;
        }
        
         Hangman(dMistakes,sHangman);//calling the function
         printf("%s \n", sCovered);
    }//endwhile
    
    return 0;
}//endmain

/*function place*/
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
