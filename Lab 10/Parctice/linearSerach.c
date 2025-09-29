#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int key = 6, found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) printf("Element not found\n");
    return 0;
}
