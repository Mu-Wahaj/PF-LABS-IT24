#include <stdio.h>

int Product(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    return ((x),(x+y)+y  );
}

int main()
{
    int num1, num2;
    printf("enter a number : ");
    scanf("%d", &num1);
    printf("enter a number : ");
    scanf("%d", &num2);
    printf("the product of %d and %d is =%d", num1, num2, Product(num1, num2));
    return 0;
}