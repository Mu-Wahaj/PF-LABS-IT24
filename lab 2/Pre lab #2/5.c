#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number : ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("day : Monday ");
    }
    else if (day == 2)
    {

        printf("day : Tuesday ");
    }
    else if (day == 3)
    {
        printf("day : Wednesday ");
    }
    else if (day == 4)
    {
        printf("day : Thursday ");
    }
    else if (day == 5)
    {
        printf("day : Friday ");
    }
    else if (day == 6)
    {
        printf("day : Saturday ");
    }
    else if (day == 7)
    {
        printf("day : Sunday ");
    }
    else
    {
        printf(" Invalid inpuy ");
    }
    return 0;
}