#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for(int i=0; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    // Check if it's a palindrome array
    int is_palindrome = 1;
    for(int i=0; i<n; i++) {
        if(arr[i] != arr[n-i-1]) {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome) {
        printf("The array is a palindrome array.\n");
    } else {
        printf("The array is not a palindrome array.\n");
    }

    return 0;
}
