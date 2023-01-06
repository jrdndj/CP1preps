/*prog that lets the user enter 10 num in an array
and prints the count of even numbers in it*/

#include <stdio.h>
int main()
{
	//declare empty int array
	int dArr[10], dCtr = 0, dEvenCtr = 0;

	//input using loop
	while(dCtr < 10){
		printf("\n enter num for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		
		//we need to check the value if it is even or not
		if (dArr[dCtr]%2==0){
			//if true increase the count of event
			dEvenCtr++;
		}//endif
		
		dCtr++;
	}//endwhile

	//print total num of even
	printf("\n you entered %d even num\n", dEvenCtr);

	return 0;
}