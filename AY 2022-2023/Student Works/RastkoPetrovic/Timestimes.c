/*
this program prints 1x1 ala the wat until 10x10
*/

#include<stdio.h>

int main(){
	//defactor variable
	int dFactor1,dFactor2;
//for (; dFactor < 10; dFactor++)
//{	
//	printf("\n %d x %d = %d ", dFactor, dFactor,dFactor*dFactor);
//}
for (int dFactor1 = 1; dFactor1 <=10; ++dFactor1)
{
	for (int dFactor2 = 1; dFactor2 <=dFactor1; ++dFactor2)
	{
		printf(" %d ",dFactor1*dFactor2 );
	}
	printf("\n");
}

	return 1;
}//endmain


