/*
    C program that for given integer N outputs the

                                        David Đorđević 89201076
 */
#include <stdio.h>
#include <math.h>


//declaring the function
double  factoriel(int dNumb );

void main() {

    int dT;     //initialising the variable dT
    puts("Please enter T (number of inputs): ");
    scanf("%d", &dT);       //saving input into variable dT
    while (dT != 0) {               //while loop to repeat the process
        int dN;
        int dK = 0;
        puts("Please enter integer N:");
        scanf("%d",&dN);    //saving input into variable dN
        int i;
        while (i != 0) {    //endless loop(maybe not the best solution :/ )
            int result = fmod(factoriel(dK), (factoriel(dN) * dN)); //comparing two double values
            if (result == 0) {      //K! is multiple of N!^2 if their remainder  equals to zero
                printf("That is the number: %ld\n", dK);    //printing the solution
                break;      //breaking endless loop
            }
            dK++;       //increasing the K value every time K does not match the previous if function
        }
        dT--;       //decreasing the value T every time the previous process is done
    }
}

//defining the function
double factoriel(int dNumb) {

    if (dNumb == 0) {               //in case value equals to 0
        return 1;
    } else if (dNumb < 0) {                                   //The factorial function is defined for all positive integers
        puts("Please enter positive integer number!");
    } else {
        return dNumb * factoriel(dNumb - 1);        //recursive function using to calculate the factorial
    }

}

