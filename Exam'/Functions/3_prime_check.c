//3. Prime Number Check: Write a function that takes an integer as input and returns 1 if it is a prime number, otherwise returns 0.//
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n = 17;
    printf("%d is %s\n", n, isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}
