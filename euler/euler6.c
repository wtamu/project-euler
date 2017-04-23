/*  
 *  The sum of the squares of the first ten natural numbers is,
 *  1^2 + 2^2 + ... + 10^2 = 385
 *
 *  The square of the sum of the first ten natural numbers is,
 *  (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 *  Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 *
 *  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 *  Author: willtamura
 *  Date: 3/21/16
 */
 
#include <stdio.h>
#include <math.h>

#define LIM 100

int main() {
    
    int sq, sm;
    
    sq = 0;
    for(int i = 1; i <= LIM; i++) {
        sq = sq + pow(i, 2);
    }
    printf("Sum of squares = %d\n", sq);
    
    sm = 0;
    for(int i = 1; i <= LIM; i++) {
        sm = sm + i;
    }
    sm = pow(sm, 2);
    printf("Square of sum = %d\n", sm);
    
    printf("Difference = %d\n", sm - sq);
    
    return 0;
}