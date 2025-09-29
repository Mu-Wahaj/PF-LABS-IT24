#include <stdio.h>
#include <string.h>

int main()
{
    int rollNo, Phy, Chemist, Comp, obtMarks;
    int total = 300;
    float percentage;
    char Name[30];

    printf("Enter your Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter your Name: ");
    scanf("%s", Name);
    printf("\nEnter Physics Marks: ");
    scanf("%d", &Phy);
    printf("\nEnter Chemistry Marks: ");
    scanf("%d", &Chemist);
    printf("\nEnter Computer Marks: ");
    scanf("%d", &Comp);

    printf("\nTotal  Marks = %d", total);
    obtMarks = Phy + Chemist + Comp;
    printf("\nTotal Obtained Marks = %d", obtMarks);

    percentage = (float)obtMarks / total * 100;
    printf("\nPercentage Obtained = %.2f %%\n", percentage);

    if (percentage >= 85)
    {
        printf("Division : First\n");
    }
    else if (percentage >= 65)
    {
        printf("Division : Second\n");
    }
    else if (percentage >= 45)
    {
        printf("Division : Third\n");
    }
    else
    {
        printf("Division : Fail\n");
    }

    return 0;
}