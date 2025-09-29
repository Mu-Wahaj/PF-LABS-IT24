#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, len, count = 0, first = -1, second = -1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter goal string: ");
    scanf("%s", str2);

    len = strlen(str1);

    if (strlen(str2) != len)
    {
        printf("false\n");
        return 0;
    }

    for (i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            count++;
            if (count == 1)
                first = i;
            else if (count == 2)
                second = i;
            else
            {
                printf("false\n");
                return 0;
            }
        }
    }

    if (count == 2 && str1[first] == str2[second] && str1[second] == str2[first])
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, len, count = 0, first = -1, second = -1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter goal string: ");
    scanf("%s", str2);

    len = strlen(str1);

    if (strlen(str2) != len)
    {
        printf("false\n");
        return 0;
    }

    for (i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            count++;
            if (count == 1)
                first = i;
            else if (count == 2)
                second = i;
            else
            {
                printf("false\n");
                return 0;
            }
        }
    }

    if (count == 2 && str1[first] == str2[second] && str1[second] == str2[first])
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
