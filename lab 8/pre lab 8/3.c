#include <stdio.h>

void reverse()
{
    char c;
    scanf("%c", &c);

    if (c == '\n')
        return;
    reverse();
    printf("%c", c);
}

int main()
{
    printf("Enter a word: ");
    reverse();
    return 0;
}
