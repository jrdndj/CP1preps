#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	char* wordList[] = {"homework", "programming", "ihatecsyntax", "pointer", "beshbarmak", "cedevita"};
	char symbol;
	unsigned int randomWordIndex = getRandomNumber(0,(sizeof(wordList) / sizeof(wordList[0]) - 1));
	unsigned int hangmanX = 2 + 2; // Indent from the left side + correcting position
	unsigned int hangmanY = 0 + 1; // Indent from the top side  + correcting position
	unsigned int hangmanWidth = 5; // Min value 5
	unsigned int hangmanHeight = 8; // Min value 8

	validateHangmanSize(&hangmanWidth, &hangmanHeight);

	drawHangman(hangmanX, hangmanY, hangmanWidth, hangmanHeight);

	unsigned char upToPartNumber = 0; // Value range: 0 - 6

	drawMan(upToPartNumber, hangmanX, hangmanY, hangmanWidth, hangmanHeight);

	moveConsoleCursor(0, hangmanY + hangmanHeight + 2);

	printf("\n");

	moveConsoleCursor(2, hangmanY + hangmanHeight + 3);

	for (int i = 0; i < strlen(wordList[randomWordIndex]); i++) {
		printf("_ ");
	}

	

	runGame(wordList[randomWordIndex], 2, hangmanX, hangmanY, hangmanWidth, hangmanHeight);
	
	moveConsoleCursor(0, hangmanY + hangmanHeight + 6);
}

int drawHangman(unsigned int hangmanX, unsigned int hangmanY, unsigned int hangmanWidth, unsigned int hangmanHeight) {
	moveConsoleCursor(hangmanX, hangmanY);
	for (int i = 0; i < hangmanWidth + 1; i++)
		printf("_");

	moveConsoleCursor(hangmanX + 1, hangmanY + 1);
	printf("|/");

	for (int i = 1; i < hangmanHeight; i++)
	{
		moveConsoleCursor(hangmanX + 1, hangmanY + 1 + i);
		printf("|");
	}

	moveConsoleCursor(hangmanX - 1, hangmanY + hangmanHeight);
	printf("__");
	moveConsoleCursor(hangmanX + 2, hangmanY + hangmanHeight);
	for (int i = 0; i < hangmanWidth; i++)
		printf("_");

	moveConsoleCursor(hangmanX - 1, hangmanY + hangmanHeight + 1);
	printf("|");

	moveConsoleCursor(hangmanX + hangmanWidth + 1, hangmanY + hangmanHeight + 1);
	printf("|");
}

int drawMan(unsigned char upToPartNumber, unsigned int hangmanX, unsigned hangmanY, unsigned int hangmanWidth, unsigned int hangmanHeight) {
	switch (upToPartNumber)
	{
	case 6:
		moveConsoleCursor(hangmanX + hangmanWidth + 1, hangmanY + 6);
		printf("\\");

		moveConsoleCursor(hangmanX + hangmanWidth + 2, hangmanY + 7);
		printf("\\");
	case 5:
		moveConsoleCursor(hangmanX + hangmanWidth, hangmanY + 5);
		printf("|");

		moveConsoleCursor(hangmanX + hangmanWidth - 1, hangmanY + 6);
		printf("/");

		moveConsoleCursor(hangmanX + hangmanWidth - 2, hangmanY + 7);
		printf("/");
	case 4:
		moveConsoleCursor(hangmanX + hangmanWidth + 1, hangmanY + 3);
		printf("_");

		moveConsoleCursor(hangmanX + hangmanWidth + 2, hangmanY + 4);
		printf("\\");
	case 3:
		moveConsoleCursor(hangmanX + hangmanWidth - 1, hangmanY + 3);
		printf("_");

		moveConsoleCursor(hangmanX + hangmanWidth - 2, hangmanY + 4);
		printf("/");
	case 2:
		moveConsoleCursor(hangmanX + hangmanWidth, hangmanY + 3);
		printf("|");

		moveConsoleCursor(hangmanX + hangmanWidth, hangmanY + 4);
		printf("|");
	case 1:
		moveConsoleCursor(hangmanX + hangmanWidth, hangmanY + 1);
		printf("|");

		moveConsoleCursor(hangmanX + hangmanWidth - 1, hangmanY + 2);
		printf("(_)");
		break;
	default:
		break;
	}
}

int validateHangmanSize(unsigned int* hangmanWidth, unsigned int* hangmanHeight) {
	if (*hangmanWidth < 5)
		*hangmanWidth = 5;

	if (*hangmanHeight < 8)
		*hangmanHeight = 8;
}

int moveConsoleCursor(unsigned int x, unsigned int y) {
	printf("\033[%d;%df", y, x);
}

int clearConsole() {
	printf("\033[2J"); /* Clear the entire screen. */
	moveConsoleCursor(0, 0);
	printf("A"); /* Move cursor to the top left hand corner */
}

int runGame(char word[], int x, unsigned int hangmanX, unsigned int hangmanY, unsigned int hangmanWidth, unsigned int hangmanHeight) {
	char symbol = NULL;
	int isLetterInWord;
	char message[] = "\n Please enter symbol: ";
	int moveCounter = 0;
	int correctLetterCounter = 0;
	int* correctLetterArray = (int*)malloc(strlen(word) * sizeof(char));
	for (int i = 0; i < strlen(correctLetterArray); i++) {
		correctLetterArray[i] = 0;
	}

	for ( int j = 0; j < 6; ){

		isLetterInWord = 0;

		moveConsoleCursor(0, hangmanY + hangmanHeight + 4);

		printf("%s", message);

		moveConsoleCursor(moveCounter + strlen(message), hangmanY + hangmanHeight + 5);

		rewind(stdin);

		scanf("%1c", &symbol);

		if (symbol >= 'a' && symbol <= 'z') {

			moveCounter += 2;

			for (int i = 0; i < strlen(word); i++) {
				if (symbol == word[i]) {
					moveConsoleCursor(x + i * 2, hangmanY + hangmanHeight + 3);
					printf("%c", word[i]);
					isLetterInWord = 1;
					if (correctLetterArray[i] != 1) {
						correctLetterCounter++;
					}
					correctLetterArray[i] = 1;
				}
			}
			if (isLetterInWord == 0) {
				j++;
				drawMan(j, hangmanX, hangmanY, hangmanWidth, hangmanHeight);
			}	
			printf("\n");
			if (correctLetterCounter == strlen(word)) {
				moveConsoleCursor(25, 5);
				printf("Yeeey! You win!");
				moveConsoleCursor(0, 20);
				exit(0);
				
			}
		}
	}
	moveConsoleCursor(25, 5);
	printf("YOU DIED");
}

int getRandomNumber(unsigned int minNumber, unsigned int maxNumber) {
	return rand() % (maxNumber - minNumber + 1) + minNumber;
}