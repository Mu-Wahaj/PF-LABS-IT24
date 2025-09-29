#include <stdio.h>
#include <ctype.h>

int main() {
    char username[50];
    int i, valid = 1;

    printf("Enter a username: ");
    scanf("%s", username);

    for (i = 0; username[i] != '\0'; i++) {
        if (!islower(username[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid username\n");
    else
        printf("Invalid username (Only lowercase letters allowed)\n");

    return 0;
}
