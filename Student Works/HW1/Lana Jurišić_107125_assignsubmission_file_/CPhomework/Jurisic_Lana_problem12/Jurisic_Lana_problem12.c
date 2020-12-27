//I tried to be funny and make this an interactive game, but I get it if I'm not, at least I had fun making this
//If you exclude the "funny", this still is a code that will convert your number into roman number
//I'm not a good historian so I don't know if 1000 was lots of money, if it was ignore that mistake
//Romans did not have a number for 0, so it will print nothing if the user types number 0
#include <stdio.h>

int main()
{
    int dN; //a number we are converting
    printf("Oh no! You are stuck in Ancient Rome and you need to tell Ceasar how much money you have by writting it in roman decimals or else you will be stabbed instead of him. Lukcy for you, you have this code so you can save yourself. However if you tell him that you have more than 1000 or less than 1 money, you will not have a happy ending. So please say you have between 0 and 1000 money? coins? \n");
    scanf("%d", &dN);
    if(dN<0 ||dN>1000)  //we use this to check if the user has entered less than 0 and more than 1000
    {
        printf("Ceasar was not happy with amount of money you had and decided to ship you to Egypt so Cleopatra can deal with you");
    }
    else
    {
    printf("Ceasar understands that you are poor because you have this much money: ");
    while(dN >= 0)
    {

        if (dN == 1000)
        {
           printf("m"); //because 1000 = m, and for everything else. Their roman counterpart is written in print
           return 0; //I put this return only here, because the code kept breaking if the number I entered was 1000
        }

        else if (dN >= 900)
        {
           printf("cm");
           dN -= 900;
        }

        else if (dN >= 500)
        {
           printf("d");
           dN -= 500;
        }

        else if (dN >= 400)
        {
           printf("cd");
           dN -= 400;
        }

        else if (dN >= 100)
        {
           printf("c");
           dN -= 100;
        }

        else if (dN >= 90)
        {
           printf("xc");
           dN -= 90;
        }

        else if (dN >= 50)
        {
           printf("l");
           dN -= 50;
        }

        else if (dN >= 40)
        {
           printf("xl");
           dN -= 40;
        }

        else if (dN >= 10)
        {
           printf("x");
           dN -= 10;
        }

        else if (dN >= 9)
        {
           printf("ix");
           dN -= 9;
        }

        else if (dN >= 5)
        {
           printf("v");
           dN -= 5;
        }

        else if (dN >= 4)
        {
           printf("iv");
           dN -= 4;
        }

        else if (dN >= 1)
        {
           printf("i");
           dN -= 1;
        }
    }
    }

    return 0;
}
