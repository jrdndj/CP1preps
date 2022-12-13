/*
	Ask the user to enter 10 integers (5 even, 5 odd) in an array. Print the
	contents of the array. All even numbers in the array should be sorted
	in ascencing order (in the first "halt" of the array). Then all odd 
	numbers should be sorted in descending order (in the second "half"
	of the array).
*/

#include <stdio.h>

int main(){
	int dArr[10], dInd=0, dTemp=0, di, dj;

	printf("Enter 10 numbers, 5 odd and 5 even: ");
	for(int dCount=0; dCount<10; dCount++){
		scanf("%d", &dArr[dCount]);
	}

	for(di=0; di<10; di++)
		printf(" %d ", dArr[di]);

	printf("\n");

	//sorting, on left side even nums and on right odd
	for(di=0; di<10; di++){
		if(dArr[di]%2==0){
			dTemp=dArr[dInd];
			dArr[dInd]=dArr[di];
			dArr[di]=dTemp;
			dInd++;
		}//endif
	}//endfor

	//sorting left side
	for(di=0; di<5; di++){
		dTemp=dArr[di];
		dInd=di;
			for(int dj=di; dj<5; dj++){
				if(dTemp>dArr[dj]){
					dTemp=dArr[dj];
					dInd=dj;
				}
			}
			int dtemp=dArr[di];
			dArr[di]=dTemp;
			dArr[dInd]=dtemp;
	}

	for(di=5; di<10; di++){
		dTemp=dArr[di];
		dInd=di;
			for(int dj=di; dj<10; dj++){
				if(dTemp<dArr[dj]){
					dTemp=dArr[dj];
					dInd=dj;
				}
			}
			int dtemp=dArr[di];
			dArr[di]=dTemp;
			dArr[dInd]=dtemp;
	}


	for(di=0; di<10; di++)
		printf(" %d ", dArr[di]);

	printf("\n");
	return 0;
}//endmain