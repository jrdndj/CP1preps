    #include<stdio.h>

    /*The program should allow the user to input a value for variables a, b, c and be able to determine
    if the sides/angles represent a Right Triangle, Acute Triangle or an Obtuse Triangle
  */

    int main(){

    //Declare variables
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
    int dAsqrt;
    int dBsqrt;
    int dCsqrt;

    //User entry
    printf("\n Please enter side a: ");
    scanf("%d",&a);
    printf("\n Please enter side b: ");
    scanf("%d",&b);
    printf("\n Please enter angle C: ");
    scanf("%d",&C);

    //Calculate the right angle
    If(C==90){
        printf("\nRight triangle: ");
    }//End of right triangle

    //Calculate the obtuse angle
    If(C>90){
        printf("\nObtuse triangle: ");
    }//End of obtuse triangle

    //Calculate side c
    dCsqrt=(a*a+b*b)-(2*a*b*cos(C));

    //Compute the remaining angles
    A=cos((b*b+c*c-a*a)/(2*b*c));
    B=cos((a*a+c*c-b*b)/(2*a*c));

    //Checking A&B angles
    If(A>0&&B>0){
        printf("\nAcute triangle: ");
    }//End checking


return 0;
}//End
