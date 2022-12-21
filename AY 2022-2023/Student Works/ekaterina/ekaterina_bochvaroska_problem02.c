#include<stdio.h>
int main(){
	//declaring some variables 
	int dn;
	int sum=0;
	int dCtr=0;
	float fAvg;

	printf("\n Please enter an integer  for n:");
	scanf("%d",&dn);

	
	while(dn!=0)
	{

	if(dn<0)
	{
		printf("\n ERROR!Please enter a positive value");
		scanf("%d",%dn);

	}//endif
	
	dCtr++;
	sum+=dn;
}//endwhile

		if(dCtr==0)
		{
			printf("No average");
		}//endif
		else 
		{
			fAvg=sum/dCtr;
			printf("%f",fAvg);
		}//endelse

}