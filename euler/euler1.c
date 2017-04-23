/*  If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 *  we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 *  Find the sum of all the multiples of 3 or 5 below 1000.
 *
 *  Author: willtamura
 *  Date: 3/19/16
 */

#include <stdio.h>

int main() {

    int lim = 1000;
    int sum = 0;
    
    // Multiples of Three
    for(int three = 3; three < lim; three += 3) {
        sum = sum + three;
    }
    
    // Multiple of Five
    for(int five = 5; five < lim; five += 5) {
        // Do not double count
        if(five % 3 != 0) {
            sum = sum + five;    
        }
    }
    
    printf("Sum of multiples of 3 and 5 is: %d\n", sum);
}