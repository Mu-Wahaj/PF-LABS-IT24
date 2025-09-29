#include <stdio.h>
#include <ctype.h>

int main() {
    char username[100];
    int i, valid = 1;

    printf("Enter username: ");
    scanf("%s", username); // Stops at space

    // Check for non-alphabetic characters
    for(i = 0; username[i] != '\0'; i++) {
        if(!isalpha(username[i])) {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid username\n");
    else
        printf("Invalid username\n");

    return 0;
}
