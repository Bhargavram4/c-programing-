#include <stdio.h>

int main() {
    int arr[50], even[50], odd[50];
    int n, i, j = 0, k = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // even element
            even[j] = arr[i];
            j++;
        }
        else { // odd element
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even elements of array: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements of array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
