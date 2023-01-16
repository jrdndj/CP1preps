// #include <stdio.h>
// #include <string.h>

// void draw_hangman(int num_incorrect_guesses) {
//   switch (num_incorrect_guesses) {
//   case 0:
//     printf("\n\n\n\n\n\n");
//     break;
//   case 1:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     break;
//   case 2:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     printf("    |\n");
//     break;
//   case 3:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     printf("   /|\n");
//     break;
//   case 4:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     printf("   /|\\\n");
//     break;
//   case 5:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     printf("   /|\\\n");
//     printf("   /\n");
//     break;
//   case 6:
//     printf("\n\n\n\n\n\n");
//     printf("    O\n");
//     printf("   /|\\\n");
//     printf("   / \\\n");
//     break;
//   }
// }

// int main() {
//   char word[20];
//   char guesses[26];
//   int num_guesses = 0;
//   int correct_guesses = 0;
//   int max_guesses = 0;
//   int word_length;
//   int num_incorrect_guesses = 0;
//   int i, guess_is_correct = 0;

//   printf("Enter the word to be guessed: ");
//   scanf("%s", word);
//   word_length = strlen(word);

//   // Print underscores to represent unguessed letters
//   for (i = 0; i < word_length; i++) {
//     printf("_ ");
//   }
//   printf("\n");

//   while (num_incorrect_guesses < max_guesses && correct_guesses < word_length) {
//     char guess;
//     printf("Enter a guess: ");
//     scanf(" %c", &guess);

//     // Check if the guess has already been made
//     for (i = 0; i < num_guesses; i++) {
//       if (guess == guesses[i]) {
//         printf("You already guessed that letter. Try again.\n");
//         continue;
//       }
//     }
//     guesses[num_guesses++] = guess;
//     guess_is_correct = 0;
//     // Check if the guess is in the word
//     for (i = 0; i < word_length; i++) {
//       if (guess == word[i]) {
//         printf("%c ", guess);
//         correct_guesses++;
//         guess_is_correct = 1;
//       }
//     }
//     if (!guess_is_correct) {
//       num_incorrect_guesses++;
//       draw_hangman(num_incorrect_guesses);
//     }
//     if (correct_guesses == word_length) {
//       printf("you win\n");
//       break;
//     }
//     if (num_incorrect_guesses == max_guesses) {
//       printf("you lose\n");
//       break;
//     }
//   }
//   return 0;
// }
