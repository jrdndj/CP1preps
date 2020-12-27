#include <stdio.h>
#include <stdbool.h>

 int
main () 
{
  
int dN;
  
int i, j;
  
int dCount = 0;
  
printf ("Please insert number of elements of array between 5 and 25");
  
scanf ("%d", &dN);
  
if (dN < 5 || dN > 25)
    {
      printf ("Error, check the number of elements");
    }
  
int arr[dN];
for (i=0;i<dN;i++) {
	scanf("%d",&arr[i]);}
	
for (i = 0; i < dN; i++){
   for (j = i+1; j <dN; j++){
       if (arr[i] == arr[j]) {dCount++; break;}}}
      
  
printf ("There are %d duplicates", dCount);
  
return 0;

 
 
}