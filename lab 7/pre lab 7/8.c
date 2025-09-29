#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

int getRandomEven(int low, int high) {
    int num;
    do {
        num = getRandom(low, high);
    } while (num % 2 != 0);
    return num;
}

int getRandomMultiple(int low, int high, int N) {
    int num;
    do {
        num = getRandom(low, high);
    } while (num % N != 0);
    return num;
}

int main() {
    srand(time(0));

    int low, high, N;
    printf("Enter low and high values: ");
    scanf("%d %d", &low, &high);
    printf("Random number between %d and %d: %d\n", low, high, getRandom(low, high));
    printf("Random even number between %d and %d: %d\n", low, high, getRandomEven(low, high));

    printf("Enter a number N: ");
    scanf("%d", &N);
    printf("Random multiple of %d between %d and %d: %d\n", N, low, high, getRandomMultiple(low, high, N));

    return 0;
}
