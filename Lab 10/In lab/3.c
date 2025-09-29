#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    char varible[100];
    int index = 0;
    char nonAplha[100];
    int index2 = 0;
    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {

        if ((str[length] >= 'A' && str[length] <= 'Z') || (str[length] >= 'a' && str[length] <= 'z'))
        {
            varible[index] = str[length];
            index++;
        }
        else
        {
            nonAplha[index2] = str[length];
            index2++;
        }
        length++;
    }
    
        printf("Valibles : %s\n", varible);
    

    
        printf("Non Aphabets : %s\n", nonAplha);
    

    printf("lenght of the varible is : %s", length);

    return 0;
}