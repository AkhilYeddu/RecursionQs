#include <stdio.h>
int countOccurrences(int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array:");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to count occurrences: ");
    scanf("%d", &target);

    int occurrences = countOccurrences(arr, size, target);
    printf("Number of occurrences of %d in the array: %d\n", target, occurrences);

    return 0;
}