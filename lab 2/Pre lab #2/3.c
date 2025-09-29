
#include <stdio.h>
int main()
{
    int a = 0;
    int sum = 0;
    for (int i = 1; a<10; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            printf("%d", i);
            a++;
        }
    }
    printf("\nThe Sum is: %d\n", sum);
    return 0;
}
