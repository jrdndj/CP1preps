#include<stdio.h>
#include<string.h>

char sOriginal[100]; // original array
int substring(int f,int l); // functions that cheks if substring has repeating chars
int check(char *s,char c);

int main(int argc, char const *argv[])
{
	printf("Provide us a string at most 100 chars long\n");
	fgets(sOriginal,100,stdin);
	int dLen = strlen(sOriginal);
	dLen--; // for some reasone strlen returns me for 1 greater length expected so i deccreased it by 1
	int dLongest;
	for (int i = dLen; i > 0; --i)// i represents every possible length of substring (starting from longest) 
	{                             // notice that original string is also considered as substring of itself
		for (int j = 0; j <= dLen-i; j++) // dLen -i last starting index for making i-long substring
		{// checking substring sOriginal[j :j+i(not included)]
			if (substring(j,j+i) == 0)
			{// substring hasn't repeating characters
				dLongest = i;
				goto end; // print resulr and exit program
			}
		}
	}
	end:{
	printf("Lenght of longest substring of without repeating chars: %d \n",dLongest);
	return 0;}
}

int substring(int f,int l){
	char sSeen[l-f]; // tracker array (stores already seen chars)
	memset(sSeen,0,strlen(sSeen)); // makes array empty each time function is called 
	int c = 0;
	for (int i = f; i < l; ++i) // iterate through indexes of original sring with characters included in substring
	{   if (check(sSeen,sOriginal[i]) == 0)// character not seen yet (isn't in tracker array)
		{
			sSeen[c] = sOriginal[i]; // insert character in tracker array
			c++;
		}
		else{
			return 1;
		}

	}
	return 0; // substring doesnt't contain repeating chars
}

int check(char *s,char c)
{
	for (int i = 0; i < strlen(s); ++i)
	{
	 if (s[i] == c)
	 	return 1;
	}
	return 0;
 }