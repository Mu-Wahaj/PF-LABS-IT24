#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a sentence: ");
    getchar(); 
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch ==str[i])
        {
            break;
        }
        else
        {

            str[i] = str[i];
        }
    }

    printf("Modified sentence: %s\n", str);
    return 0;
}
