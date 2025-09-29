#include <stdio.h>

void printEven(int n, int current) {
    if (current > n)
        return;
    if (current % 2 == 0)
        printf("%d ", current);
    printEven(n, current + 1);
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printEven(N, 4);
    return 0;
}
