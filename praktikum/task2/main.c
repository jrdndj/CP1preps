#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void hangman();

char toLowerCase(char i);

int isLetterGuessed(char crke[100], char *besede[3], int i, int j);

int isLetterInAWord(char crka, char *string);

char *besede[] = {
        "abruptly",
        "absurd",
        "abyss",
        "affix",
        "askew",
        "avenue",
        "awkward",
        "axiom",
        "azure",
        "bagpipes",
        "bandwagon",
        "banjo",
        "bayou",
        "beekeeper",
        "bikini",
        "blitz",
        "blizzard",
        "boggle",
        "bookworm",
        "boxcar",
        "boxful",
        "buckaroo",
        "buffalo",
        "buffoon",
        "buxom",
        "buzzard",
        "buzzing",
        "buzzwords",
        "caliph",
        "cobweb",
        "cockiness",
        "croquet",
        "crypt",
        "curacao",
        "cycle",
        "daiquiri",
        "dirndl",
        "disavow",
        "dizzying",
        "duplex",
        "dwarves",
        "embezzle",
        "equip",
        "espionage",
        "euouae",
        "exodus",
        "faking",
        "fishhook",
        "fixable",
        "fjord",
        "flapjack",
        "flopping",
        "fluffiness",
        "flyby",
        "foxglove",
        "frazzled",
        "frizzled",
        "fuchsia",
        "funny",
        "gabby",
        "galaxy",
        "galvanize",
        "gazebo",
        "giaour",
        "gizmo",
        "glowworm",
        "glyph",
        "gnarly",
        "gnostic",
        "gossip",
        "grogginess",
        "haiku",
        "haphazard",
        "hyphen",
        "iatrogenic",
        "icebox",
        "injury",
        "ivory",
        "ivy",
        "jackpot",
        "jaundice",
        "jawbreaker",
        "jaywalk",
        "jazziest",
        "jazzy",
        "jelly",
        "jigsaw",
        "jinx",
        "jiujitsu",
        "jockey",
        "jogging",
        "joking",
        "jovial",
        "joyful",
        "juicy",
        "jukebox",
        "jumbo",
        "kayak",
        "kazoo",
        "keyhole",
        "khaki",
        "kilobyte",
        "kiosk",
        "kitsch",
        "kiwifruit",
        "klutz",
        "knapsack",
        "larynx",
        "lengths",
        "lucky",
        "luxury",
        "lymph",
        "marquis",
        "matrix",
        "megahertz",
        "microwave",
        "mnemonic",
        "mystify",
        "naphtha",
        "nightclub",
        "nowadays",
        "numbskull",
        "nymph",
        "onyx",
        "ovary",
        "oxidize",
        "oxygen",
        "pajama",
        "peekaboo",
        "phlegm",
        "pixel",
        "pizazz",
        "pneumonia",
        "polka",
        "pshaw",
        "psyche",
        "puppy",
        "puzzling",
        "quartz",
        "queue",
        "quips",
        "quixotic",
        "quiz",
        "quizzes",
        "quorum",
        "razzmatazz",
        "rhubarb",
        "rhythm",
        "rickshaw",
        "schnapps",
        "scratch",
        "shiv",
        "snazzy",
        "sphinx",
        "spritz",
        "squawk",
        "staff",
        "strength",
        "strengths",
        "stretch",
        "stronghold",
        "stymied",
        "subway",
        "swivel",
        "syndrome",
        "thriftless",
        "thumbscrew",
        "topaz",
        "transcript",
        "transgress",
        "transplant",
        "triphthong",
        "twelfth",
        "twelfths",
        "unknown",
        "unworthy",
        "unzip",
        "uptown",
        "vaporize",
        "vixen",
        "vodka",
        "voodoo",
        "vortex",
        "voyeurism",
        "walkway",
        "waltz",
        "wave",
        "wavy",
        "waxy",
        "wellspring",
        "wheezy",
        "whiskey",
        "whizzing",
        "whomever",
        "wimpy",
        "witchcraft",
        "wizard",
        "woozy",
        "wristwatch",
        "wyvern",
        "xylophone",
        "yachtsman",
        "yippee",
        "yoked",
        "youthful",
        "yummy",
        "zephyr",
        "zigzag",
        "zigzagging",
        "zilch",
        "zipper",
        "zodiac",
        "zombie"
};


void print_hangman(int tries_left) {
    switch (tries_left) {
        case 0:
            puts("┏━━━╤━");
            puts("┃┃    ");
            puts("┃┃");
            puts("┃┃");
            puts("┃┃");
            puts("┻┻━━━━━━━");
            break;
        case 1:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃");
            puts("┃┃");
            puts("┃┃");
            puts("┻┻━━━━━━━");
            break;
        case 2:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃  | ");
            puts("┃┃    ");
            puts("┃┃    ");
            puts("┻┻━━━━━━━");
            break;
        case 3:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃ ╲| ");
            puts("┃┃    ");
            puts("┃┃    ");
            puts("┻┻━━━━━━━");
            break;
        case 4:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃ ╲|╱");
            puts("┃┃    ");
            puts("┃┃    ");
            puts("┻┻━━━━━━━");
            break;
        case 5:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃ ╲|╱");
            puts("┃┃  | ");
            puts("┃┃    ");
            puts("┻┻━━━━━━━");
            break;
        case 6:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃ ╲|╱");
            puts("┃┃  | ");
            puts("┃┃ ╱  ");
            puts("┻┻━━━━━━━");
            break;
        case 7:
            puts("┏━━━╤━");
            puts("┃┃  O ");
            puts("┃┃ ╲|╱");
            puts("┃┃  | ");
            puts("┃┃ ╱ ╲");
            puts("┻┻━━━━━━━");
            break;
    }
}

int main() {
    int random = rand();
    srand ( time(NULL) );
    int i = rand() % 200;
    int failedAttempts = 0;
    int steviloPoskusov = 0;
    char crke[100] = "";
    char crka[2];
    while(1){
        steviloPoskusov++;
        strcat(crke, crka);
        int letterGuessed = 0;
        for (int j = 0; j < strlen(besede[i]); j++) {
            int showLetter = isLetterGuessed(crke, &besede, i, j);
            if(showLetter){
                letterGuessed++;
                printf(" %c ",besede[i][j]);
            } else{
                printf(" - ");
            }
        }

        if(letterGuessed == strlen(besede[i])){
            printf("\ncongrats you have guessed all characters: YOU won :)");
            return 0;
        }
        printf("\nguess the letter: ");
        scanf(" %c", &crka);
        if(!isLetterInAWord(crka[0], besede[i])){
            print_hangman(failedAttempts);
            failedAttempts++;
            if(failedAttempts == 8){
                printf("\nout of attempts: YOU LOST :(");
                return 0;
            };
        };
    }
    strcpy(crka, "");

}

int isLetterInAWord(char crka, char *beseda) {
    for (int j = 0; j < strlen(beseda); j++) {
        if(toLowerCase(beseda[j]) == toLowerCase(crka)){
            return 1;
        };
    }
    return 0;
}

int isLetterGuessed(char crke[100], char *besede[3], int i, int j) {
    int showLetter = 0;
    for (int k = 0; k < strlen(crke); ++k) {
        if(toLowerCase(besede[i][j]) == toLowerCase(crke[k])){
            showLetter = 1;
            break;
        }
    }
    return showLetter;
}

char toLowerCase(char chr){
    if (chr >= 65 && chr <= 90){
        chr = chr + 32;
    }
    return chr;
}
