

int main()
{
//declare variables
int Da[100],Di,Dn,Deven[100], Dodd[100], even=0,odd=0;
     //prompt user for input
     printf("Enter size of array: ");
    scanf("%d",&Dn);

     //user inputs the value
    printf("Enter %d elements in the array : ", Dn);
    for(Di=0;Di<Dn;Di++)
    {
        scanf("%d", &Da[Di]);
    }//end for

    //spliting the elements in different arrays
    for(Di=0;Di<Dn;Di++)

    { if(Da[Di]%2==0){ //conditional if

    Deven[even]=Da[Di];
        even++;
    }//end if
    else{
        Dodd[odd]=Da[Di];
        odd++;

    }//end else
    }//end for
    //printing the values
    printf("\nEven elements in array are: ");
    for(Di=0;Di<even;Di++){
        printf(" %d ",Deven[Di]);
    }//end for
    printf("\nOdd elements in array are: ");
    for(Di=0;Di<odd;Di++){
        printf(" %d ",Dodd[Di]);
    }//end for
    return 0;
}
