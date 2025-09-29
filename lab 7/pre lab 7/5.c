#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrongNumber(int n) {
    int sum = 0, original = n;
    while (n > 0) {
        sum += factorial(n % 10);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (isStrongNumber(num))
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);
    return 0;
}
