#include <stdio.h>

int findMaxNumber(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 25, 8, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxNumber = findMaxNumber(arr, size);
    printf("En buyuk sayi: %d\n", maxNumber);

    return 0;
}
