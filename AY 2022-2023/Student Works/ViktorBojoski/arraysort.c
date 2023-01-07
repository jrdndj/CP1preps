#include <stdio.h>

int main(){
int dArr[10], dCount=0;
int length=sizeof(dArr)/sizeof(dArr[0]);
for (int dCtr=0; dCtr<10; dCtr++){
			printf("\n Enter number %d: ", dCtr+1);
			scanf("%d", &dArr[dCtr]);
			
		}
			for (int i=0; i<length; i++){
				for (int j=i+1; j<length; j++){
					if(dArr[i]>dArr[j]){
						dCount=dArr[i];
						dArr[i]=dArr[j];
						dArr[j]=dCount;
					}
				}
			}
			for (int i=0; i<length; i++){
				printf("%d\n", dArr[i]);
			}
return 0;
}