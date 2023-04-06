#include <stdio.h>

int main() {
    int arr[100]; // maximum array size of 100
    int size, i;
    int max_diff, min_element;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // initialize max_diff to the difference between the first two elements
    max_diff = arr[1] - arr[0];

    // initialize the minimum element to the first element
    min_element = arr[0];

    // loop through the array
    for (i = 1; i < size; i++) {
        // update max_diff if the difference between the current element and the minimum element is greater
        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }

        // update the minimum element if the current element is smaller
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    printf("The maximum difference between two elements in the array is: %d\n", max_diff);

    return 0;
}
