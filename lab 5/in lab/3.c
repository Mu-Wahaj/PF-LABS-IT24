#include <stdio.h>

int amstrong(int num)
{
    int last, middle, fisrt;
    int digits, count, ams;

    for (int i = 0; i < num; i++)
    {
        digits = num / 10;
        printf("%d", digits);
        count++;
    }
    for (int i = 0; i < count; i++)
    {

        digits = digits * count;
        ams += digits;
    }
    if (ams == num)
    {

        printf("your enterde number is  amstring ");
    }

    // printf("number is  %d", last);
    // printf("\nnumber is  %d", middle);
    // printf("\nnumber is  %d", fisrt);
}

int main()
{
    int num;
    printf("enter a number ");
    scanf("%d", &num);
    amstrong(num);
    return 0;
}