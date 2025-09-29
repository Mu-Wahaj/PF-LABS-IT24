#include <stdio.h>
#include <math.h>

double calDiscri(double a, double b, double c);
double printRealDiscRoots(double a, double b, double discriminent);
double printRealRepeatedRoots(double a, double b);
double complexConjugateRoot(double a, double b, double discriminent);

int main()
{

    double x, y, z, disc = 0;
    printf("enter coefficents x ,y ,z :\n");

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    printf("%f %f %f ", x, y, z);

    disc = calDiscri(x, y, z);
    printf("discriminent is %1f ", disc);

    if (disc == 0)
    {

        double root = printRealRepeatedRoots(x, y);
        printf("one real and repeted root\n%lf : ", root);
    }
    else if (disc > 0)
    {

        double root = printRealDiscRoots(x, y, z);
        printf("one real and repeted root\n%lf : ", root);
    }
    if (disc > 0)
    {

        double root = printRealRepeatedRoots(x, y);
        printf("one real and repeted root\n%lf : ", root);
    }

    return 0;
}

double calDiscri(double a, double b, double c)
{

    return b * b - 4 * a * c;
}

double printRealDiscRoots(double a, double b, double c)
{
    double root1, root2;

    root1 = -b + sqrt(calDiscri(a, b, c)) / 2 * a;
    printf("Root one %lf", root1);
    root1 = -b - sqrt(calDiscri(a, b, c)) / 2 * a;
    printf("Root second %lf", root2);
    return root1, root2;
}

double printRealRepeatedRoots(double a, double b)
{

    return -b / (2 * a);
}

double complexConjugateRoot(double a, double b, double c)

{
}
