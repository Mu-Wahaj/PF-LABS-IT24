#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number of Fibonacci primes to sum N greter then  1: ");
    scanf("%d", &N);
    int a = 0, b = 1,
        nextFibo;
    int sum = 0, count = 0;

    while (count < N)
    {

        nextFibo = a + b;
        a = b;
        b = nextFibo;

        if (nextFibo > 1)
        {
            int isPrime = 1;
            for (int i = 2; i * i <= nextFibo; i++)
            {
                if (nextFibo % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                printf("%d ", nextFibo);
                sum += nextFibo;
                count++;
            }
        }
    }

    printf("\n\nTotal Sum of Fibonacci Primes: %d\n", sum);

    return 0;
}
