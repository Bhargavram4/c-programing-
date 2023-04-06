#include <stdio.h>

int main() {
    int arr[100]; // maximum array size of 100
    int size, temp, i, j;
    float avg;
    int largest1, largest2, smallest1, smallest2;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // sort array in descending order
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    largest1 = arr[0];
    largest2 = arr[1];
    smallest1 = arr[size-1];
    smallest2 = arr[size-2];
    avg = (float)(largest2 + smallest2) / 2;

    // check if average is present in array
    for (i = 0; i < size; i++) {
        if (arr[i] == avg) {
            printf("The average of the second largest and smallest elements (%.2f) is present in the array.\n", avg);
            return 0;
        }
    }

    printf("The average of the second largest and smallest elements (%.2f) is not present in the array.\n", avg);

    return 0;
}
