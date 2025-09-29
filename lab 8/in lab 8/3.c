#include <stdio.h>

int zeroes(int num, int count)
{
    if (num == 0)
        return 0 ;
        if (num/10==0)
        {
            count++;
            printf("%d" , count);
        }
        
    return zeroes(num / 10, num % 10 );
}

int main()
{
    int num ,cunt=0;
    printf("enter a number : ");
    scanf("%d", &num);
    printf("number of zeroes in  %d is %d\n", num, zeroes(num, cunt));
    return 0;
}
