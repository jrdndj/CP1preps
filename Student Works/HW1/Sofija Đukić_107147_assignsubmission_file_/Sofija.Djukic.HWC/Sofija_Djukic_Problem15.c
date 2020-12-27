#include <stdio.h>
#include <stdbool.h>

int main()
{
char sString[100];
int dCount=1;
int i;
int j;
int dLength;
bool check;
puts("\n Insert the word \n");
gets(sString);
dLength=strlen(sString);
for (i=1;i<dLength;i++){
    for(j=0;j<i;j++){
        if (sString[i]!=sString[j]) {check=true;}
        else check=false; break;} 
    if (check==true) {dCount++;}
    if (check==false) {break;}
}
    printf("%d",dCount);
    return 0;
    
    
}