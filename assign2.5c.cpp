#include <stdio.h>

int main() {
    int arr[100]; // maximum array size of 100
    int size, i, j, k;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // loop through the array
    for (i = 0; i < size; i++) {
        // loop through the array again starting from i+1
        for (j = i+1; j < size; j++) {
            // if a duplicate element is found, shift all the elements after it to the left by 1
            if (arr[i] == arr[j]) {
                for (k = j; k < size-1; k++) {
                    arr[k] = arr[k+1];
                }

                size--; // decrease the size of the array by 1
                j--; // decrement j so that the element after the duplicate element is not skipped
            }
        }
    }

    printf("Array with duplicates removed: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
