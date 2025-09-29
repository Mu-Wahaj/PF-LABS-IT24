#include <stdio.h>

int main()
{
    int days, years, weeks, daysRemain;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;   
    days = days % 365;
    weeks = days / 7;
    daysRemain = days % 7;

    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, daysRemain);
    return 0;
}
