#include <stdio.h>

int main()
{

    int bill,sumDiv;
    char luck;
    
    printf("enter your bill : ");
    scanf("%d", &bill);
    printf("want to join the lucky draw of $5 :y/n\t ");
    scanf(" %c", &luck);

    if (luck == 'Y' || luck == 'y')
    {

        for (int i = 2; i * i <= bill; i++){
            printf("%d\t",i);

            sumDiv=sumDiv+i;
        if (sumDiv==bill)
        {
printf("congrats ! your bill qualifies for a lucky discount!!");
 bill=bill-(20/100*100);
 printf("youe bill is %d",bill);

 

        }
       
        
        }
            
           
    }

    else
    {
        printf("\nyour total bill is : %d", bill);
    }

    return 0;
}