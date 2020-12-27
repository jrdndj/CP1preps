/*
Problem 9
*/
#include <stdio.h>

int main() {

    int month, week, day;

    printf("Enter month: ");
    scanf("%d", &month);
    printf("[ 1=Sunday  2=Monday 3=Tuesday 4=Wednesday ]\n[      5=Thursday 6=Friday 7=Saturday      ]\n");
    printf("Enter starting day of the week: ");
    scanf("%d", &week);

    if (week == 1 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 7 || day == 14 || day == 21 || day == 28)
                    printf("%3d\n", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 7 || day == 14 || day == 21 || day == 28)
                    printf("%3d\n", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 7 || day == 14 || day == 21 || day == 28)
                    printf("%3d\n", day);
                else
                    printf("%3d", day);

    else if (week == 2 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 6 || day == 13 || day == 20 || day == 27)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("   %3d", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 6 || day == 13 || day == 20 || day == 27)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("   %3d", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 6 || day == 13 || day == 20 || day == 27)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("   %3d", day);
                else
                    printf("%3d", day);

    else if (week == 3 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 5 || day == 12 || day == 19 || day == 26)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("      %3d", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 5 || day == 12 || day == 19 || day == 26)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("      %3d", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 5 || day == 12 || day == 19 || day == 26)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("      %3d", day);
                else
                    printf("%3d", day);

    else if (week == 4 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 4 || day == 11 || day == 18 || day == 25)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("         %3d", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 4 || day == 11 || day == 18 || day == 25)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("         %3d", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 4 || day == 11 || day == 18 || day == 25)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("         %3d", day);
                else
                    printf("%3d", day);


    else if (week == 5 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 3 || day == 10 || day == 17 || day == 24 || day == 31)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("            %3d", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 3 || day == 10 || day == 17 || day == 24)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("            %3d", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 3 || day == 10 || day == 17 || day == 24)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("            %3d", day);
                else
                    printf("%3d", day);

    else if (week == 6 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 2 || day == 9 || day == 16 || day == 23 || day == 30)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("               %3d", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 2 || day == 9 || day == 16 || day == 23 || day == 30)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("               %3d", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 2 || day == 9 || day == 16 || day == 23)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("               %3d", day);
                else
                    printf("%3d", day);

    else if (week == 7 && month > 0 && month <= 12)
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            for (day = 1; day <= 31; day++)
                if (day == 8 || day == 15 || day == 22 || day == 29)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("                  %3d\n", day);
                else
                    printf("%3d", day);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            for (day = 1; day <= 30; day++)
                if (day == 8 || day == 15 || day == 22 || day == 29)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("                  %3d\n", day);
                else
                    printf("%3d", day);
        else
            for (day = 1; day <= 29; day++)
                if (day == 8 || day == 15 || day == 22 || day == 29)
                    printf("%3d\n", day);
                else if (day == 1)
                    printf("                  %3d\n", day);
                else
                    printf("%3d", day);

    else printf("Invalid Input!");

    getch();
}