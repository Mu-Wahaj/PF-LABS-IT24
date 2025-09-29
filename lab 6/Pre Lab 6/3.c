#include <stdio.h>

int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int findNextPrime(int num)
{
    while (1)
    {
        num++;
        if (isPrime(num))
            return num;
    }
}
int a = 5;
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not prime. Next prime is %d\n", num, findNextPrime(num));
    }

    return 0;
}
