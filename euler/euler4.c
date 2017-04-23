/*  
 *  A palindromic number reads the same both ways. 
 *  The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *  
 *  Find the largest palindrome made from the product of two 3-digit numbers.
 *
 *  Author: willtamura
 *  Date: 3/20/16
 */

#include <stdio.h>

int reversed(int n);
int isPalindrome(int n);

int main() {
    int a, b;
    int bigPal = 0;
    
    a = 999;
    while(a >= 100) {
        b = a;
        while(b >= 100) {
            // If smaller than previous Palindrome
            if(a * b < bigPal) {
                break;
            }
            // If Palindrome, get value
            if(isPalindrome(a * b)) {
                bigPal = a * b;
            }
            b = b - 1;
        }
        a = a - 1;
    }
    printf("Largest palindrome of three digits is %d\n", bigPal);
    
    return 0;
}

int reversed(int n) {
    int reversed = 0;
    while(n > 0) {
        reversed = (10 * reversed) + (n % 10);
        n /= 10;
    }
    return reversed;
}

int isPalindrome(int n) {
    return (n == reversed(n));
}