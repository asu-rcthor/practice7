#include <stdio.h>

int gcd(int, int);

int main() {
    int a, b;
    printf("Input two numbers for GCD calculation.\n1st number: ");
    scanf("%d", &a);
    printf("2nd number: ");
    scanf("%d", &b);
    printf("The gcf betwen %d and %d is %d.\n", a, b, gcd(a, b));
    return 0;
}

int gcd (int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}