    #include<stdio.h>
    int main() {
        //declar the variable
        int brutus=0;

        printf("\nWrite a number you want to converte to Roman Numeral Format!\n");
        scanf("%d", &brutus);

        if (brutus > 1000 || brutus < 0) {
            printf("\nIf you must break the law, do it to seize power : in all other cases observe it.\n");
        }
        while (brutus != 0) {
            
            if (brutus == 1000) {

                printf("M");
                brutus -= 1000;

            }

            else if (brutus >= 900 && brutus < 1000) {

                printf("CM");
                brutus -= 900;
            }

            else if (brutus >= 500 && brutus < 1000) {

                printf("D");
                brutus -= 500;
            }

            else if (brutus >= 400 && brutus < 1000) {

                printf("CD");
                brutus -= 400;
            }

            else if (brutus >= 100 && brutus < 1000) {

                printf("C");
                brutus -= 100;
            }

            else if (brutus >= 90 && brutus < 1000) {

                printf("XC");
                brutus -= 90;
            }

            else if (brutus >= 50 && brutus < 1000) {

                printf("L");
                brutus -= 50;
            }

            else if (brutus >= 40 && brutus < 1000) {

                printf("XL");
                brutus -= 40;
            }

            else if (brutus >= 10 && brutus < 1000) {

                printf("X");
                brutus -= 10;
            }

            else if (brutus >= 9 && brutus < 1000) {

                printf("IX");
                brutus -= 9;
            }

            else if (brutus >= 5 && brutus < 1000) {
                printf("V");
                brutus -= 5;
            }

            else if (brutus >= 4 && brutus < 1000) {
                printf("IV");
                brutus -= 4;
            }

            else if (brutus >= 1 && brutus < 1000) {

                printf("I");
                brutus -= 1;
            }
           
        }//there is a lot of ifs going on
        
        
        
	    return 0;
    }