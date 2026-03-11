#include <stdio.h>

int main() {
    
    int n = 10; 
    
   
    int t1 = 0, t2 = 1;
    
   
    int nextTerm = t1 + t2;
    
    
    printf("Fibonacci Series (first %d terms): %d, %d, ", n, t1, t2);
    
    
    for (int i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        
        // Update terms for the next iteration
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    
    printf("\\n");
    
    return 0;
}
