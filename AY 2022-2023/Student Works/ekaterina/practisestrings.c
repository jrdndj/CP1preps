#include<stdio.h>


// index: 0 1 2 3 4 
// mydata:a b c d \0
 int main()
 {
 	char mydata[5];
 	mydata[0]= 'a';
 	mydata[1]='b';
 	mydata[2]='c';
 	mydata[3]='d';
 	mydata[4]='\0';

 	printf("mydata[2] = %c\n",mydata[2]);
 	printf("\n%s\n", mydata);

 	char s[]="this is my string.";
 	 

 	for(int i=0;i<19;i++)
 	{
 		if(s[i]=='\0')
 	printf("s[%d] = nt\n", i); 
 	} //null terminator 
 	else{
 	printf("s[%d] = %c\n",i,s[i]);
 	}
 	printf("\n%s\n",s);
//only for some prcatice

 return 0;
 }
