#include <stdio.h>

int main() {

    int a, b,sum=0;

    printf("enter first number  : ");
    scanf("%d", &a);
    printf("enter second  number  : ");
    scanf("%d", &b);

for (int i = 1; i <=b; i++)
{
    sum=sum+a;
}
printf("the produst of %d and %d is %d",a,b,sum);

    return 0;
}