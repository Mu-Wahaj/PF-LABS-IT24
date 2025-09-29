#include <stdio.h>

int main() {
    char str[100], replacement;
    int i;

    // Input
    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    printf("Enter a character to replace spaces: ");
    scanf(" %c", &replacement);

    // Replace spaces
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = replacement;
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
