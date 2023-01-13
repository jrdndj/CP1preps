#include<stdio.h>

int b=0;   //global variables, b represents the floor you are on, a represents floor you want to go on
int a;


void elevator(int g){   //void function
if(a==-1||a==-2||a==-3||a==1||a==2||a==3||a==4||a==5||a==0){  //this if statement checks if you've inserted a correct input

if(g>=b){  // this is if you want to go up, or stay at the same level
for(int i=b;i<=g;i++){
printf("Right now floor: %d\n",i);
b=i;}//for loop
}

else{  //this is if you want to go down
for(int i=b;i>=g;i--){
printf("Right now floor: %d\n",i);
b=i;}
}

char ans;
printf("\nDo you want to continue?(y for yes,n for no)\n");   //asking you if you want to continue using elevator
scanf(" %c",&ans);
getchar();
if(ans=='y'){    //this is for yes
printf("Select the floor: \n");
scanf("%d",&a);
elevator(a);
}

else if(ans=='n'){    //this is for no(end of the "simulation")
printf("Thank you for your ride.\n");
printf("\n-------------------------\n");
}
}

else{                    //this is for inserting wrong floor number
printf("Wrong input,please select again!\n");
scanf("%d",&a);
elevator(a);
}


}//end of void function elevator




int main(){  //main function
printf("\n-------------------------\n");
printf("Right now you are on the ground floor\n");
printf("Select the floor 1,2,3,4 or 5, or go to basement -1,-2 or -3\n");
scanf("%d",&a);
elevator(a);
return 0;
}
