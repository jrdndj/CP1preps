#include<stdio.h>
#include<string.h>

int main(){

	char string[100];

	printf("\nPlease enter the string");
	scanf("%s",&string);
 
    char rem[20]; 
    int i,j,lastpos=-1; 
 
    for(i=0;i<strlen(string);++i) 
    { 
        for(j=0;j<=lastpos;++j) 
            if(string[i]==rem[j]) 
                break; 
        if(j>lastpos) 
        { 
            lastpos++; 
            rem[lastpos]=string[i]; 
        } 
 
    } 
    ++lastpos; 
    rem[lastpos]='\0'; 
	int len=strlen(rem);
    printf(" String: %s \n duplicate removed string: %s",string,rem);
	printf("\n THe length of the longest substring is %d",len); 


return 0;
}//end main