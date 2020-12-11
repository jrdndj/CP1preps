/*
    C program will use different C-string functions

    puts, gets, strlen, toupper, strcmp, strstr, strcat
*/
#include<stdio.h> 
#include<string.h> //the string operations 
#include<ctype.h>  //toupper()

int main(){
    //declare variables
    char sFinal[100], sInput[50];
    char sFName[12], sLName[20], sBioInfo[12];
    char cBlood; 
    float fHeight, fWeight;
    int dLen, dfnameUB, dfnameLB, dlnameLB; 

    //we will come up with a sequence that involves name, blood type, height, weight
    puts("\n Please enter your full name (first last name): ");
    //we use gets to get a full name 
    gets(sInput);

    printf("\n Your full name is %s", sInput );

    /* strlen( string );
    */
    dLen = strlen(sInput);
    //split the first and last name one word first name and one word last name using for
    dfnameLB = 0;
    for( int dCtr = 0; dCtr < dLen; dCtr++ ){
        if( sInput[dCtr] == ' '){
            dfnameUB = dCtr - 1; //we see a space so the prev char is UB 
            printf("\ndfname is : %d", dfnameUB);
            //the next character is the LB
            dlnameLB = dCtr + 1;
            printf("\ndfnameLB is : %d", dlnameLB); 
            break;
        }//endif
    }//endfor

    //we need to assign sfname [dfnameLB, dfname, UB] slanme [dlameLB, strlen]
    printf("\ndfname is : %d", dfnameUB);
    for( int dCtr = 0; dCtr <= dfnameUB; dCtr++){
        sFName[dCtr] = sInput[dCtr];
    }//asign the fname

    //we need to assign sfname [dfnameLB, dfname, UB] slanme [dlameLB, strlen]
    printf("\ndfnameLB is : %d", dlnameLB);
    int ctr = 0;
    for( int dCtr = dlnameLB; dCtr <= dLen; dCtr++){
        sLName[ctr++] = sInput[dCtr];
    }//asign the lname

    printf("\n First name is %s \n Last name is %s \n. ", sFName, sLName);

    return 0; 
}