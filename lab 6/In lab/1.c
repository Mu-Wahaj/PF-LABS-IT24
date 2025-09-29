#include <stdio.h>
#include <math.h>

int spinwheel()
{

    int spin, Tries = 3;

    do
    {

        int random = min+rand();
        printf("spin %d , you won  a  %d  ", Tries, random);
        Tries++; 
    } while (spin, Tries);
}
int main()
{
    char choice;
    printf("welcome to wheel of fortune--------\n ");
    printf("you can spn the wheel 3 times your highest will be your final reward");
    do
    {
        printf("do you wnat another y/n");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}