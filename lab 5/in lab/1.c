#include <stdio.h>

void check(int secret, int gusse)
{

    if (gusse < secret)
    {
        printf("Too low try agin\t");
    }
    else if (gusse > secret)
    {
        printf("Too high  try agin\t");
    }
}
void game()
{
    int a, b, count;

    printf("enter the secret number\t");
    scanf("%d", &a);
    do
    {
        printf("\nenter you gusse\t");
        scanf("%d", &b);
        game(a, b);
        count++;

    } while (a < b || a > b);
    printf("\ncongratulations you the guse the correct number in attempts\t%d ", count);
}

int main()
{

    game();

    return 0;
}