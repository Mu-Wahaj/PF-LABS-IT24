#include <stdio.h>

float getPerformanceBonus(float pay, int stars)
{
    if (stars == 5)
        return pay * 0.20;
    if (stars == 4)
        return pay * 0.15;
    if (stars == 3)
        return pay * 0.10;
    if (stars < 3)
        return pay;
    return 0;
}

float getExperienceBonus(float pay, int workYears)
{
    if (workYears >= 5)
        return pay * 0.05;
    return 0;
}

float getTotalBonus(float pay, int stars, int workYears)
{
    float perfBonus = getPerformanceBonus(pay, stars);
    float expBonus = getExperienceBonus(pay, workYears);

    printf("Performance Bonus: %.2f\n", perfBonus);
    printf("Experience Bonus: %.2f\n", expBonus);

    return perfBonus + expBonus;
}

int main()
{
    float pay;
    int stars, workYears;

    printf("Enter salary: ");
    scanf("%f", &pay);
    printf("Enter performance rating (1-5): ");
    scanf("%d", &stars);
    printf("Enter years of experience: ");
    scanf("%d", &workYears);

    float totalBonus = getTotalBonus(pay, stars, workYears);
    printf("Total Bonus: %.2f\n", totalBonus);

    return 0;
}
