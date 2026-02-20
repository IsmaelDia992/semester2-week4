
/*
 * Factorial
 */

 #include <stdio.h>

int main( void ) {
    int f[20]; // Our array on the Stack

    for(int k = 0; k < 20; ++k) { 
        long long result = 1; // Use a 'long' because factorials get huge fast!
        
        int x = k;
        while(x > 0) {
            result = result * x;
            x = x - 1;
        }
        
        f[k] = (int)result; // Store the result in our array
        printf("Factorial of %d is %d\n", k, f[k]);
    }

    return 0;
}
