/*
 *  The prime factors of 13195 are 5, 7, 13 and 29.
 *  What is the largest prime factor of the number 600,851,475,143 ?
 *
 *  Author: willtamura
 *  Date: 3/19/16 - 3/20/16
 */

#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143
#define TRUE 1
#define FALSE 0

int isprime(long long n);

int main() {
    
    long long n, p, pmax;
    
    // Div by Two
    n = NUMBER;
    while(n % 2 == 0)
        n /= 2;
    
    // DEBUG
    printf("Debug: n = %lld\n", n);
    
    // Div by Odds
    for(p = 3; p <= n; p += 2) {
        // If Prime
        if(isprime(p)) {
            pmax = p;
            while(n % p == 0) {
                n /= p;
            }
        }
    }
    
    printf("Largest prime factor of NUMBER is: %lld\n", pmax);
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