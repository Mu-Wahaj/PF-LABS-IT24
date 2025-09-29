#include <stdio.h>
int main() {
    int n, found;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (some may repeat twice, one appears once):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        found = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Element that appears only once: %d\n", arr[i]);
            break;
        }
    }

    return 0;
}
