#include <stdio.h>

int main()
 {
    int arr[100]; // maximum array size of 100
    int size, largest1, largest2;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
 }
