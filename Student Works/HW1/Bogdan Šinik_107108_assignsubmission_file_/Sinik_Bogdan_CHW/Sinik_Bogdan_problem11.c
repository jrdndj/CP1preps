#include<stdio.h>

int main(){

    //declare variables
    int dR,dC,dInput, dMatrix1[10][10],dMatrix2[10][10],dMul[10][10];
    //promt the user
    printf("\n Enter two positive numbers R and C: ");
    scanf("%d %d",&dR,&dC);
    if(dR<1 || dR>=10 || dC<1 || dC>=10){
        printf("\nWrong input!");
        return 1;
    }
    printf("\n Enter elements of the first matrix (%d x %d): ",dR,dC);
    for (int i=0; i<dR; i++){
        for (int j=0; j<dC; j++){
            printf("\nEnter element e%d%d:",i+1,j+1);
            scanf("%d", &dMatrix1[i][j]);
        }
    }
    for (int i=0; i<dR; i++){
        for (int j=0; j<dC; j++){
            printf("%d ", dMatrix1[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<dC; i++){
        for (int j=0; j<dR; j++){
            printf("\nEnter element e%d%d:",i,j);
            scanf("%d", &dMatrix2[i][j]);
        }
    }
    for (int i=0; i<dC; i++){
        for (int j=0; j<dR; j++){
            printf("%d ", dMatrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n Multiply of the matrix: \n");    
    for(int i=0;i<dR;i++){    
        for(int j=0;j<dR;j++){           
            dMul[i][j]=0;       
        }    
    }    
    for(int i=0;i<dR;i++){    
        for(int j=0;j<dR;j++){     
            for(int k=0; k<dC; k++){      
            dMul[i][j]+=dMatrix1[i][k]*dMatrix2[k][j];    
            }
        }    
    }    
    for (int i=0; i<dR; i++){
        for (int j=0; j<dR; j++){
            printf("%d ", dMul[i][j]);
        }
        printf("\n");
    }
    return 0;
}