#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[50], manualConcat[150];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

  
    char temp[150];
    strcpy(temp, str1);
    strcat(temp, str2);
    printf("Using strcat(): %s\n", temp);

    while (str1[i] != '\0')
    {
        manualConcat[i] = str1[i];
        i++;
    }
    // manualConcat[i++] = ' ';
    while (str2[j] != '\0')
    {
        manualConcat[i++] = str2[j++];
    }
    manualConcat[i] = '\0';

    printf("Manual concatenation: %s\n", manualConcat);
    return 0;
}
