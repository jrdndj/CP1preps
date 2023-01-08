#include <stdio.h> //include preprocess directive (standard input/output header). Used for functions scanf()/printf().
#include <stdlib.h> //include preprocess directive (standard library header). Used for memory allocation, random generator, string conversion.
#include <string.h> //include preprocess directive (string header). Used for function strcmp() in this code.
#include <time.h>//include preprocess directive that is responsible for generating random number each time the program compiles.

int MAX_NUM_MISTAKES = 6; //declare variable of type int that sets the allowance up to 6 mistakes made from the user before losing the game. 
char *words[] = {"koper", "famnit", "hangman", "apple", "bitola"}; //defining the array of words to guess from. 

int main(void){
    
    //General Game Introduction. 
    printf("Welcome to the game of Hangman!\n");
    printf("Here are some simple rules: \n");
    
    printf("\n");
    printf("1. There are 5 words that are given for you to guess.\n" 
           "Each time you run the program, new word should be in for the game.\n"); 
    printf("2. You have 6 attempts to guess the letter or word, before the game is over and you get hanged.\n"); 
    
    printf("\n");
    printf("That's it, enjoy it, and good luck!\n"); 
    printf("------------------------------------------\n");

    srand(time(0));//Defining the random generator.  
    char *word = words[rand() % (sizeof(words) / sizeof(words[0]))];  /*generates random word from the array of words each time
    we run the program. */

char guesses[26] = {0};  //defining array of all possible chars to select from the alphabet.
char guessed_letters[26] = {0}; //defining array of guessed letters. 
int number_of_guesses = 0;  //declare variable of type int for number of guesses made. 

/*initialising an array with series of underscores, one for every 
letter in the word.*/

char current_state[strlen(word) + 1];  //declare array of chars with size one larger than length of the word.
for(int i = 0; i < strlen(word); i++){  //loop that recaps over each character in the word.
    current_state[i] = '_';  //set the i-th element of the array to an underscore. 
}
current_state[strlen(word)] = '\0';  /*Sets the last element of the array 
to null character used to mark the end of the string. Without this at the end of the word it was showing '@'*/

/*Loop that asks the user to enter a letter, which is read from users input and cheks 
to see if it has already been used by the loop.*/

while(1){ //infinite loop that continues until being interrupted
    printf("Current word is : %s\n", current_state);  //print current state of word from the array. 
    printf("Guessed Letters : %s\n", guessed_letters);  //print the guessed letters stored in different array.
    printf("Enter a letter : \n");  //asks the user to enter a letter.
} //comment when putting two parts together delete this '}' bracket !!!. When trying it individually keep it in the code.
} //comment when putting two parts together delete this '}' bracket !!!. When trying it individually keep it in the code.

Explenation: 
With the already written code or this first part everything is declared properly but since i choose to do this program with while loop which in this
case and the amount of code i provided you for the first part, unfortunately everything it does is an infinite loop. I could not figure out where to divide the 
code elsewhere to compile when being divided so i chose this part. I know that it does not make sense to provide you with only loop, but this is mainly to 
try and stick to the at least 2 commitments rule. 

    
    ********SECOND PART STARTS HERE*********
    
    
    char character;  //declare variable of type char that stores letters from user input.
	scanf(" %c", &character);  //reads and stores character from user input in character variable. 

	/*cheks if the char has been already guessed, if it's 0 it hasn't been guessed, if it's 1 then it's guessed.
	By deducting the ASCII value of the letter "a" from the ASCII value of the character, 
	the expression character - "a" changes the letter to a number between 0 and 25. */ 
		
		if(guesses[character - 'a'] != 0){ 

		printf("The letter '%c' has been already guessed, try another letter instead : \n", character);  //informs the user that the letter was guessed.
		continue;  //skips the remainder of the loop body and jumps to the next iteration of the loop.
	}
		guesses[character - 'a'] = character;  //define the character as guessed. 
		guessed_letters[number_of_guesses] = character;  //save the guessed character to new array named guessed letters.
		number_of_guesses++;  // add 1 to the number of guesses. 

		int letter_found = 0;  //declare variable of type int to mark if the letter is found in the word or not. 
		for(int i = 0; i < strlen(word); i++){ //loops through the every character of the word. 
			if(word[i] == character){ //if the char at position i that has been inserted by the user matches with char that's in the word,
				current_state[i] = character;  //set the value of element at index i in current_state array to be character.
				letter_found = 1;  //marks the letter as found 
				printf("Correct letter !\n");  //inform the user that the letter inserted was correct.
			}
		}
		
		if(!letter_found){ //statement if the letter in the word is not found
			printf("Sorry, your guess was incorrect! \n");  //inform the user that the letter was incorrect.

		if(number_of_guesses >= MAX_NUM_MISTAKES){  /*statement that defines the end of the game. Meaning if the number of guesses made is bigger 
		or equal to the preiviously set allowance which is 6. */

		printf("The word was %s\n", word); //prints the correct word.
		printf("You got hanged !! \n"); //informs the user that he lost and get's hanged. 
		 
		 printf("  _______  \n"
		 	   "  |      | \n"
		 	   "  O      | \n"
		 	   " /|/     | \n"
		 	   " < <     | \n"
		 	   "    _____| \n"); //hangman figure.
				
				return 0;
			} 
		
		} else if(strcmp(current_state, word) == 0){ //checks if string stored in current_state is equal to the one in word. 
			 	
			 	printf("Your guess is correct\n"); //inform the user that the word was correctly guessed. 
				printf("Congratulations, you won!! The word was %s\n", word);  //congratulates the user and prints the guessed word.
				return 0;
			}
		}
	
	return 0; 
}	

Explenation:
By adding the second part of the code the infinite loop is being stopped, and now the program and works properly. 
Basically I just completed the loop with the second part. There are pretty much comments to every line of code so it is 
self-explanitory.
