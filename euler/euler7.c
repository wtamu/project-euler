/*
 *  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 *  What is the 10 001st prime number?
 *
 *  Author: willtamura
 *  Date: 4/4/16
 */

#include <stdio.h>
#include <math.h>

#define TARGET 10001
#define TRUE 1
#define FALSE 0

// Prototype
int isprime(long long n);

int main() {
    int pc = 0;         // Prime counter
    int n;
    
    for(int i = 1; pc < TARGET; i++) {
        if(isprime(i)) {
            n = i;
            pc++;
        }
    }
    printf("10,001 Prime is %d\n", n);
    
    return 0;
}

int isprime(long long n) {
    
    long long i, lim;
    lim = sqrt(n);
    
    // If Even
    if (n % 2 == 0)
        return FALSE;
    
    // If Odd
    for(i = 3; i <= lim; i += 2)
        if (n % i == 0)
            return FALSE;
    
    // Passed Checks: Is Prime!
    return TRUE;
}