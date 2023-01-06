#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void hangman(int i){ // function draw hangman (picture is taken from the Internet)
    switch (i){
    case 0:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| | | / \n| |/ \n| | \n| | | \n| | \n| | \n| | | \n| | \n| | \n| | | \n| | \n|=========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 1:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| | | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| | | \n| | \n| | \n| | \n| | \n| | \n| | \n| | \n| | \n|=========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 2:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| |/ /       || \n| | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| |         .-`--'. \n| |           . .    \n| |          |   |    \n| |          | . |     \n| |          |   |      \n| | \n| | \n| | \n| | \n| | \n|=========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 3:
        printf("___________.._______ \n| .__________))______| \n| | / /      || \n| |/ /       || \n| | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| |         .-`--'. \n| |        /Y . .    \n| |       // |   |    \n| |      //  | . |     \n| |     ')   |   |      \n| | \n| | \n| | \n| | \n| | \n|=========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 4:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| |/ /       || \n| | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| |         .-`--'. \n| |        /Y . . Y\ \n| |       // |   | \\ \n| |      //  | . |  \\ \n| |     ')   |   |   (` \n| | \n| | \n| | \n| | \n| | \n|=========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 5:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| |/ /       || \n| | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| |         .-`--'. \n| |        /Y . . Y\ \n| |       // |   | \\ \n| |      //  | . |  \\ \n| |     ')   |   |   (` \n| |          ||    \n| |          ||    \n| |          ||    \n| |          ||    \n| |         / |    \n==========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    case 6:
        printf(" ___________.._______ \n| .__________))______| \n| | / /      || \n| |/ /       || \n| | /        ||.-''. \n| |/         |/  _  \ \n| |          ||  `/,| \n| |          (\\`_.' \n| |         .-`--'. \n| |        /Y . . Y\ \n| |       // |   | \\ \n| |      //  | . |  \\ \n| |     ')   |   |   (` \n| |          || || \n| |          || || \n| |          || || \n| |          || || \n| |         / | | \\ \n==========|_`-' `-' |===| \n|=|=======\ \       '=|=| \n| |        \ \        | | \n: :         \ \       : : \n. .          `'       . . \n");
        break;
    }
}




char* create_word(){ // return random word to guess from the array 
	static char words[10][20] = {"yellow", "red", "house", "sequence", "analysis", "jordan", "madrid", "argentina", "london"}; // array with words
	return words[rand()%11];
}



int main(){
        printf("Welcome to Hangman Game!\n");
        printf("You have maximum 6 faults to guess word\n");
	int tries = 0;  // count the number of tries
	char* word = create_word();  // word to guees
        int len = strlen(word);  // length of word
	int guessed = 0;  // count the number of guessed letters
	char used_letters[26];  // array with already used letters
	char guessed_letters[len];  // array with already guessed letters
	int counter;
	int flag = 0;  // flag to check is letter in the word or not
        int already_used = 0;  // flag to check if the letter is already used
	for(int i=0; i<len; i++){  // print underscores instead of letters
	    guessed_letters[i] = '_';
	    printf("%c ", guessed_letters[i]);
	} 
        printf("\n");
	for(int i=0; i<26; i++){  // just a loop, can be infinite
            hangman(tries); // draw a current hangman 
	    if(guessed == len){  // check if word is guessed
	        printf("You win!\n");
		break;
	    }
	    if(tries == 6){  // check if no attempts left
		printf("You lose!\n");
                printf("The hidden word was %s", word);
	        break;
	    }
	    printf("Enter the letter: ");
	    char letter;  // scan the letter from the user
	    scanf(" %c", &letter);
	    for(int j=0; j<=counter; j++){  // check if letter is already used
		if(used_letters[j] == letter){
		    printf("This letter is already used, try again!\n");
                    already_used = 1;
	            break;
		}
	    }
            if(already_used == 1){
                 already_used = 0;
                 continue;
            }
	    for(int j=0; j<len; j++){  // check is letter in the word
		if(word[j] == letter){
		    guessed++;
		    guessed_letters[j] = letter;
		    flag++;
		}
	    }
	    if(flag == 0){
		printf("This letter is not in the word\n");  // print the result if letter is not in the word
		tries++;
	    }
	    flag = 0;
	    for(int k=0; k<len; k++){  // print already guessed letters
	        printf("%c ", guessed_letters[k]);
	    }
	    used_letters[counter] = letter; // add already used letters in array
	    counter++;
	    printf("\n");
	}
	return 0;
   }
