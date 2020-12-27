#include<stdio.h>
int main(){
   
    int arr[25];
        int i, j, size, count = 0;

        /* Input size of array */
        printf("Enter size of the array : ");
        scanf("%d", &size);


        /* Input elements in array */
        printf("Enter elements in array : ");
        for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }


        if (size < 25 && size > 5){
        /*
        * Find all duplicate elements in array
        */
        for(i=0; i<size; i++)
        {
            for(j=i+1; j<size; j++)
            {
                /* If duplicate found then increment count by 1 */
                if(arr[i] == arr[j])
                {
                    count++;
                    break;
                }
            }
        }

        printf("\nTotal number of duplicate elements found in array = %d", count);
            
        }else{
            printf("\n You must input more then 5 elements but less then 25");
            return 0;
        }//endif

      

    






    return 0;
}