#include <stdio.h>
int main()
{

    int Price, Oprice, discount;
    printf("enter the price of the product : \t");
    scanf("%d", &Oprice);
    while (Oprice <= 0)
    {
        printf("\nenter a valid price : \t");
        scanf("%d", &Oprice);
    }

    printf("\nenter the discount  of the product : \t");
    scanf("%d", &discount);
    do
    {

        printf("invalid input ! discount must be between 0 to 100 please enter again ");
        scanf("%d", &discount);
    } while (discount < 0 && discount > 100);
    discount = (Oprice * discount) / 100;
    printf("the discount is : %d ", discount);
    Price = Oprice - discount;
    printf("\nprice after the discount is  : %d", Price);
}
