//1. Basic Function Implementation: Write a function in C that takes two integers as arguments and returns their sum.//
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5, b = 10;
    printf("Sum: %d\n", sum(a, b));
    return 0;
}
