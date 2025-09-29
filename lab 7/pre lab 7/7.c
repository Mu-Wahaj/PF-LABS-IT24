#include <stdio.h>

double customSqrt(double x)
{
    double guess = x / 2.0, epsilon = 0.00001;
    while (guess * guess - x > epsilon || x - guess * guess > epsilon)
        guess = (guess + x / guess) / 2.0;
    return guess;
}

double customAbs(double x)
{
    return x < 0 ? -x : x;
}

double customCeil(double x)
{
    int intPart = (int)x;
    return (x > intPart) ? intPart + 1 : intPart;
}

int main()
{
    double num;
    printf("Enter a number for square root: ");
    scanf("%lf", &num);
    printf("Square root of %.4lf is %.4lf\n", num, customSqrt(num));

    printf("Enter a number for absolute value: ");
    scanf("%lf", &num);
    printf("Absolute value of %.4lf is %.4lf\n", num, customAbs(num));

    printf("Enter a number for ceiling: ");
    scanf("%lf", &num);
    printf("Ceiling of %.4lf is %.4lf\n", num, customCeil(num));

    return 0;
}
