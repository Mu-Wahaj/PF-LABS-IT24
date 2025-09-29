#include <stdio.h>
int main()
{
    int a,mul;
    printf("enter a number u want the table = ");
    scanf("%d", &a);
    for ( int i = 0; i<=10; i++)
    {
      mul = a*i;

      printf("%d x %d = %d \n",a,i,mul);

    
    }
    
}