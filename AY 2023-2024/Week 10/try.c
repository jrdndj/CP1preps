#include<stdio.h>

int main(){
	float fTemps[7], coldTemps[7], hotTemps[7], aytTemps[7];
	int dCold=0, dHot=0, dAyt=0; //these keep count of your arrays

	//populate fTemps 
	// hint: %lf for scanf, for printing %.1f
	for(int i=0; i<7; i++){
		printf("\n Enter temperature %d: ", i+1);
		scanf("%lf", &fTemps[i]);
	}//end input for
j
	//now check each and store them in their correct array
	//keep track using the int counters
	//but you iterate thru a for loop
	for(int i=0; i<7; i++ ){ //because we are checking all ttemps
		//check if cold
		if(fTemps[i] < 10){ //then it is cold
			coldTemps[dCold]= fTemps[i]; 
			//put the i value of fTemps to the current set of cold
			dCold++; //increment to keep track of the latest
		}//end check cold
		else if(){ //check for hot 

		}
		else{

		}//assume it is ayt (if not cold or not hot)

	}//endfor check temp



	return 0; 
}//end main