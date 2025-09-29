#include <stdio.h>

int main()
{
    int arr[4], i, j, key;

    printf("Enter 4 numbers: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Insertion sort (Descending)
    for (i = 1; i < 4; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted in descending order: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// decending
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][50], temp[50];
    int i, j;

    // Input 5 strings
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }

    // Sort using selection sort (descending)
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) < 0)
            {
                // Swap str[i] and str[j]
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);

            }
        }
    }

    // Print sorted strings
    printf("\nStrings in descending order:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
