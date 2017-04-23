/*
 *  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 *  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 *  Author: willtamura
 *  Date: 3/20/16
 */
 
#include <stdio.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0

int main() {
    
    int n = 20;
    int found = FALSE;

    for(;n <= INT_MAX; n += 20) {
        for(int i = 20; i >= 11 || found == TRUE; i--) {
            if(n % i != 0)
                break;
                
            if(i == 11) {
                found = TRUE;
                printf("Found! %d\n", n);
                return 0;
            }
        }
    }
    
    printf("Not Found: %d\n", n);
    
    return 0;
}