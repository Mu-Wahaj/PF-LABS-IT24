#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int i, len, count = 0, first = -1, second = -1;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string (goal): ");
    scanf("%s", s2);

    len = strlen(s1);

    if (strlen(s2) != len)
    {
        printf("false\n");
        return 0;
    }

    for (i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
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

    if (count == 2 && s1[first] == s2[second] && s1[second] == s2[first])
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
