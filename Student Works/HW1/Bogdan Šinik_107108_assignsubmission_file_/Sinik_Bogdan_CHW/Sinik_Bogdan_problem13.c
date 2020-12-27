#include<stdio.h>

int main(){

//declaring variables
int dSize, dInput,j,k;

//promt the user
printf("\n Input the size of an array: ");
scanf("%d", &dSize);
int dArray[1000], dOdd[1000], dEven[1000];
printf("\n Elements to be inserted in an array: \n");
//for loop
for(int i=0; i<dSize; i++){
scanf("%d",&dArray[i]);

}//end for
j=k=0;
for(int i=0; i<dSize; i++){
    if( dArray[i] % 2 == 0){
        dEven[j++] = dArray[i];
    }
    else{
        dOdd[k++]=dArray[i];
    }
}
//print arrays
printf("\n Array of even numbers: ");
for(int i=0; i<j; i++){
    printf("%d ", dEven[i]);
}
printf("\n Array of odd numbers: ");
for(int i=0; i<k; i++){
    printf("%d ", dOdd[i]);
}

    return 0;
}