#include <stdio.h>

int ArrayChecked(int arr[],int n,int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (arr[i] == arr[j])
            {

                continue;
            }
            else if (arr[i] + arr[j] == target)
            {
                printf("%d , %d\n", i, j);
            }
        }
    }
}
int main()
{
    int target;

    printf("enter the targeted value : ");
    scanf("%d", &target);
    int arr[]={1,2,3,4,5};
    int n =5;
    ArrayChecked(arr,n, target);

    return 0;
}
