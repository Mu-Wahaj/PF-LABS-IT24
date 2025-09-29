#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int lower, upper;
    upper = 0;
    lower = 0;
    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' )
    {

        if (str[length] >= 'A' && str[length] <= 'Z')
        {

            upper++;
        }

        else if (str[length] >= 'a' && str[length] <= 'z')
        {

            lower++;
        }
        length++;
    }

    printf("Length of the string: %d\n", length);
    printf("Upeercase values : %d ", upper);
    printf("Lower  values : %d ", lower);
    return 0;
}