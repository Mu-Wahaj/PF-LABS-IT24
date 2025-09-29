#include <stdio.h>

void CalBmi(float Bmi)
{

    if (Bmi < 18.5)
    {
        printf("\nHelath Category:your under weight ");
    }
    else if (Bmi >= 18.5 && Bmi <= 24.9)
    {
        printf("\nHelath Category:your  Normal wieght ");
    }
    else if (Bmi >= 25 && Bmi <= 29.9)
    {
        printf("\nHelath Category:your Overwieght");
    }
    else if (Bmi >= 30)
    {
        printf("\nHelath Category:your Obese");
    }
}

void BMI()
{
    float W;
    float H;
    float Bmi;
    char choice;
    do
    {
        printf("\nenter your wieght in Kg ");
        scanf("%d", &W);
        printf("\nenter your Height in (meters) ");
        scanf("%d", &H);
        H *= H;
        Bmi = W / H;
        printf("Your BMI is %.2f", Bmi);
        CalBmi(Bmi);

        printf("\ndo u want another calculation (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    printf("\n thank you !!");
}

int main()
{

    BMI();

    return 0;
}