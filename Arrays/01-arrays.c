#include<stdio.h>
#include <stdbool.h>

int linearSearch(int arr[] , int size , int target){
    for (int i = 0; i < size; i++){
       if( arr[i] == target){
           return i;
       }
    }
    return -1;
}

void arrIntersection(int arr1[], int arr2[], int s1, int s2){
    int limit;
    if(s1>s2){  //set min limit
        limit = s2;
    }
    else{
        limit = s1;
    }
    

    for (int i = 0; i < s1; i++){
        for (int j = 0; j < s2; j++){
            if (arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
            }
        }
    }
}

int sumUniqueElements(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j] && i!=j){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            sum += arr[i];
        }
    }
    return sum;
}

void swapMinMax(int arr[] , int size){
    int mini = 0,  maxi = size - 1;
   
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[mini]) mini = i;
        if (arr[i] > arr[maxi]) maxi = i;
    }
    int temp = arr[mini];
    arr[mini] = arr[maxi];
    arr[maxi] = temp;

    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}


int findLargestLucky(int arr[], int n) {
    int freq[101] = {0}; // assuming values are between 1 and 100

    // count frequencies
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= 100) {
            freq[arr[i]]++;
        }
    }

    // find largest lucky number, as frequency arrsy is already in sorted ascending order so we simple start the loop from the end
    
    for (int i = 100; i >= 1; i--) {
        if (freq[i] == i) {
            return i;
        }
    }

    return -1;
}

bool isMountainArray(int arr[], int n) {
    if (n < 3) return false;

    int i = 0;

    // strictly increasing
    while (i + 1 < n && arr[i] < arr[i + 1]) {
        i++;
    }

    // peak can't be first or last
    if (i == 0 || i == n - 1) return false;

    // sstrictly decreasing
    while (i + 1 < n && arr[i] > arr[i + 1]) {
        i++;
    }

    return i == n - 1;
}



// int main() {
//     // int arr[] = {1, 3, 5, 4, 2};  //mountain array
//     int arr[] = {0, 2, 3, 3, 5, 2, 1, 0};  //not mountain array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     if (isMountainArray(arr, n)) {
//         printf("Mountain Array\n");
//     } else {
//         printf("Not a Mountain Array\n");
//     }
//     return 0;
// }



void moveZeroes(int arr[], int n) {
    int pos = 0;  //position to place the next non zero element

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }

    //filling remaining positions with 0
    while (pos < n) {
        arr[pos++] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
}


// int main() {
//     int arr1[] = {0, 1, 0, 3, 12};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     moveZeroes(arr1, n1);
//     // Output: [1, 3, 12, 0, 0]

//     return 0;
// }



