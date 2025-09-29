#include <stdio.h>
int main() {
    int X, Y, moves = 0;
    printf("Enter Destination Stair #: ");
    scanf("%d", &X);

    printf("Enter Max Steps Per Move: ");
    scanf("%d", &Y);
    if (X < 1 || X > 1000000 || Y < 1 || Y > X) {
        printf("Invalid Input! X must be between 1 and 1,000,000, Y must be between 1 and X.\n");
        return 1;
    }
    int currentStep = 0; 
    do {
        if (currentStep + Y <= X) {
            currentStep += Y; 
        } else {
            currentStep += 1; 
        }
        moves++; 
    } while (currentStep < X);
    printf("Minimum Moves Required Are: %d\n", moves);
    return 0;
}
