                                                    
                                                        //Rilak Aleksa 89201225 - Homework2

 
     /* counter - counter
        result1Factorial - factorial of a printing element
        Factorial() - method computing factorials of an element
        FactorialSquared() - method that squares Factorial() 
        result1Array[] - array for result values
        result1 - number we will print as the result of our computation
        testarray1[] - array for testing user elements 
        length - array length
        testArrfq[] - squared factorials of a test element  */

  #include <stdio.h>
  #include <limits.h>

    long long unsigned Factorial(long long unsigned input1) {
        long long unsigned result1 = 1;
        for(long long unsigned counter = 1; counter <= input1; counter++) {
            result1 = result1 * counter; //factorial calculating loop
        }
        return result1; // factorial return of a input
    }
    long long unsigned FactorialSquared(long long unsigned input1) {
        long long unsigned result1 = 1;
        for(long long unsigned counter = 1; counter <= input1; counter++) {
            result1 *= counter; //same as above method
        }
        result1 = result1 * result1;    // we square the result for the final output
        return result1; // we return the squared factorial of the input number
    }

    int main() {
        int length;
        printf("\nHow man numbah?\n");
        scanf("%d", &length); // the size of the array
        if(length < 200000) { // checking if the length is less than 20000
            long long unsigned testarray1[length];
            long long unsigned testArrfq[length];
            long long unsigned result1Factorial;
            long long unsigned result1Array[length];

            for(int counter = 0;counter < length; counter++) { // fill out the array with numbers
                printf("\nEnter next number: ");
                scanf("%llu", &testarray1[counter]);
            }
            for(int counter=0; counter < length; counter++) { // if num's are below 200000
                if(testarray1[counter] >= 200000) {
                    printf("\n Woah this is way too big, try again.");
                    return 0;
                }
            }
            for(int counter = 0; counter < length; counter++) { // array for squared factorials 
               testArrfq[counter] = FactorialSquared(testarray1[counter]);
            }

            for(int counter = 0; counter < length; counter++) {
                for(int result1 = 1; result1 < 200000; result1++) { // each number checking for the task
                    result1Factorial = Factorial(result1); 

                    if(result1Factorial % testArrfq[counter] == 0) { // numbers checking
                    
                        result1Array[counter] = result1; // found the element = loop stops 
                        break;
                    }
                }
            }
            printf("\nResults"); 
            for(int counter = 0; counter < length; counter++) {
            printf("\nInput: %llu    Result: %llu", testarray1[counter], result1Array[counter]);
            }
            printf("\n  \n");
        }
        else {
           printf("\n Too big");
        }
    return 0;
    }

        // I had a little help from a friend since im not good with factorials and c arrays, but im trying my best
