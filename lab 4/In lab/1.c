#include <stdio.h>

int main()
{
    int a, b;

    printf("enter first number  : ");
    scanf("%d", &a);
    printf("enter second  number  : ");
    scanf("%d", &b);
    printf("after Swaping\n");
    b = a + b;
    a = b - a;
    b = b - a;
    printf("first number : %d \n", a);
    printf("second number : %d", b);
    return 0;
}