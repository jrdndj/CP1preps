

int main()
{
//declare variables
int dn, i=0,counter=0,dk;
float  fav=0;


do{ //the program asks the user for input until he inputs 0
    printf("Enter a number u want to compute:");
    scanf("%d",&dn);
     if(dn<0){ //condition that allows only positive integers
        printf("You cant do that.");
     }//end if
    else{
    fav=fav+dn;
    counter++;
    }//end else
}while(dn!=0);//end do while

if(fav!=0){//condition if average is not 0 print it
   fav=fav/(counter-1);
   printf("\nThe average is: %f",fav);

    }//end if
    else{
        printf("There is no average");
    }//end else

    return 0;
}//end main
