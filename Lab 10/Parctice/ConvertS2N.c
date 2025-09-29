#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "456";
    int num = atoi(str);
    printf("Converted number (builtin): %d\n", num);
    return 0;
}

// manual coversion
#include <stdio.h>

int main()
{
    char str[] = "456";
    int i, num = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Converted number (manual): %d\n", num);
    return 0;
}
