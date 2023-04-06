#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;

    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements in array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        // Initialize frequency count to zero for each element
        freq[i] = 0;
    }

    // Find frequency of each element
    for(i=0; i<size; i++)
    {
        count = 1;

        // Skip counting frequency of elements that have already been counted
        if(freq[i] != -1)
        {
            for(j=i+1; j<size; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    freq[j] = -1; // Mark as counted
                }
            }

            freq[i] = count;
        }
    }

    // Print frequency of each element
    printf("\nFrequency of all elements in array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != -1)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
