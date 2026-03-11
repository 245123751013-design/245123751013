#include <stdio.h>

int main() {
    
    int num = 5; 
    unsigned long long factorial = 1; 
    int i;

   
    if (num < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
