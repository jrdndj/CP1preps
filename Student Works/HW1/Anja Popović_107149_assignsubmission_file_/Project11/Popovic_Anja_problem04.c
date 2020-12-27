    #include<stdio.h>
    int main() {
	    int n,a;
	    int prime,count=0;
	    printf("\nPlease, enter a number!\n");
	    scanf("%d", &n);
        for (a = 1; a <= n; a++) {
            prime = 1;
            for (int i = 2; i < a; i++) 
                if (a % i == 0) {
                    prime = 0;
                    break;
                }//endif
                if (prime) {
                    count++;
                }//endif
        
        }//endfor

        printf("\nNumber of prime numbers that are less or equal to %d: %d", n,count);


	    return 0;
}