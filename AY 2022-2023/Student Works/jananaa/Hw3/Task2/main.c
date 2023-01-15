//I've made this project in first few weeks in the "Structured Programming in C" course so the code isnt so clean XD
//Enjoy the game by pressing "Run" 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
void clrscr(){
	
}
int main() {
	
	printf("Welcome to Hangman Game!\n");
	printf("Rules:\n");
	printf("1. A word  will be given that you need to guess\n");
	printf("2. Try to guess a letter of the word by entering it into the terminal\n");
	printf("3. If the letter is correct, the blank will be filled in\n");
	printf("4. If the letter is incorrect, a part of a stick figure is drawn");
	clrscr();
	int quit=1;
	while(quit!=0)
	{
		
		//printf("Please wait!");
		//clrscr();
    	//srand(time(NULL));
    	
    	int letters=1;
    	char* word=" ";
    	
    	switch(rand()%20){
    		case 1: word="cook"; letters = 4; break;
    		case 2: word="cat"; letters =3; break;
    		case 3: word="path"; letters= 4; break;
    		case 4: word="game"; letters=4; break;
    		case 5: word="understand"; letters=10; break;
    		case 6: word="family"; letters=6; break;
    		case 7: word="pen"; letters=3; break;
    		case 8: word="coffee"; letters=6; break;
    		case 9: word="email"; letters=5; break;
    		case 10: word="facebook"; letters=8; break;
		    case 11: word="football"; letters=8; break;
		    case 12: word="online"; letters=6; break;
		    case 13: word="come"; letters=4; break;
		    case 14: word="please"; letters=6; break;
		    case 15: word="introduction"; letters=12; break;
		    case 16: word="project"; letters=7; break;
		    case 17: word="create"; letters=6; break;
		    case 18: word="programming"; letters=11; break;
		    case 19: word="warrior"; letters=7; break;
		    case 20: word="weird"; letters=5; break;
		    case 21: word="handsome"; letters=8; break;
		    case 22: word="amazing"; letters=7; break;
		    default: word="knife"; letters=5; break;
    	}

    	printf("Try guessing the word by guessing the letters: \n");
    	char answer[100];
    	char wanswer[100]=" ";
    	strcpy(answer,"");
		for(int i=1;i<=letters;i++){
	    	strcat(answer,"_ ");
	    	printf("_ ");
		}
	
		int b=0, c=0, p=1, finish=0;

		while(c<5)
		{   
	    	printf("\nEnter a letter to guess....");
	    	char letter;
	    	scanf("%s",&letter);
	    	clrscr();
	    	
	    	if(strchr(word,letter)!=0){
	        	for(int j=0;j<=letters-1;j++){
	            	if(letter==word[j]){
	                p=j*2;
	                if(answer[p]!=letter) finish++;
	                answer[p]=letter;
	           	}
	        }
	        
	        printf("%s\n",answer);
	        printf("Correct Guess!\n");
	        
	        if(finish==letters) {break; b=0;}
	        if(b!=0) printf("\nLetters you have used  %s",wanswer);
	        if(c>0)c--;
	    
	    }else{

	    	wanswer[2*b]=letter;
	    	strcat(wanswer," ");
	    	b++;
	    	clrscr(); 
	    	c++;
	       	
	       	if(c==1) printf("\no-----------\n|          |\n|\n|\n|\n|\n|\n|\n");
	       	if(c==2) printf("o-----------\n|          |\n|          O\n|\n|\n|\n|\n|\n"); 
	       	if(c==3) printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|\n|\n|\n");  
	       	if(c==4) printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|         / \\\n|\n|\n");  
	       	if(c==5) printf("o-----------\n|          |\n|          O\n|         \\|/\n|          |\n|         / \\\n|\n|\n");
	       	if(c!=5){ 
	       		printf("\n%s\n",answer);
	       		printf("\nLetters you have used  %s",wanswer);
	    	}
	    }
	}

    if(finish==letters) {    
       	printf("\nYou won!\n",word);
    }
   	else{
    	printf("\nYou lost! The word was \"%s\" \n\n",word); 
	}

    return 0;
}
}