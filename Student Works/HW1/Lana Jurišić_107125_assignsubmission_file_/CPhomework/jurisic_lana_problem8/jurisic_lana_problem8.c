 #include<stdio.h>
 int main()
 {
     int dN; //Standard number that user inpunts
     int i, j;
    printf("Welcome to Lana's school of math! \n Today we will repeat the multiplication table! \n Please enter any number from 1 to 10 that you wish to see be multiplies by the first 10 numbers: ");
    scanf("%d", &dN);
    if(dN>10||dN<1) //checking if the user entered the number between 1 and 10
    {
        printf("Lana's school of Math isn't that complex, come back later and maybe we will be!");
    }
    else
    {
    printf("The multiplication table that you asked for is: \n");
    //printing the collums

    for(i=0; i <=dN; i++)
    {
        if (i==0)
        {
            printf("%c\t", 'x');//we use \t here and later in code so we can create a table
        }
        else
        {
        printf ("%d\t", i);
        }
    }
    printf("\n"); //This is so we can have a cleaner table
    //printing the rows as well as the multiplication table
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i);
      for(j=1; j<=dN; j++)
      printf("%d\t", j*i);

      printf("\n");
    }
    }
    return 0;
 }
