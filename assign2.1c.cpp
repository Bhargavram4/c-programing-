#include <stdio.h>

int main() 
{
    int Arr[5] = {12, 56, 34, 78, 100};
    int largest = Arr[0]; // Initialize largest to the first element of the array

    // Loop through the array and update largest if a larger element is found
    for (int i = 1; i < 5; i++) {
        if (Arr[i] > largest) {
            largest = Arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
}
