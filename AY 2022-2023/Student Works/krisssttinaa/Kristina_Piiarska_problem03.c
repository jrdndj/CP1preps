#include <stdio.h>
int main() {
int dstartDay, dnumDays, dCtr;

//ask the first day of month
printf("Which day of the week does the month start?\n");
printf("Input figure among following figures.\n");
printf("0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
scanf("%d", &dstartDay);

//ask the number of days in month
printf("How many days does the month have?\n");
scanf("%d", &dnumDays);

//print structure of calendar
printf("---------------------------\n");
printf("Sun Mon Tue Wed Thu Fri Sat\n");

//print the appropriate number of spaces to start the counting 
//with the first day of the month
for (dCtr = 0; dCtr < dstartDay; dCtr++) {
printf("    ");
}

//print the dates
for (dCtr = 1; dCtr <= dnumDays; dCtr++) {
printf("%3d ", dCtr);
if ((dstartDay + dCtr) % 7 == 0) {
printf("\n");
}
}
printf("\n");
return 0;
}//endofmain