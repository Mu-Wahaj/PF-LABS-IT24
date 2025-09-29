//Hi Guys! Hope you all will be doing fine.
//I have prepared some questions for you to practice.
//These questions will make you feel comfortable with the arrays.
#include <stdio.h>

int getFibonacci(int n)
{
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return getFibonacci(n - 1) + getFibonacci(n - 2);
}
void createFibonacci(int series[], int size)
{
    for (int i = 0; i < size; i++)
    {
        series[i] = getFibonacci(i + 1);
    }

}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element # %d : %d\n", i, array[i]);
    }
    printf("\n");
}

void reverseArray(int array[], int size)
{
    int j = size - 1;
    for (int i = 0; i < j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}


void addTwoBigNumbers(int number1[], int size1, int number2[], int size2, int res[], int sumSize)
{
    int j = size2 - 1;
    int i = size1 - 1;
    int carry = 0;

    int k = sumSize - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int d1 = 0, d2 = 0;
        if (i >= 0)
        {
            d1 = number1[i];
            i--;
        }
        if (j >= 0)
        {
            d2 = number2[j];
            j--;
        }
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        sum %= 10;
        res[k] = sum;
        k--;



    }
}


int main()
{
    const int SIZE = 10;
    int array[SIZE];
    createFibonacci(array, SIZE);
    printArray(array, SIZE);
    reverseArray(array, SIZE);
    printArray(array, SIZE);


    const int SIZE1 = 5;  // Size of first number
    const int SIZE2 = 5;  // Size of second number
    const int SUM_SIZE = 6;  // Size of the result (maximum of SIZE1 or SIZE2 + 1)

    int number1[] = { 9, 9, 9, 9, 9 };  // 99999
    int number2[] = { 1, 2, 3, 4, 5 };  // 12345
    int result[SUM_SIZE];  // To store the result of the addition

    addTwoBigNumbers(number1, SIZE1, number2, SIZE2, result, SUM_SIZE);

    // Print the result array
    printf("Sum: ");
    for (int i = 0; i < SUM_SIZE; i++)
    {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}