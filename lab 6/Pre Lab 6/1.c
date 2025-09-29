#include <stdio.h>

int findGCD(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int num1, num2;
    printf("Enter fisrt number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, findGCD(num1, num2));

    return 0;
}
