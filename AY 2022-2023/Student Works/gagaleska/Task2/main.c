#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//pointer for the drawing of the stick figure
	char *bodyparts[]={"|  0\0", "| / \\\0", "|  |\0", "| / \\\0"};
	int i=0;
	//declaring a random number for playing different words each time
	int randnum;
	randnum=rand()%3;
	//declaring letters for each word
	char letter1;
	char letter2;
	char letter3;

	printf("Hangman \n");
	
	//first word
	if(randnum==1)
	{
		//char array for storing the letters
		char word1[]={' ',' ',' ',' ','\0'};
		//we have six possibilities for entering letters as the bodyparts are totally 6
	    	while(i<6)
	    	{
	    		char example;
			printf("_ _ _ _ \n");
			//inserting a letter
			printf("Insert a letter \n");
			printf("%s \n",word1);
			scanf("%c", &letter1);
			scanf("%c", &example);
			//checking if the letters are correct using switch statement
			switch(letter1)
			{
			case 'c':
			case 'C':
				word1[0]='C';
				printf("%s\n",word1);
				break;
			case 'a':
			case 'A':
				word1[1]='a';
				printf("%s\n",word1);
				break;
			case 'f':
			case 'F':
				word1[2]='f';
				printf("%s\n",word1);
				break;
			case 'e':
			case 'E':
				word1[3]='e';
				printf("%s\n",word1);
				i=5;
				break;
			//if the letters are not correct we are drawing the stick figure with the help of pointer with for loop that goes till 6, i.e till every bodypart is drawn
			default:
			    {
			        for(int j=0;j<=i;j++)
			        	{
                	    			printf("%s",bodyparts[j]);
                	    			printf("\n");
			        	}
			        	i++;
			        	//when every bodypart is drawn the game is lost
					if(i>4)
					{
						printf("End game \n");
					}

		    }

		}
	    }
	}
	if(randnum==2)
	{
	     	char word2[]={' ',' ',' ',' ','\0'};
	    	while(i<6)
	    	{
	    		char example;
			printf("_ _ _ _ \n");
			printf("Insert a letter \n");
			printf("%s \n",word2);
			scanf("%c", &letter2);
			scanf("%c", &example);
			switch(letter2)
			{
			case 'm':
			case 'M':
				word2[0]='M';
				printf("%s\n",word2);
				break;
				
			case 'i':
			case 'I':
				word2[1]='i';
				printf("%s\n",word2);
				break;
			case 'l':
			case 'L':
				word2[2]='l';
				printf("%s\n",word2);
				break;
			case 'k':
			case 'K':
				word2[3]='k';
				printf("%s\n",word2);
				i=5;
				break;
				default:
			    	{
			        	for(int j=0;j<=i;j++)
			        	{
                	    			printf("%s",bodyparts[j]);
                	    			printf("\n");
			        	}
			        	i++;
					if(i>4)
					{
						printf("End game \n");
					}
			    	}
			}
	    }	
	}		
	if(randnum==3)
	{
		char word3[]={' ',' ',' ','\0'};
		while(i<6)
		{
        		char example;
        		printf("_ _ _ _ \n");
			printf("Insert a letter \n");
			printf("%s \n",word3);
			scanf("%c", &letter3);
			scanf("%c", &example);
			switch(letter3)
			{
			case 'c':
			case 'C':
				word3[0]='C';
				printf("%s\n",word3);
				break;
			case 'u':
			case 'U':
				word3[1]='u';
				printf("%s\n",word3);
				break;
			case 'p':
			case 'P':
				word3[2]='p';
				printf("%s\n",word3);
				i=4;
				break;
				default:
		    		{	
		        		for(int j=0;j<=i;j++)
		        		{
                    				printf("%s",bodyparts[j]);
                    				printf("\n");
		        		}
		        		i++;
					if(i>3)
					{
						printf("End game \n");
					}
		   		}
			}
		}
	}
	return 0;
}
