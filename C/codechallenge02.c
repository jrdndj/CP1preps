/* 
A C program that will allow the user to input integers. The integer input can be a 2,3 or 4-digit integer. Reject if it is a 1 digit integer. Reject if it is 5-digits or more. 
Integers must be positive. 
If the integer has "23" in it, print "Jordan"
If the integer has "24" in it, print "Kobe"
Else, print "useless". 

sample inputs and outputs: 
23 Jordan
 24 Kobe
1024 Kobe
5231 Jordan
2400 Kobe
5555 useless
55 useless
555 useless
*/
#include<stdio.h>

/* Code Challenge 2 for RIN-EN-G1 only

A C Program that will allow the user to input integers. The integer input must be positive. It can be 2,3 or 4 digits. Reject the input if it is just 1 digit. 
 If the input has "6" AND "9" anywhere in it, print "nice". 
 If the input has "69" anywhere in it, print "nicer". 
The two conditions may stack. nice and nicer and the same time
 If none of the conditions are satisfied, then just print "boring" 

sample input, outputs
  5569, nice, nicer
  6559, nice
  0609, nice
  69, nice, nicer
  169, nice, nicer
  619, nice
  123, boring
  1234, boring

  the input must be as one whole integer
  
  Code Challenge 2 for RIN-EN-G1 only

A C Program that will allow the user to input integers. The integer input must be positive. It can be 2,3 or 4 digits. Reject the input if it is just 1 digit. 
 If the input has "6" AND "9" anywhere in it, print "nice". 
 If the input has "69" anywhere in it, print "nicer". 
The two conditions may stack. nice and nicer and the same time
 If none of the conditions are satisfied, then just print "boring" 

sample input, outputs
  5569, nice, nicer
  6559, nice
  0609, nice
  69, nice, nicer
  169, nice, nicer
  619, nice
  123, boring
  1234, boring

  the input must be as one whole integer
  this is due by 1130

 
Code Challenge for RIN-EN-G3 only

      A C program that will allow the user to input 4-digit integer. The integer must be positive. Reject any integer that is not a 4-digit input. 

      Calculate the sum of the first two digits and the second two digits. 

  For example: 
  1234
  1+2 and 3+4

  If the sum of the first two digits is greater than the sum of the second two digits, then print "bazinga!". Else, print "boring". 
  If any of the sums is equal to 69, print "nice!". 
  If you see a 6 and  a 9, print "nice!'"
  
  Code Challenge 2 for BF only: 
    A C program that will allow the user to input integers. The integer input can be a 2,3 or 4-digit integer. Reject if it is a 1 digit integer. Reject if it is 5-digits or more. 
    Integers must be positive. 
    If the integer has "23" in it, print "Jordan"
    If the integer has "6" and "9" in it print, "nice!"

    Else, print "boring!". 

    sample inputs and outputs: 
    2223    Jordan
    0230    Jordan
    1609    nice!
    6923    nice! Jordan
    6293    nice!
    0000    boring!
 */
