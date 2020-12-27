#include<stdio.h>

int main(){
    //declare variables
    char cInput,cCurrentFloor,cAnswer;
    cCurrentFloor='G';
    //promt the user
    while(cAnswer!='y'){
        printf("\n Good afternoon human...I am your elevator assistant...We are at floor %c...Choose which floor you would like to go...\n G for ground floor, 1 for 1st, 2 for second, 3 for third, and 4 for 4th floor...\n", cCurrentFloor);
        scanf(" %c", &cInput);
        if(cInput!=cCurrentFloor){
            switch (cInput){
                case 'G':
                    printf("Ok...we are going to the ground floor...\n");
                    printf("FEW MOMENTS LATER...\n");
                    printf("Here we are boss!\n");
                    cCurrentFloor='G';
                    break;
                case '1':
                    printf("Ok...we are going to the 1st floor...\n");
                    printf("FEW MOMENTS LATER...\n");
                    printf("Here we are boss!\n");
                    cCurrentFloor='1';
                    break;
                case '2':
                    printf("Ok...we are going to the 2nd floor...\n");
                    printf("FEW MOMENTS LATER...\n");
                    printf("Here we are boss!\n");
                    cCurrentFloor='2';
                    break;
                case '3':
                    printf("Ok...we are going to the 3rd floor...\n");
                    printf("FEW MOMENTS LATER...\n");
                    printf("Here we are boss!\n");
                    cCurrentFloor='3';
                    break;
                case '4':
                    printf("Ok...we are going to the 4th floor...\n");
                    printf("FEW MOMENTS LATER...\n");
                    printf("Here we are boss!\n");
                    cCurrentFloor='4';
                    break;
                default:
                printf("I gave you options dont be rude...");
                    break;
            }
        }else{
            printf("We are already on the floor %c ",cInput);
        }
        printf("Do you want to leave? y/n\n");
        scanf(" %c", &cAnswer);
    }//end while
    printf("Thank you for using me :D");
    return 0;
}