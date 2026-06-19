//Write a program to Second largest element.

#include <stdio.h>
#include <limits.h>

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Invalid Input\n");
        return;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element found\n");
    } else {
        printf("Largest: %d\n", largest);
        printf("Second Largest: %d\n", secondLargest);
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 35, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, size);

    return 0;
}