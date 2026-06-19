//Write a program to Find duplicates in array.

#include <stdio.h>
#include <stdbool.h>

void findDuplicates(int arr[], int size) {
    bool hasDuplicates = false;

    for (int i = 0; i < size; i++) {
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) {
            continue;
        }

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                hasDuplicates = true;
                break;
            }
        }
    }

    if (!hasDuplicates) {
        printf("No duplicate elements found");
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements: ");
    findDuplicates(arr, size);

    return 0;
}