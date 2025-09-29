#include <stdio.h>

int main()
{
    int marks[5], i, j, max_idx, temp;

    // Input
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Selection Sort (Descending)
    for (i = 0; i < 4; i++)
    {
        max_idx = i;
        for (j = i + 1; j < 5; j++)
        {
            if (marks[j] > marks[max_idx])
            {
                max_idx = j;
            }
        }
        // Swap
        temp = marks[i];
        marks[i] = marks[max_idx];
        marks[max_idx] = temp;
    }

    // Output
    printf("Sorted marks in descending order:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}
