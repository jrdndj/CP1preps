// T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define MAX_GUESSES 6
#define NUM_WORDS 5
#define WORD_LEN 20

const char* words[NUM_WORDS] = {
	"practicum"
	"computer"
	"machine"
	"biology"
	"molecules"
};

int main() {
	srand(time(0)); // Seed the random number generator
	int wordIndex = rand() % NUM_WORDS; // Choose a random word from the list
	const char* word = words[wordIndex]; // Get the chosen word
	int wordLen = strlen(word); // Get the length of the word

//Create an array of blanks for the word:
	char blanks[WORD_LEN + 1];
	for (int i = 0; i < wordLen; i++) {
		blanks[i] = '_';
	}
	blanks[wordLen] = '\0';  // Add a null terminator
	int numGuesses = 0;  // Kepp the track of the number of incorrect guesses
	while (numGuesses < MAX_GUESSES) {
		printf("Word: %s\n", blanks);  // Print the current blanks
		printf("Guesses left: %d\n", MAX_GUESSES - numGuesses);  //Print the remaining number of guesses
		printf("Enter a letter: ");  //Ask the user to enter a letter

		char letter;
		scanf(" %c", &letter); //Read the letter from the user

		// Check if the letter is in the word
		int found = 0;
		for (int i = 0; i < wordLen; i++) {
			if (word[i] == letter) {
				blanks[i] = letter; //Fill the blank with the correct letter
				found = 1;
			}
		}

		if (found) {

		//Check if the player has won the game
		if (strcmp(word, blanks) == 0) {
			printf("Congratulations! You won!\n");
			return 0;
		}

	}
		else {
			numGuesses++; //Increment the number of incorrect guesses
	switch (numGuesses) {
	case 1:
		printf(" 0\n");
		break;
	case 2:
		printf(" 0\n");
		printf(" |\n");
		break;
	case 3:
		printf(" 0\n");
		printf(" |\n");
		printf("/ \\\n");
		break;
	case 4:
		printf(" 0\n");
		printf(" |\n");
		printf("/ \\\n");
		printf(" |\n");
		break;
	case 5:
		printf(" 0\n");
		printf(" |\n");
		printf("/ \\\n");
		printf(" |\n");
		printf("/ \\\n");
		break;
	case 6:
		printf(" 0\n");
		printf(" |\n");
		printf("/ \\\n");
		printf(" |\n");
		printf("/ \\\n");
		printf(" |\n");
		break;


	}

}
}

	if (numGuesses == MAX_GUESSES) {
		printf("Sorry, you lost the game. The correct word is: %s\n", word);
	}

	return 0;


}

// Done by: Anastasija Anteljevic, 89201235, 26.12.2022




