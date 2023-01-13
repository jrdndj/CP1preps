#include<stdio.h>

int main(){
    int dLength;
    printf("Enter the length of the array: ");
    scanf("%d", &dLength);

    int dArr[dLength];
    char dTemp[dLength];

    for(int i=0; i<dLength; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &dArr[i]);
        dTemp[i]=(char)dArr[i];
    }

    int dCount1=0;
    int dCount2=0;
    for(int i=0; i<dLength; i++){
        for(int j=0; j<dLength; j++){
            dCount1=0;
            if(dTemp[j]!='*'){
                if(i==j){
                    dCount1++;
                }
            }
            if(dCount1>0)
                dCount2++;
            dTemp[j]='*';
        }
    }
    printf("%d\n", dCount2);
    


}